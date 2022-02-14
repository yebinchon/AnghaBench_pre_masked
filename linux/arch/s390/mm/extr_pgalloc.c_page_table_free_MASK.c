
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int _refcount; int lru; } ;
struct TYPE_2__ {int lock; int pgtable_list; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned long*) ;
 unsigned int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mm_struct*) ;
 struct page* FUNC_6 (int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct mm_struct *VAR_3, unsigned long *VAR_4)
{
 struct page *VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_5 = FUNC_6(FUNC_1(VAR_4) >> VAR_1);
 if (!FUNC_5(VAR_3)) {

  VAR_6 = (FUNC_1(VAR_4) & ~VAR_0)/(VAR_2*sizeof(pte_t));
  FUNC_8(&VAR_3->context.lock);
  VAR_7 = FUNC_2(&VAR_5->_refcount, 1U << (VAR_6 + 24));
  VAR_7 >>= 24;
  if (VAR_7 & 3)
   FUNC_3(&VAR_5->lru, &VAR_3->context.pgtable_list);
  else
   FUNC_4(&VAR_5->lru);
  FUNC_9(&VAR_3->context.lock);
  if (VAR_7 != 0)
   return;
 } else {
  FUNC_2(&VAR_5->_refcount, 3U << 24);
 }

 FUNC_7(VAR_5);
 FUNC_0(VAR_5);
}
