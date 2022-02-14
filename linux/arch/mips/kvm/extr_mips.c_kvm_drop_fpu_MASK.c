
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aux_inuse; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvm_vcpu*,int ,int ) ;

void FUNC_5(struct kvm_vcpu *VAR_8)
{
 FUNC_2();
 if (VAR_7 && VAR_8->arch.aux_inuse & VAR_1) {
  FUNC_1();
  FUNC_4(VAR_8, VAR_2, VAR_4);
  VAR_8->arch.aux_inuse &= ~VAR_1;
 }
 if (VAR_8->arch.aux_inuse & VAR_0) {
  FUNC_0(VAR_5 | VAR_6);
  FUNC_4(VAR_8, VAR_2, VAR_3);
  VAR_8->arch.aux_inuse &= ~VAR_0;
 }
 FUNC_3();
}
