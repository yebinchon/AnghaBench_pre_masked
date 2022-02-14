
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct TYPE_5__ {int orientation; } ;
struct TYPE_6__ {int orientation; TYPE_2__ dsi; } ;
struct drm_i915_private {TYPE_3__ vbt; } ;
typedef enum drm_panel_orientation { ____Placeholder_drm_panel_orientation } drm_panel_orientation ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_private* FUNC_0 (int ) ;

enum drm_panel_orientation
FUNC_1(struct intel_connector *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_0(VAR_2->base.dev);
 enum drm_panel_orientation VAR_4;

 VAR_4 = VAR_3->vbt.dsi.orientation;
 if (VAR_4 != VAR_1)
  return VAR_4;

 VAR_4 = VAR_3->vbt.orientation;
 if (VAR_4 != VAR_1)
  return VAR_4;

 return VAR_0;
}
