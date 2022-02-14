
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ max; scalar_t__ enabled; TYPE_3__* device; int level; int present; } ;
struct intel_panel {TYPE_4__ backlight; } ;
struct TYPE_5__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int backlight_lock; } ;
struct drm_connector_state {int crtc; int connector; } ;
struct TYPE_6__ {int max_brightness; int brightness; } ;
struct TYPE_7__ {TYPE_2__ props; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_connector*,int ,int ) ;
 int FUNC_2 (struct drm_connector_state const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct intel_connector*,int ,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_connector* FUNC_7 (int ) ;

void FUNC_8(const struct drm_connector_state *VAR_0,
        u32 VAR_1, u32 VAR_2)
{
 struct intel_connector *VAR_3 = FUNC_7(VAR_0->connector);
 struct drm_i915_private *VAR_4 = FUNC_6(VAR_3->base.dev);
 struct intel_panel *VAR_5 = &VAR_3->panel;
 u32 VAR_6;







 if (!VAR_5->backlight.present || !VAR_0->crtc)
  return;

 FUNC_3(&VAR_4->backlight_lock);

 FUNC_0(VAR_5->backlight.max == 0);

 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_2);
 VAR_5->backlight.level = VAR_6;

 if (VAR_5->backlight.device)
  VAR_5->backlight.device->props.brightness =
   FUNC_5(VAR_3,
      VAR_5->backlight.level,
      VAR_5->backlight.device->props.max_brightness);

 if (VAR_5->backlight.enabled)
  FUNC_2(VAR_0, VAR_6);

 FUNC_4(&VAR_4->backlight_lock);
}
