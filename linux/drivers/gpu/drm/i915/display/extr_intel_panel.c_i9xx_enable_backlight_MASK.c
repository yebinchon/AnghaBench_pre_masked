
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int max; int level; scalar_t__ active_low_pwm; scalar_t__ combination_mode; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_connector* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(const struct intel_crtc_state *VAR_6,
      const struct drm_connector_state *VAR_7)
{
 struct intel_connector *VAR_8 = FUNC_8(VAR_7->connector);
 struct drm_i915_private *VAR_9 = FUNC_7(VAR_8->base.dev);
 struct intel_panel *VAR_10 = &VAR_8->panel;
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_2);
 if (VAR_11 & VAR_0) {
  FUNC_0("backlight already enabled\n");
  FUNC_2(VAR_2, 0);
 }

 VAR_12 = VAR_10->backlight.max;
 if (VAR_10->backlight.combination_mode)
  VAR_12 /= 0xff;

 VAR_11 = VAR_12 << 17;
 if (VAR_10->backlight.combination_mode)
  VAR_11 |= VAR_4;
 if (FUNC_4(VAR_9) && VAR_10->backlight.active_low_pwm)
  VAR_11 |= VAR_5;

 FUNC_2(VAR_2, VAR_11);
 FUNC_5(VAR_2);


 FUNC_6(VAR_7, VAR_10->backlight.level);






 if (FUNC_3(VAR_9, 2))
  FUNC_2(VAR_1, VAR_3);
}
