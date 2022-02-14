
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 unsigned long FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 unsigned long FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (int *,unsigned long) ;
 unsigned long FUNC_14 (int ) ;

bool FUNC_15(unsigned long VAR_4)
{
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8;

 if ((long)VAR_4 < 0L) {
  unsigned long VAR_9 = FUNC_0(VAR_4);

  if ((VAR_9 >> VAR_3) != 0UL)
   return 0;

  return FUNC_1(VAR_9 >> VAR_1);
 }

 if (VAR_4 >= (unsigned long) VAR_0 &&
     VAR_4 < (unsigned long)&VAR_2)
  return 1;

 VAR_5 = FUNC_3(VAR_4);
 if (FUNC_2(*VAR_5))
  return 0;

 VAR_6 = FUNC_13(VAR_5, VAR_4);
 if (FUNC_12(*VAR_6))
  return 0;

 if (FUNC_11(*VAR_6))
  return FUNC_1(FUNC_14(*VAR_6));

 VAR_7 = FUNC_6(VAR_6, VAR_4);
 if (FUNC_5(*VAR_7))
  return 0;

 if (FUNC_4(*VAR_7))
  return FUNC_1(FUNC_7(*VAR_7));

 VAR_8 = FUNC_9(VAR_7, VAR_4);
 if (FUNC_8(*VAR_8))
  return 0;

 return FUNC_1(FUNC_10(*VAR_8));
}
