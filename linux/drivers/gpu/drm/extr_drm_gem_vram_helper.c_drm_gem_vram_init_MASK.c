
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_bo_device {int dummy; } ;
struct TYPE_5__ {int * funcs; } ;
struct TYPE_4__ {TYPE_2__ base; struct ttm_bo_device* bdev; } ;
struct drm_gem_vram_object {TYPE_1__ bo; int placement; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,TYPE_2__*,size_t) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (struct drm_gem_vram_object*,int) ;
 size_t FUNC_3 (struct ttm_bo_device*,size_t,int) ;
 int FUNC_4 (struct ttm_bo_device*,TYPE_1__*,size_t,int ,int *,unsigned long,int,size_t,int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_5,
        struct ttm_bo_device *VAR_6,
        struct drm_gem_vram_object *VAR_7,
        size_t VAR_8, unsigned long VAR_9,
        bool VAR_10)
{
 int VAR_11;
 size_t VAR_12;

 if (!VAR_7->bo.base.funcs)
  VAR_7->bo.base.funcs = &VAR_2;

 VAR_11 = FUNC_0(VAR_5, &VAR_7->bo.base, VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_12 = FUNC_3(VAR_6, VAR_8, sizeof(*VAR_7));

 VAR_7->bo.bdev = VAR_6;
 FUNC_2(VAR_7, VAR_1 | VAR_0);

 VAR_11 = FUNC_4(VAR_6, &VAR_7->bo, VAR_8, VAR_3,
     &VAR_7->placement, VAR_9, VAR_10, VAR_12,
     ((void*)0), ((void*)0), VAR_4);
 if (VAR_11)
  goto err_drm_gem_object_release;

 return 0;

err_drm_gem_object_release:
 FUNC_1(&VAR_7->bo.base);
 return VAR_11;
}
