
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ xcr0; } ;
struct kvm_vcpu {scalar_t__ guest_xcr0_loaded; TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(struct kvm_vcpu *VAR_2)
{
 if (VAR_2->guest_xcr0_loaded) {
  if (VAR_2->arch.xcr0 != VAR_1)
   FUNC_0(VAR_0, VAR_1);
  VAR_2->guest_xcr0_loaded = 0;
 }
}
