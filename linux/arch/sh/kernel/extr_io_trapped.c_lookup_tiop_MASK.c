
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapped_io {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 struct trapped_io* FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 int * VAR_0 ;

__attribute__((used)) static struct trapped_io *FUNC_9(unsigned long VAR_1)
{
 pgd_t *VAR_2;
 pud_t *VAR_3;
 pmd_t *VAR_4;
 pte_t *VAR_5;
 pte_t VAR_6;

 VAR_2 = VAR_0 + FUNC_1(VAR_1);
 if (!FUNC_2(*VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_7(VAR_2, VAR_1);
 if (!FUNC_8(*VAR_3))
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_3, VAR_1);
 if (!FUNC_4(*VAR_4))
  return ((void*)0);

 VAR_5 = FUNC_5(VAR_4, VAR_1);
 VAR_6 = *VAR_5;

 return FUNC_0(FUNC_6(VAR_6));
}
