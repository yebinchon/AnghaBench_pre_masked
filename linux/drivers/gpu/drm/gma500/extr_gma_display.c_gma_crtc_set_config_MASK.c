
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_psb_private {int rpm_enabled; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_mode_set {TYPE_1__* crtc; } ;
struct drm_device {TYPE_2__* pdev; struct drm_psb_private* dev_private; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct drm_device* dev; } ;


 int FUNC_0 (struct drm_mode_set*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_mode_set *VAR_0,
   struct drm_modeset_acquire_ctx *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->crtc->dev;
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;
 int VAR_4;

 if (!VAR_3->rpm_enabled)
  return FUNC_0(VAR_0, VAR_1);

 FUNC_2(&VAR_2->pdev->dev);
 VAR_4 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(&VAR_2->pdev->dev);

 return VAR_4;
}
