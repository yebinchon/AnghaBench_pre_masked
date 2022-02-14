
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_userspace_memory_region {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef enum kvm_mr_change { ____Placeholder_kvm_mr_change } kvm_mr_change ;


 int FUNC_0 (struct kvm*,struct kvm_userspace_memory_region const*,struct kvm_memory_slot const*,struct kvm_memory_slot const*,int) ;

void FUNC_1(struct kvm *VAR_0,
       const struct kvm_userspace_memory_region *VAR_1,
       const struct kvm_memory_slot *VAR_2,
       const struct kvm_memory_slot *VAR_3,
       enum kvm_mr_change VAR_4)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
