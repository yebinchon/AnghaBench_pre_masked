
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enabled; int present; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct intel_encoder {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int backlight_lock; } ;
struct drm_connector_state {int connector; } ;


 int FUNC_0 (struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_connector* FUNC_4 (int ) ;

void FUNC_5(struct intel_encoder *VAR_0,
      const struct intel_crtc_state *VAR_1,
      const struct drm_connector_state *VAR_2)
{
 struct intel_connector *VAR_3 = FUNC_4(VAR_2->connector);
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_3->base.dev);
 struct intel_panel *VAR_5 = &VAR_3->panel;

 if (!VAR_5->backlight.present)
  return;

 FUNC_1(&VAR_4->backlight_lock);
 if (!VAR_5->backlight.enabled)
  FUNC_0(VAR_1, VAR_2);

 FUNC_2(&VAR_4->backlight_lock);
}
