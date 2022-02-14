
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int pgd; } ;
typedef int pte_t ;


 int * FUNC_0 (int ,unsigned long,int *,int *) ;

pte_t *FUNC_1(struct mm_struct *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{




 return FUNC_0(VAR_0->pgd, VAR_1, ((void*)0), ((void*)0));
}
