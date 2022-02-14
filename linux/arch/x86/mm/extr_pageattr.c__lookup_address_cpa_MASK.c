
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa_data {scalar_t__ pgd; } ;
typedef int pte_t ;


 int * FUNC_0 (unsigned long,unsigned int*) ;
 int * FUNC_1 (scalar_t__,unsigned long,unsigned int*) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static pte_t *FUNC_3(struct cpa_data *VAR_0, unsigned long VAR_1,
      unsigned int *VAR_2)
{
 if (VAR_0->pgd)
  return FUNC_1(VAR_0->pgd + FUNC_2(VAR_1),
            VAR_1, VAR_2);

 return FUNC_0(VAR_1, VAR_2);
}
