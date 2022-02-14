
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fpu_enabled; int msa_enabled; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;
struct kvm_enable_cap {int cap; scalar_t__* args; scalar_t__ flags; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_1,
         struct kvm_enable_cap *VAR_2)
{
 int VAR_3 = 0;

 if (!FUNC_0(VAR_1->kvm, VAR_2->cap))
  return -VAR_0;
 if (VAR_2->flags)
  return -VAR_0;
 if (VAR_2->args[0])
  return -VAR_0;

 switch (VAR_2->cap) {
 case 129:
  VAR_1->arch.fpu_enabled = 1;
  break;
 case 128:
  VAR_1->arch.msa_enabled = 1;
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
