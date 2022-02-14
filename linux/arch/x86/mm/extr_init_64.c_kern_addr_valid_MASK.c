
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int * FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int ) ;

int FUNC_16(unsigned long VAR_1)
{
 unsigned long VAR_2 = ((long)VAR_1) >> VAR_0;
 pgd_t *VAR_3;
 p4d_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7;

 if (VAR_2 != 0 && VAR_2 != -1UL)
  return 0;

 VAR_3 = FUNC_4(VAR_1);
 if (FUNC_3(*VAR_3))
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (FUNC_0(*VAR_4))
  return 0;

 VAR_5 = FUNC_14(VAR_4, VAR_1);
 if (FUNC_13(*VAR_5))
  return 0;

 if (FUNC_12(*VAR_5))
  return FUNC_2(FUNC_15(*VAR_5));

 VAR_6 = FUNC_7(VAR_5, VAR_1);
 if (FUNC_6(*VAR_6))
  return 0;

 if (FUNC_5(*VAR_6))
  return FUNC_2(FUNC_8(*VAR_6));

 VAR_7 = FUNC_10(VAR_6, VAR_1);
 if (FUNC_9(*VAR_7))
  return 0;

 return FUNC_2(FUNC_11(*VAR_7));
}
