
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct nouveau_sgdma_be {int ttm; } ;


 int FUNC_0 (struct nouveau_sgdma_be*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ttm_tt *VAR_0)
{
 struct nouveau_sgdma_be *VAR_1 = (struct nouveau_sgdma_be *)VAR_0;

 if (VAR_0) {
  FUNC_1(&VAR_1->ttm);
  FUNC_0(VAR_1);
 }
}
