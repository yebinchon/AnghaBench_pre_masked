
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 int * FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;

pte_t FUNC_8(struct mm_struct * VAR_0, unsigned long VAR_1)
{
 pgd_t *VAR_2;
 pud_t *VAR_3;
 pmd_t *VAR_4;
 pte_t *VAR_5, VAR_6;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!FUNC_0(*VAR_2)) {
  VAR_3 = FUNC_7(VAR_2, VAR_1);
  if (!FUNC_6(*VAR_3)) {
   VAR_4 = FUNC_3(VAR_3, VAR_1);
   if (!FUNC_2(*VAR_4)) {
    VAR_5 = FUNC_4(VAR_4, VAR_1);
    VAR_6 = *VAR_5;
    if (FUNC_5(VAR_6))
     return VAR_6;
   }
  }
 }
 return 0;

}
