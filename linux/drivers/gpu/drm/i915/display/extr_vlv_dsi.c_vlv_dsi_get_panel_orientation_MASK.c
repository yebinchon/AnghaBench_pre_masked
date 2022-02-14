
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum drm_panel_orientation { ____Placeholder_drm_panel_orientation } drm_panel_orientation ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct intel_connector*) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 int FUNC_4 (struct intel_connector*) ;

__attribute__((used)) static enum drm_panel_orientation
FUNC_5(struct intel_connector *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1->base.dev);
 enum drm_panel_orientation VAR_3;

 if (FUNC_1(VAR_2) || FUNC_0(VAR_2)) {
  VAR_3 = FUNC_4(VAR_1);
  if (VAR_3 != VAR_0)
   return VAR_3;
 }

 return FUNC_2(VAR_1);
}
