
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
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ) ;

pte_t *FUNC_12(struct mm_struct *VAR_6,
         unsigned long VAR_7, unsigned long VAR_8)
{
 pgd_t *VAR_9;
 pud_t *VAR_10, VAR_11;
 pmd_t *VAR_12, VAR_13;

 VAR_9 = FUNC_1(VAR_6, VAR_7);
 if (!FUNC_2(FUNC_0(*VAR_9)))
  return ((void*)0);

 VAR_10 = FUNC_10(VAR_9, VAR_7);
 VAR_11 = FUNC_0(*VAR_10);
 if (VAR_8 != VAR_5 && FUNC_9(VAR_11))
  return ((void*)0);

 if (FUNC_8(VAR_11) || !FUNC_11(VAR_11))
  return (pte_t *)VAR_10;


 if (VAR_8 == VAR_1)
  VAR_7 &= VAR_0;

 VAR_12 = FUNC_5(VAR_10, VAR_7);
 VAR_13 = FUNC_0(*VAR_12);
 if (!(VAR_8 == VAR_4 || VAR_8 == VAR_1) &&
     FUNC_4(VAR_13))
  return ((void*)0);
 if (FUNC_3(VAR_13) || !FUNC_6(VAR_13))
  return (pte_t *)VAR_12;

 if (VAR_8 == VAR_3)
  return FUNC_7(VAR_12, (VAR_7 & VAR_2));

 return ((void*)0);
}
