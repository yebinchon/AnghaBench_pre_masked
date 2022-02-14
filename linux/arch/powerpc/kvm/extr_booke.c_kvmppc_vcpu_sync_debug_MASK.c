
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shadow_msr; TYPE_2__* shared; } ;
struct kvm_vcpu {TYPE_1__ arch; scalar_t__ guest_debug; } ;
struct TYPE_4__ {int msr; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_1)
{


 VAR_1->arch.shadow_msr &= ~VAR_0;
 VAR_1->arch.shadow_msr |= VAR_1->arch.shared->msr & VAR_0;



 if (VAR_1->guest_debug) {







  VAR_1->arch.shadow_msr |= VAR_0;
  VAR_1->arch.shared->msr &= ~VAR_0;

 }
}
