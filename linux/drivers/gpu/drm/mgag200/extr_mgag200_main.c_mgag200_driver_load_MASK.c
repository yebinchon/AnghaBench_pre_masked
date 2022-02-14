
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int * pixels_current; int * pixels_2; int * pixels_1; } ;
struct TYPE_6__ {int vram_size; } ;
struct mga_device {struct drm_device* dev; TYPE_5__ cursor; TYPE_1__ mc; } ;
struct TYPE_7__ {int preferred_depth; int prefer_shadow; void* funcs; } ;
struct drm_device {int * dev_private; TYPE_4__* pdev; TYPE_3__* vram_mm; TYPE_2__ mode_config; int dev; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mga_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 struct mga_device* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct drm_device*,int ) ;
 void* FUNC_6 (struct drm_device*,int *,int ,int ,int ) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int VAR_3 ;
 int FUNC_9 (struct drm_device*,unsigned long) ;
 int FUNC_10 (struct mga_device*) ;
 int FUNC_11 (struct mga_device*) ;
 int FUNC_12 (struct mga_device*) ;
 int FUNC_13 (int,int ) ;

int FUNC_14(struct drm_device *VAR_4, unsigned long VAR_5)
{
 struct mga_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_4->dev, sizeof(struct mga_device), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_4->dev_private = (void *)VAR_6;
 VAR_6->dev = VAR_4;

 VAR_7 = FUNC_9(VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_2(&VAR_4->pdev->dev, "Fatal error during GPU init: %d\n", VAR_7);
  return VAR_7;
 }
 VAR_7 = FUNC_11(VAR_6);
 if (VAR_7)
  goto err_mm;

 FUNC_8(VAR_4);
 VAR_4->mode_config.funcs = (void *)&VAR_3;
 if (FUNC_1(VAR_6) && VAR_6->mc.vram_size < (2048*1024))
  VAR_4->mode_config.preferred_depth = 16;
 else
  VAR_4->mode_config.preferred_depth = 32;
 VAR_4->mode_config.prefer_shadow = 1;

 VAR_7 = FUNC_12(VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_4->pdev->dev, "Fatal error during modeset init: %d\n", VAR_7);
  goto err_modeset;
 }


 VAR_6->cursor.pixels_1 = FUNC_6(VAR_4, &VAR_4->vram_mm->bdev,
          FUNC_13(48*64, VAR_2),
          0, 0);
 VAR_6->cursor.pixels_2 = FUNC_6(VAR_4, &VAR_4->vram_mm->bdev,
          FUNC_13(48*64, VAR_2),
          0, 0);
 if (FUNC_0(VAR_6->cursor.pixels_2) || FUNC_0(VAR_6->cursor.pixels_1)) {
  VAR_6->cursor.pixels_1 = ((void*)0);
  VAR_6->cursor.pixels_2 = ((void*)0);
  FUNC_3(&VAR_4->pdev->dev,
   "Could not allocate space for cursors. Not doing hardware cursors.\n");
 }
 VAR_6->cursor.pixels_current = ((void*)0);

 VAR_7 = FUNC_5(VAR_6->dev, 0);
 if (VAR_7)
  goto err_modeset;

 return 0;

err_modeset:
 FUNC_7(VAR_4);
 FUNC_10(VAR_6);
err_mm:
 VAR_4->dev_private = ((void*)0);

 return VAR_7;
}
