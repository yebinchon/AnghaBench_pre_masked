
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {scalar_t__ npages; scalar_t__ base_gfn; } ;
struct kvm {int mmu_lock; } ;
struct TYPE_2__ {int (* flush_shadow_memslot ) (struct kvm*,struct kvm_memory_slot*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm*,struct kvm_memory_slot*) ;

void FUNC_4(struct kvm *VAR_1,
       struct kvm_memory_slot *VAR_2)
{





 FUNC_1(&VAR_1->mmu_lock);

 FUNC_0(VAR_1, VAR_2->base_gfn,
         VAR_2->base_gfn + VAR_2->npages - 1);

 VAR_0->flush_shadow_memslot(VAR_1, VAR_2);
 FUNC_2(&VAR_1->mmu_lock);
}
