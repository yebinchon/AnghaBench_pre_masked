
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_bo_kmap_obj {int * virtual; } ;
struct drm_gem_vram_object {struct ttm_bo_kmap_obj kmap; } ;


 int FUNC_0 (struct ttm_bo_kmap_obj*) ;

void FUNC_1(struct drm_gem_vram_object *VAR_0)
{
 struct ttm_bo_kmap_obj *VAR_1 = &VAR_0->kmap;

 if (!VAR_1->virtual)
  return;

 FUNC_0(VAR_1);
 VAR_1->virtual = ((void*)0);
}
