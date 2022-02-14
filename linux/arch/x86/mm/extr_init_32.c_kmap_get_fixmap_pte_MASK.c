
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int * FUNC_0 (int *,unsigned long) ;
 int * FUNC_1 (unsigned long) ;
 int * FUNC_2 (int *,unsigned long) ;
 int * FUNC_3 (int *,unsigned long) ;
 int * FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline pte_t *FUNC_5(unsigned long VAR_0)
{
 pgd_t *VAR_1 = FUNC_1(VAR_0);
 p4d_t *VAR_2 = FUNC_0(VAR_1, VAR_0);
 pud_t *VAR_3 = FUNC_4(VAR_2, VAR_0);
 pmd_t *VAR_4 = FUNC_2(VAR_3, VAR_0);
 return FUNC_3(VAR_4, VAR_0);
}
