
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {int dummy; } ;
struct ttm_mem_reg {int dummy; } ;
struct nouveau_sgdma_be {struct nouveau_mem* mem; int ttm; } ;
struct nouveau_mem {int * vma; TYPE_1__* cli; } ;
struct TYPE_4__ {int vmm; } ;
struct TYPE_3__ {TYPE_2__ vmm; } ;


 struct nouveau_mem* FUNC_0 (struct ttm_mem_reg*) ;
 int FUNC_1 (struct nouveau_mem*) ;
 int FUNC_2 (struct ttm_mem_reg*,int *) ;
 int FUNC_3 (struct nouveau_mem*,int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct ttm_tt *VAR_0, struct ttm_mem_reg *VAR_1)
{
 struct nouveau_sgdma_be *VAR_2 = (struct nouveau_sgdma_be *)VAR_0;
 struct nouveau_mem *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_2->ttm);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_3, &VAR_3->cli->vmm.vmm, &VAR_3->vma[0]);
 if (VAR_4) {
  FUNC_1(VAR_3);
  return VAR_4;
 }

 VAR_2->mem = VAR_3;
 return 0;
}
