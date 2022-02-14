
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int * FUNC_0 (struct mm_struct*,unsigned long) ;
 int * FUNC_1 (int *,unsigned long) ;
 int * FUNC_2 (int *,unsigned long) ;
 int * FUNC_3 (int *,unsigned long) ;

pte_t *FUNC_4(struct mm_struct *VAR_0,
         unsigned long VAR_1, unsigned long VAR_2)
{
 pgd_t *VAR_3;
 pud_t *VAR_4;
 pmd_t *VAR_5;
 pte_t *VAR_6 = ((void*)0);

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {
  VAR_4 = FUNC_3(VAR_3, VAR_1);
  if (VAR_4) {
   VAR_5 = FUNC_1(VAR_4, VAR_1);
   if (VAR_5)
    VAR_6 = FUNC_2(VAR_5, VAR_1);
  }
 }

 return VAR_6;
}
