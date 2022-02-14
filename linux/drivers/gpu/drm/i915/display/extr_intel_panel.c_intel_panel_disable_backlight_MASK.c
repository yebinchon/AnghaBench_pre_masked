
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int enabled; int (* disable ) (struct drm_connector_state const*) ;TYPE_4__* device; int present; } ;
struct intel_panel {TYPE_5__ backlight; } ;
struct TYPE_6__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct TYPE_7__ {scalar_t__ switch_power_state; } ;
struct drm_i915_private {int backlight_lock; TYPE_2__ drm; } ;
struct drm_connector_state {int connector; } ;
struct TYPE_8__ {int power; } ;
struct TYPE_9__ {TYPE_3__ props; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_connector* FUNC_5 (int ) ;

void FUNC_6(const struct drm_connector_state *VAR_2)
{
 struct intel_connector *VAR_3 = FUNC_5(VAR_2->connector);
 struct drm_i915_private *VAR_4 = FUNC_4(VAR_3->base.dev);
 struct intel_panel *VAR_5 = &VAR_3->panel;

 if (!VAR_5->backlight.present)
  return;







 if (VAR_4->drm.switch_power_state == VAR_0) {
  FUNC_0("Skipping backlight disable on vga switch\n");
  return;
 }

 FUNC_1(&VAR_4->backlight_lock);

 if (VAR_5->backlight.device)
  VAR_5->backlight.device->props.power = VAR_1;
 VAR_5->backlight.enabled = 0;
 VAR_5->backlight.disable(VAR_2);

 FUNC_2(&VAR_4->backlight_lock);
}
