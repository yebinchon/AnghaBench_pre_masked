
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int external_oneshot; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;





__attribute__((used)) static bool FUNC_0(struct kvm_vcpu *VAR_0, unsigned int VAR_1)
{
 switch (VAR_1) {
  case 129:

   return 0;
  case 128:





   if (VAR_0->arch.external_oneshot) {
    VAR_0->arch.external_oneshot = 0;
    return 1;
   }
   return 0;
 }

 return 1;
}
