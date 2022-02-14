
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hfscr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct hv_guest_state {int hfscr; int ciabr; int dawrx0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_4, struct hv_guest_state *VAR_5)
{




 VAR_5->hfscr &= (VAR_3 | VAR_4->arch.hfscr);


 VAR_5->dawrx0 &= ~VAR_2;


 if ((VAR_5->ciabr & VAR_0) == VAR_1)
  VAR_5->ciabr &= ~VAR_0;
}
