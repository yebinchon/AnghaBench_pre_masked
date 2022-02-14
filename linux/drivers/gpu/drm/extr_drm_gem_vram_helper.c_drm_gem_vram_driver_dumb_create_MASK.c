
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_create_dumb {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* vram_mm; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct drm_file*,struct drm_device*,int *,int ,int,struct drm_mode_create_dumb*) ;

int FUNC_2(struct drm_file *VAR_1,
        struct drm_device *VAR_2,
        struct drm_mode_create_dumb *VAR_3)
{
 if (FUNC_0(!VAR_2->vram_mm, "VRAM MM not initialized"))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2, &VAR_2->vram_mm->bdev, 0,
          0, VAR_3);
}
