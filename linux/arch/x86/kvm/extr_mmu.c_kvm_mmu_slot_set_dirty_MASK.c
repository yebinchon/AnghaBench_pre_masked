
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int npages; int base_gfn; } ;
struct kvm {int slots_lock; int mmu_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*,struct kvm_memory_slot*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm *VAR_1,
       struct kvm_memory_slot *VAR_2)
{
 bool VAR_3;

 FUNC_3(&VAR_1->mmu_lock);
 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_0, 0);
 FUNC_4(&VAR_1->mmu_lock);

 FUNC_1(&VAR_1->slots_lock);


 if (VAR_3)
  FUNC_0(VAR_1, VAR_2->base_gfn,
    VAR_2->npages);
}
