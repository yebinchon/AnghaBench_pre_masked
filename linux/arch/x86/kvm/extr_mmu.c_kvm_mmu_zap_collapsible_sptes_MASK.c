
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int mmu_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,struct kvm_memory_slot*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kvm *VAR_1,
       const struct kvm_memory_slot *VAR_2)
{

 FUNC_1(&VAR_1->mmu_lock);
 FUNC_0(VAR_1, (struct kvm_memory_slot *)VAR_2,
    VAR_0, 1);
 FUNC_2(&VAR_1->mmu_lock);
}
