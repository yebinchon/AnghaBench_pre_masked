
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
 int * FUNC_0 (struct mm_struct*,unsigned long) ;
 int * FUNC_1 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_2 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_3 (struct mm_struct*,int *,unsigned long) ;

pte_t *FUNC_4(struct mm_struct *VAR_1,
   unsigned long VAR_2, unsigned long VAR_3)
{
 pgd_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7 = ((void*)0);






 VAR_2 &= VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 VAR_5 = FUNC_3(VAR_1, VAR_4, VAR_2);
 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_2);
  if (VAR_6)
   VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_2);
 }
 return VAR_7;
}
