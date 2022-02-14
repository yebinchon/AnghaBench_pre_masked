
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_bo_kmap_obj {void* virtual; } ;
struct TYPE_2__ {int num_pages; } ;
struct drm_gem_vram_object {TYPE_1__ bo; struct ttm_bo_kmap_obj kmap; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,struct ttm_bo_kmap_obj*) ;
 void* FUNC_2 (struct ttm_bo_kmap_obj*,int*) ;

void *FUNC_3(struct drm_gem_vram_object *VAR_0, bool VAR_1,
   bool *VAR_2)
{
 int VAR_3;
 struct ttm_bo_kmap_obj *VAR_4 = &VAR_0->kmap;

 if (VAR_4->virtual || !VAR_1)
  goto out;

 VAR_3 = FUNC_1(&VAR_0->bo, 0, VAR_0->bo.num_pages, VAR_4);
 if (VAR_3)
  return FUNC_0(VAR_3);

out:
 if (!VAR_2)
  return VAR_4->virtual;
 if (!VAR_4->virtual) {
  *VAR_2 = 0;
  return ((void*)0);
 }
 return FUNC_2(VAR_4, VAR_2);
}
