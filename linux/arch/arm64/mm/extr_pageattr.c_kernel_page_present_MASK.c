
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_0 ;

bool FUNC_13(struct page *VAR_1)
{
 pgd_t *VAR_2;
 pud_t *VAR_3, VAR_4;
 pmd_t *VAR_5, VAR_6;
 pte_t *VAR_7;
 unsigned long VAR_8 = (unsigned long)FUNC_2(VAR_1);

 if (!FUNC_1() && !VAR_0)
  return 1;

 VAR_2 = FUNC_4(VAR_8);
 if (FUNC_3(FUNC_0(*VAR_2)))
  return 0;

 VAR_3 = FUNC_11(VAR_2, VAR_8);
 VAR_4 = FUNC_0(*VAR_3);
 if (FUNC_10(VAR_4))
  return 0;
 if (FUNC_12(VAR_4))
  return 1;

 VAR_5 = FUNC_6(VAR_3, VAR_8);
 VAR_6 = FUNC_0(*VAR_5);
 if (FUNC_5(VAR_6))
  return 0;
 if (FUNC_7(VAR_6))
  return 1;

 VAR_7 = FUNC_8(VAR_5, VAR_8);
 return FUNC_9(FUNC_0(*VAR_7));
}
