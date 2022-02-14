
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_drm_private {int rev; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;



int FUNC_0(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct tilcdc_drm_private *VAR_2 = VAR_1->dev_private;
 int VAR_3 = 0;

 if (VAR_2->rev == 1)
  VAR_3 = 1024;
 else if (VAR_2->rev == 2)
  VAR_3 = 2048;

 return VAR_3;
}
