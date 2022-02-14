
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvif_vma {int addr; } ;
struct nouveau_vma {struct nouveau_mem* mem; TYPE_1__* vmm; int addr; } ;
struct nouveau_mem {int dummy; } ;
struct TYPE_2__ {int vmm; } ;


 int FUNC_0 (struct nouveau_mem*,int *,struct nvif_vma*) ;

int
FUNC_1(struct nouveau_vma *VAR_0, struct nouveau_mem *VAR_1)
{
 struct nvif_vma VAR_2 = { .addr = VAR_0->addr };
 int VAR_3 = FUNC_0(VAR_1, &VAR_0->vmm->vmm, &VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_0->mem = VAR_1;
 return 0;
}
