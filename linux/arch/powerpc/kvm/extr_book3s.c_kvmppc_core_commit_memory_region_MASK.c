
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_userspace_memory_region {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
struct TYPE_4__ {TYPE_1__* kvm_ops; } ;
struct kvm {TYPE_2__ arch; } ;
typedef enum kvm_mr_change { ____Placeholder_kvm_mr_change } kvm_mr_change ;
struct TYPE_3__ {int (* commit_memory_region ) (struct kvm*,struct kvm_userspace_memory_region const*,struct kvm_memory_slot const*,struct kvm_memory_slot const*,int) ;} ;


 int FUNC_0 (struct kvm*,struct kvm_userspace_memory_region const*,struct kvm_memory_slot const*,struct kvm_memory_slot const*,int) ;

void FUNC_1(struct kvm *VAR_0,
    const struct kvm_userspace_memory_region *VAR_1,
    const struct kvm_memory_slot *VAR_2,
    const struct kvm_memory_slot *VAR_3,
    enum kvm_mr_change VAR_4)
{
 VAR_0->arch.kvm_ops->commit_memory_region(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
