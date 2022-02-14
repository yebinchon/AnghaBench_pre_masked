
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int mdfld_panel_id; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;



int FUNC_0(struct drm_device *VAR_0, int VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_0->dev_private;
 return VAR_2->mdfld_panel_id;
}
