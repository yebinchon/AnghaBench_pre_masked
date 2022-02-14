
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_vma {int * mem; int addr; TYPE_1__* vmm; } ;
struct TYPE_2__ {int vmm; } ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct nouveau_vma *VAR_0)
{
 if (VAR_0->mem) {
  FUNC_0(&VAR_0->vmm->vmm, VAR_0->addr);
  VAR_0->mem = ((void*)0);
 }
}
