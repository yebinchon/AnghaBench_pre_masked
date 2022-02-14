
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_bo_device {int dummy; } ;
struct drm_gem_vram_object {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_vram_object* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,struct ttm_bo_device*,struct drm_gem_vram_object*,size_t,unsigned long,int) ;
 int FUNC_2 (struct drm_gem_vram_object*) ;
 struct drm_gem_vram_object* FUNC_3 (int,int ) ;

struct drm_gem_vram_object *FUNC_4(struct drm_device *VAR_2,
      struct ttm_bo_device *VAR_3,
      size_t VAR_4,
      unsigned long VAR_5,
      bool VAR_6)
{
 struct drm_gem_vram_object *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_7, VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0)
  goto err_kfree;

 return VAR_7;

err_kfree:
 FUNC_2(VAR_7);
 return FUNC_0(VAR_8);
}
