
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pte {scalar_t__ pte_hi; } ;



__attribute__((used)) static __inline int
FUNC_0(const struct pte *VAR_0, const struct pte *VAR_1)
{
 if (VAR_0->pte_hi == VAR_1->pte_hi)
  return (1);

 return (0);
}
