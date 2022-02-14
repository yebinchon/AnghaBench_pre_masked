
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int lvds_bl; int lfp_lvds_vbt_mode; int sdvo_lvds_vbt_mode; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct drm_device *VAR_0)
{
 struct drm_psb_private *VAR_1 = VAR_0->dev_private;

 FUNC_0(VAR_1->sdvo_lvds_vbt_mode);
 FUNC_0(VAR_1->lfp_lvds_vbt_mode);
 FUNC_0(VAR_1->lvds_bl);
}
