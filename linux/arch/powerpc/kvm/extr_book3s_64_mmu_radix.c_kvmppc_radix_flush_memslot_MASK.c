
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {unsigned long base_gfn; unsigned long npages; } ;
struct TYPE_2__ {int lpid; int pgtable; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,unsigned long,int *,unsigned int*) ;
 int FUNC_1 (struct kvm*,int *,unsigned long,unsigned int,struct kvm_memory_slot const*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm *VAR_2,
    const struct kvm_memory_slot *VAR_3)
{
 unsigned long VAR_4;
 pte_t *VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7;

 VAR_6 = VAR_3->base_gfn << VAR_0;
 FUNC_3(&VAR_2->mmu_lock);
 for (VAR_4 = VAR_3->npages; VAR_4; --VAR_4) {
  VAR_5 = FUNC_0(VAR_2->arch.pgtable, VAR_6, ((void*)0), &VAR_7);
  if (VAR_5 && FUNC_2(*VAR_5))
   FUNC_1(VAR_2, VAR_5, VAR_6, VAR_7, VAR_3,
      VAR_2->arch.lpid);
  VAR_6 += VAR_1;
 }
 FUNC_4(&VAR_2->mmu_lock);
}
