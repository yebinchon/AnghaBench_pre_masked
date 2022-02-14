
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int max; int controller; scalar_t__ active_low_pwm; int level; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_connector* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(const struct intel_crtc_state *VAR_2,
     const struct drm_connector_state *VAR_3)
{
 struct intel_connector *VAR_4 = FUNC_8(VAR_3->connector);
 struct drm_i915_private *VAR_5 = FUNC_7(VAR_4->base.dev);
 struct intel_panel *VAR_6 = &VAR_4->panel;
 u32 VAR_7;

 VAR_7 = FUNC_3(FUNC_0(VAR_6->backlight.controller));
 if (VAR_7 & VAR_0) {
  FUNC_2("backlight already enabled\n");
  VAR_7 &= ~VAR_0;
  FUNC_4(FUNC_0(VAR_6->backlight.controller),
      VAR_7);
 }

 FUNC_4(FUNC_1(VAR_6->backlight.controller),
     VAR_6->backlight.max);

 FUNC_6(VAR_3, VAR_6->backlight.level);

 VAR_7 = 0;
 if (VAR_6->backlight.active_low_pwm)
  VAR_7 |= VAR_1;

 FUNC_4(FUNC_0(VAR_6->backlight.controller), VAR_7);
 FUNC_5(FUNC_0(VAR_6->backlight.controller));
 FUNC_4(FUNC_0(VAR_6->backlight.controller),
     VAR_7 | VAR_0);
}
