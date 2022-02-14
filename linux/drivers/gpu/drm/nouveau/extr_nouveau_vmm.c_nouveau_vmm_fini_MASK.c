
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_vmm {int * cli; int vmm; int svmm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nouveau_vmm *VAR_0)
{
 FUNC_0(&VAR_0->svmm);
 FUNC_1(&VAR_0->vmm);
 VAR_0->cli = ((void*)0);
}
