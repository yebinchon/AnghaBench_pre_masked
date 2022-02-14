
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int lru; int _refcount; } ;
struct mmu_gather {struct mm_struct* mm; } ;
struct TYPE_2__ {int lock; int pgtable_list; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned long*) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (struct mm_struct*,unsigned long*,unsigned long) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct mm_struct*) ;
 struct page* FUNC_6 (unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mmu_gather*,unsigned long*) ;

void FUNC_10(struct mmu_gather *VAR_3, unsigned long *VAR_4,
    unsigned long VAR_5)
{
 struct mm_struct *VAR_6;
 struct page *VAR_7;
 unsigned int VAR_8, VAR_9;

 VAR_6 = VAR_3->mm;
 VAR_7 = FUNC_6(FUNC_0(VAR_4) >> VAR_1);
 if (FUNC_5(VAR_6)) {
  FUNC_2(VAR_6, VAR_4, VAR_5);
  VAR_4 = (unsigned long *) (FUNC_0(VAR_4) | 3);
  FUNC_9(VAR_3, VAR_4);
  return;
 }
 VAR_8 = (FUNC_0(VAR_4) & ~VAR_0) / (VAR_2*sizeof(pte_t));
 FUNC_7(&VAR_6->context.lock);
 VAR_9 = FUNC_1(&VAR_7->_refcount, 0x11U << (VAR_8 + 24));
 VAR_9 >>= 24;
 if (VAR_9 & 3)
  FUNC_3(&VAR_7->lru, &VAR_6->context.pgtable_list);
 else
  FUNC_4(&VAR_7->lru);
 FUNC_8(&VAR_6->context.lock);
 VAR_4 = (unsigned long *) (FUNC_0(VAR_4) | (1U << VAR_8));
 FUNC_9(VAR_3, VAR_4);
}
