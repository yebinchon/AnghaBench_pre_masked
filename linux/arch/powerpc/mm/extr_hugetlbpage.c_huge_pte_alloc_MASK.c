
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int page_table_lock; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int hugepd_t ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct mm_struct*,int *,unsigned long,unsigned int,unsigned int,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,unsigned long,unsigned int) ;
 int * FUNC_6 (struct mm_struct*,unsigned long) ;
 int * FUNC_7 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_8 (struct mm_struct*,int *) ;
 int * FUNC_9 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_10 (struct mm_struct*,int *) ;

pte_t *FUNC_11(struct mm_struct *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 pgd_t *VAR_6;
 pud_t *VAR_7;
 pmd_t *VAR_8;
 hugepd_t *VAR_9 = ((void*)0);
 unsigned VAR_10 = FUNC_1(VAR_5);
 unsigned VAR_11 = VAR_0;
 spinlock_t *VAR_12;

 VAR_4 &= ~(VAR_5-1);
 VAR_6 = FUNC_6(VAR_3, VAR_4);
 if (VAR_10 >= VAR_0) {
  VAR_12 = &VAR_3->page_table_lock;
  VAR_9 = (hugepd_t *)VAR_6;
 } else {
  VAR_11 = VAR_2;
  VAR_7 = FUNC_9(VAR_3, VAR_6, VAR_4);
  if (!VAR_7)
   return ((void*)0);
  if (VAR_10 >= VAR_2) {
   VAR_12 = FUNC_10(VAR_3, VAR_7);
   VAR_9 = (hugepd_t *)VAR_7;
  } else {
   VAR_11 = VAR_1;
   VAR_8 = FUNC_7(VAR_3, VAR_7, VAR_4);
   if (!VAR_8)
    return ((void*)0);
   VAR_12 = FUNC_8(VAR_3, VAR_8);
   VAR_9 = (hugepd_t *)VAR_8;
  }
 }

 if (!VAR_9)
  return ((void*)0);

 FUNC_0(!FUNC_3(*VAR_9) && !FUNC_4(*VAR_9));

 if (FUNC_3(*VAR_9) && FUNC_2(VAR_3, VAR_9, VAR_4,
        VAR_11, VAR_10, VAR_12))
  return ((void*)0);

 return FUNC_5(*VAR_9, VAR_4, VAR_11);
}
