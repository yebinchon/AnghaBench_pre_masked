
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct drm_display_info {int height_mm; int width_mm; } ;
struct TYPE_6__ {int name; TYPE_2__ base; struct drm_display_info display_info; int dev; } ;
struct intel_connector {TYPE_3__ base; } ;
struct TYPE_4__ {int lfp_lvds_vbt_mode; } ;
struct drm_i915_private {TYPE_1__ vbt; int drm; } ;
struct drm_display_mode {int height_mm; int width_mm; int type; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_2 (int *,int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;

struct drm_display_mode *
FUNC_4(struct intel_connector *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1->base.dev);
 struct drm_display_info *VAR_3 = &VAR_1->base.display_info;
 struct drm_display_mode *VAR_4;

 if (!VAR_2->vbt.lfp_lvds_vbt_mode)
  return ((void*)0);

 VAR_4 = FUNC_2(&VAR_2->drm,
     VAR_2->vbt.lfp_lvds_vbt_mode);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->type |= VAR_0;

 FUNC_0("[CONNECTOR:%d:%s] using mode from VBT: ",
        VAR_1->base.base.id, VAR_1->base.name);
 FUNC_1(VAR_4);

 VAR_3->width_mm = VAR_4->width_mm;
 VAR_3->height_mm = VAR_4->height_mm;

 return VAR_4;
}
