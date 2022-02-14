
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct ttm_mem_reg {int dummy; } ;
struct nouveau_sgdma_be {struct nouveau_mem* mem; int ttm; } ;
struct nouveau_mem {int dummy; } ;


 struct nouveau_mem* FUNC_0 (struct ttm_mem_reg*) ;
 int FUNC_1 (struct ttm_mem_reg*,int *) ;

__attribute__((used)) static int
FUNC_2(struct ttm_tt *VAR_0, struct ttm_mem_reg *VAR_1)
{
 struct nouveau_sgdma_be *VAR_2 = (struct nouveau_sgdma_be *)VAR_0;
 struct nouveau_mem *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_2->ttm);
 if (VAR_4)
  return VAR_4;

 VAR_2->mem = VAR_3;
 return 0;
}
