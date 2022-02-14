
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_place {int dummy; } ;
struct ttm_mem_type_manager {int dummy; } ;
struct ttm_mem_reg {scalar_t__ start; } ;
struct ttm_buffer_object {int bdev; } ;
struct nouveau_mem {int dummy; } ;
struct nouveau_drm {int master; } ;
struct nouveau_bo {int comp; int kind; } ;


 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_bo* FUNC_1 (struct ttm_buffer_object*) ;
 struct nouveau_mem* FUNC_2 (struct ttm_mem_reg*) ;
 int FUNC_3 (int *,int ,int ,struct ttm_mem_reg*) ;

__attribute__((used)) static int
FUNC_4(struct ttm_mem_type_manager *VAR_0,
    struct ttm_buffer_object *VAR_1,
    const struct ttm_place *VAR_2,
    struct ttm_mem_reg *VAR_3)
{
 struct nouveau_bo *VAR_4 = FUNC_1(VAR_1);
 struct nouveau_drm *VAR_5 = FUNC_0(VAR_1->bdev);
 struct nouveau_mem *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(&VAR_5->master, VAR_4->kind, VAR_4->comp, VAR_3);
 VAR_6 = FUNC_2(VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_3->start = 0;
 return 0;
}
