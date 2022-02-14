
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
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int * FUNC_3 (struct mm_struct*,unsigned long,int *) ;
 int * FUNC_4 (struct mm_struct*,unsigned long) ;
 int * FUNC_5 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_6 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_7 (struct mm_struct*,int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;

pte_t *FUNC_9(struct mm_struct *VAR_5,
        unsigned long VAR_6, unsigned long VAR_7)
{
 pgd_t *VAR_8;
 pud_t *VAR_9;
 pmd_t *VAR_10;
 pte_t *VAR_11 = ((void*)0);

 VAR_8 = FUNC_4(VAR_5, VAR_6);
 VAR_9 = FUNC_7(VAR_5, VAR_8, VAR_6);
 if (!VAR_9)
  return ((void*)0);

 if (VAR_7 == VAR_4) {
  VAR_11 = (pte_t *)VAR_9;
 } else if (VAR_7 == (VAR_2)) {
  VAR_10 = FUNC_5(VAR_5, VAR_9, VAR_6);

  FUNC_2(VAR_6 & (VAR_7 - 1));







  VAR_11 = FUNC_6(VAR_5, VAR_10, VAR_6);
 } else if (VAR_7 == VAR_3) {
  if (FUNC_0(VAR_0) &&
      FUNC_8(FUNC_1(*VAR_9)))
   VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_9);
  else
   VAR_11 = (pte_t *)FUNC_5(VAR_5, VAR_9, VAR_6);
 } else if (VAR_7 == (VAR_1)) {
  VAR_10 = FUNC_5(VAR_5, VAR_9, VAR_6);
  FUNC_2(VAR_6 & (VAR_7 - 1));
  return (pte_t *)VAR_10;
 }

 return VAR_11;
}
