
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long FUNC_0 (unsigned long) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;

pte_t *
FUNC_8 (struct mm_struct *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1);
 pgd_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7 = ((void*)0);

 VAR_4 = FUNC_1(VAR_0, VAR_3);
 if (FUNC_2(*VAR_4)) {
  VAR_5 = FUNC_6(VAR_4, VAR_3);
  if (FUNC_7(*VAR_5)) {
   VAR_6 = FUNC_3(VAR_5, VAR_3);
   if (FUNC_4(*VAR_6))
    VAR_7 = FUNC_5(VAR_6, VAR_3);
  }
 }

 return VAR_7;
}
