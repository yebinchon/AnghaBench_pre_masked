
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int hugepd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct mm_struct*,int *,int *) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,unsigned long,int) ;
 scalar_t__ FUNC_4 (int ) ;
 struct page* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct page *FUNC_9(struct vm_area_struct *VAR_2,
       unsigned long VAR_3, hugepd_t VAR_4,
       int VAR_5, int VAR_6)
{
 pte_t *VAR_7;
 spinlock_t *VAR_8;
 struct page *VAR_9 = ((void*)0);
 unsigned long VAR_10;
 int VAR_11 = FUNC_2(VAR_4);
 struct mm_struct *VAR_12 = VAR_2->vm_mm;

retry:




 VAR_8 = &VAR_12->page_table_lock;
 FUNC_7(VAR_8);

 VAR_7 = FUNC_3(VAR_4, VAR_3, VAR_6);
 if (FUNC_6(*VAR_7)) {
  VAR_10 = (1UL << VAR_11) - 1;
  VAR_9 = FUNC_5(*VAR_7);
  VAR_9 += ((VAR_3 & VAR_10) >> VAR_1);
  if (VAR_5 & VAR_0)
   FUNC_1(VAR_9);
 } else {
  if (FUNC_4(*VAR_7)) {
   FUNC_8(VAR_8);
   FUNC_0(VAR_12, VAR_7, VAR_8);
   goto retry;
  }
 }
 FUNC_8(VAR_8);
 return VAR_9;
}
