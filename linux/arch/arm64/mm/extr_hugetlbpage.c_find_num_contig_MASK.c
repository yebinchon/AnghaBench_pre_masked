
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_0 (struct mm_struct*,unsigned long) ;
 int * FUNC_1 (int *,unsigned long) ;
 int * FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mm_struct *VAR_4, unsigned long VAR_5,
      pte_t *VAR_6, size_t *VAR_7)
{
 pgd_t *VAR_8 = FUNC_0(VAR_4, VAR_5);
 pud_t *VAR_9;
 pmd_t *VAR_10;

 *VAR_7 = VAR_2;
 VAR_9 = FUNC_2(VAR_8, VAR_5);
 VAR_10 = FUNC_1(VAR_9, VAR_5);
 if ((pte_t *)VAR_10 == VAR_6) {
  *VAR_7 = VAR_3;
  return VAR_0;
 }
 return VAR_1;
}
