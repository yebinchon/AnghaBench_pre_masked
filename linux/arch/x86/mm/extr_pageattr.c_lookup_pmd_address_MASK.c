
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (unsigned long) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ) ;

pmd_t *FUNC_11(unsigned long VAR_0)
{
 pgd_t *VAR_1;
 p4d_t *VAR_2;
 pud_t *VAR_3;

 VAR_1 = FUNC_5(VAR_0);
 if (FUNC_4(*VAR_1))
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (FUNC_1(*VAR_2) || FUNC_0(*VAR_2) || !FUNC_3(*VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_9(VAR_2, VAR_0);
 if (FUNC_8(*VAR_3) || FUNC_7(*VAR_3) || !FUNC_10(*VAR_3))
  return ((void*)0);

 return FUNC_6(VAR_3, VAR_0);
}
