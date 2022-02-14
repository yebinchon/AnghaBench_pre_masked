
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int * FUNC_0 (int *,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;

pte_t *FUNC_8(struct mm_struct *VAR_0,
         unsigned long VAR_1, unsigned long VAR_2)
{
 pgd_t *VAR_3;
 p4d_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6 = ((void*)0);

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_3(*VAR_3)) {
  VAR_4 = FUNC_0(VAR_3, VAR_1);
  if (FUNC_1(*VAR_4)) {
   VAR_5 = FUNC_6(VAR_4, VAR_1);
   if (FUNC_7(*VAR_5)) {
    if (FUNC_5(*VAR_5))
     return (pte_t *) VAR_5;
    VAR_6 = FUNC_4(VAR_5, VAR_1);
   }
  }
 }
 return (pte_t *) VAR_6;
}
