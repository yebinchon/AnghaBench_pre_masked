
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int * FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static inline pmd_t *FUNC_1(pgd_t *VAR_0, unsigned long VAR_1)
{
 return FUNC_0((pud_t *)VAR_0, VAR_1);
}
