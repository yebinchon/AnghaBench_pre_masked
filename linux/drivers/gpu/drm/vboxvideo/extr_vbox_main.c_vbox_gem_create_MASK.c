
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_1__* vram_mm; } ;
struct vbox_private {TYPE_3__ ddev; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_5__ {struct drm_gem_object base; } ;
struct drm_gem_vram_object {TYPE_2__ bo; } ;
struct TYPE_4__ {int bdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_gem_vram_object*) ;
 int VAR_2 ;
 int FUNC_2 (struct drm_gem_vram_object*) ;
 struct drm_gem_vram_object* FUNC_3 (TYPE_3__*,int *,scalar_t__,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

int FUNC_5(struct vbox_private *VAR_3,
      u32 VAR_4, bool VAR_5, struct drm_gem_object **VAR_6)
{
 struct drm_gem_vram_object *VAR_7;
 int VAR_8;

 *VAR_6 = ((void*)0);

 VAR_4 = FUNC_4(VAR_4, VAR_2);
 if (VAR_4 == 0)
  return -VAR_0;

 VAR_7 = FUNC_3(&VAR_3->ddev, &VAR_3->ddev.vram_mm->bdev,
      VAR_4, 0, 0);
 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8 != -VAR_1)
   FUNC_0("failed to allocate GEM object\n");
  return VAR_8;
 }

 *VAR_6 = &VAR_7->bo.base;

 return 0;
}
