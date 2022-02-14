
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int display_power; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;



bool FUNC_0(struct drm_device *VAR_0)
{
 struct drm_psb_private *VAR_1 = VAR_0->dev_private;
 return VAR_1->display_power;
}
