
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int * FUNC_0 (struct mm_struct*,unsigned long) ;
 int * FUNC_1 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_2 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_3 (struct mm_struct*,int *,unsigned long) ;

pte_t *FUNC_4(struct mm_struct *VAR_2,
   unsigned long VAR_3, unsigned long VAR_4)
{
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_3);
 if (!VAR_6)
  return ((void*)0);
 if (VAR_4 >= VAR_1)
  return (pte_t *)VAR_6;
 VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_3);
 if (!VAR_7)
  return ((void*)0);
 if (VAR_4 >= VAR_0)
  return (pte_t *)VAR_7;
 return FUNC_2(VAR_2, VAR_7, VAR_3);
}
