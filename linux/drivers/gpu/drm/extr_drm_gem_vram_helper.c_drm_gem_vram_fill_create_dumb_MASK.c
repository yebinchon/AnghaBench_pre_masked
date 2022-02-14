
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ttm_bo_device {int dummy; } ;
struct drm_mode_create_dumb {int width; int bpp; size_t height; size_t pitch; size_t size; int handle; } ;
struct TYPE_2__ {int base; } ;
struct drm_gem_vram_object {TYPE_1__ bo; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_gem_vram_object*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_gem_vram_object*) ;
 int FUNC_2 (struct drm_file*,int *,int *) ;
 int FUNC_3 (int *) ;
 struct drm_gem_vram_object* FUNC_4 (struct drm_device*,struct ttm_bo_device*,size_t,unsigned long,int) ;
 size_t FUNC_5 (size_t,int ) ;

int FUNC_6(struct drm_file *VAR_2,
      struct drm_device *VAR_3,
      struct ttm_bo_device *VAR_4,
      unsigned long VAR_5,
      bool VAR_6,
      struct drm_mode_create_dumb *VAR_7)
{
 size_t VAR_8, VAR_9;
 struct drm_gem_vram_object *VAR_10;
 int VAR_11;
 u32 VAR_12;

 VAR_8 = VAR_7->width * ((VAR_7->bpp + 7) / 8);
 VAR_9 = VAR_8 * VAR_7->height;

 VAR_9 = FUNC_5(VAR_9, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_9, VAR_5, VAR_6);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_11 = FUNC_2(VAR_2, &VAR_10->bo.base, &VAR_12);
 if (VAR_11)
  goto err_drm_gem_object_put_unlocked;

 FUNC_3(&VAR_10->bo.base);

 VAR_7->pitch = VAR_8;
 VAR_7->size = VAR_9;
 VAR_7->handle = VAR_12;

 return 0;

err_drm_gem_object_put_unlocked:
 FUNC_3(&VAR_10->bo.base);
 return VAR_11;
}
