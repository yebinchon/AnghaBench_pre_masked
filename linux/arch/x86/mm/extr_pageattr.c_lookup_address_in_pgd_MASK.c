
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ) ;

pte_t *FUNC_14(pgd_t *VAR_5, unsigned long VAR_6,
        unsigned int *VAR_7)
{
 p4d_t *VAR_8;
 pud_t *VAR_9;
 pmd_t *VAR_10;

 *VAR_7 = VAR_4;

 if (FUNC_4(*VAR_5))
  return ((void*)0);

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (FUNC_1(*VAR_8))
  return ((void*)0);

 *VAR_7 = VAR_3;
 if (FUNC_0(*VAR_8) || !FUNC_3(*VAR_8))
  return (pte_t *)VAR_8;

 VAR_9 = FUNC_12(VAR_8, VAR_6);
 if (FUNC_11(*VAR_9))
  return ((void*)0);

 *VAR_7 = VAR_0;
 if (FUNC_10(*VAR_9) || !FUNC_13(*VAR_9))
  return (pte_t *)VAR_9;

 VAR_10 = FUNC_7(VAR_9, VAR_6);
 if (FUNC_6(*VAR_10))
  return ((void*)0);

 *VAR_7 = VAR_1;
 if (FUNC_5(*VAR_10) || !FUNC_8(*VAR_10))
  return (pte_t *)VAR_10;

 *VAR_7 = VAR_2;

 return FUNC_9(VAR_10, VAR_6);
}
