
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,unsigned long) ;

pte_t *FUNC_9(struct mm_struct *VAR_0,
         unsigned long VAR_1, unsigned long VAR_2)
{
 pgd_t *VAR_3;
 pud_t *VAR_4;
 pmd_t *VAR_5;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_2(*VAR_3))
  return ((void*)0);
 VAR_4 = FUNC_8(VAR_3, VAR_1);
 if (FUNC_7(*VAR_4))
  return ((void*)0);
 if (FUNC_1(*VAR_4))
  return (pte_t *)VAR_4;
 VAR_5 = FUNC_5(VAR_4, VAR_1);
 if (FUNC_4(*VAR_5))
  return ((void*)0);
 if (FUNC_0(*VAR_5))
  return (pte_t *)VAR_5;
 return FUNC_6(VAR_5, VAR_1);
}
