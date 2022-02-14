
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_placement {int dummy; } ;
struct ttm_buffer_object {int dummy; } ;
struct drm_gem_vram_object {struct ttm_placement placement; } ;


 int VAR_0 ;
 struct drm_gem_vram_object* FUNC_0 (struct ttm_buffer_object*) ;
 int FUNC_1 (struct drm_gem_vram_object*,int ) ;
 int FUNC_2 (struct ttm_buffer_object*) ;

void FUNC_3(struct ttm_buffer_object *VAR_1,
     struct ttm_placement *VAR_2)
{
 struct drm_gem_vram_object *VAR_3;


 if (!FUNC_2(VAR_1))
  return;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_1(VAR_3, VAR_0);
 *VAR_2 = VAR_3->placement;
}
