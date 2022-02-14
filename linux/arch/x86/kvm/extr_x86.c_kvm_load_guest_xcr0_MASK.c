
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ xcr0; } ;
struct kvm_vcpu {int guest_xcr0_loaded; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct kvm_vcpu *VAR_3)
{
 if (FUNC_0(VAR_3, VAR_0) &&
   !VAR_3->guest_xcr0_loaded) {

  if (VAR_3->arch.xcr0 != VAR_2)
   FUNC_1(VAR_1, VAR_3->arch.xcr0);
  VAR_3->guest_xcr0_loaded = 1;
 }
}
