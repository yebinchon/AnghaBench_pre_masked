
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,unsigned long) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline pte_t *FUNC_6(pgd_t *VAR_0, unsigned long VAR_1)
{
 pte_t *VAR_2 = ((void*)0);

 if (!FUNC_0(*VAR_0)) {
  pud_t *VAR_3 = FUNC_5(VAR_0, VAR_1);
  if (!FUNC_4(*VAR_3)) {
   pmd_t *VAR_4 = FUNC_2(VAR_3, VAR_1);
   if (!FUNC_1(*VAR_4))
    VAR_2 = FUNC_3(VAR_4, VAR_1);
  }
 }
 return VAR_2;
}
