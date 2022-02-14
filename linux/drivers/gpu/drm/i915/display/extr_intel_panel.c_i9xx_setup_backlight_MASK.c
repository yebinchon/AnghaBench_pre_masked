
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int combination_mode; int active_low_pwm; int max; int enabled; int min; int level; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct intel_connector*) ;
 int FUNC_7 (struct intel_connector*) ;
 int FUNC_8 (struct intel_connector*) ;
 int FUNC_9 (struct intel_connector*,int) ;
 struct drm_i915_private* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct intel_connector *VAR_4, enum pipe VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_10(VAR_4->base.dev);
 struct intel_panel *VAR_7 = &VAR_4->panel;
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_6, 2) || FUNC_2(VAR_6) || FUNC_3(VAR_6))
  VAR_7->backlight.combination_mode = VAR_8 & VAR_1;

 if (FUNC_4(VAR_6))
  VAR_7->backlight.active_low_pwm = VAR_8 & VAR_2;

 VAR_7->backlight.max = VAR_8 >> 17;

 if (!VAR_7->backlight.max) {
  VAR_7->backlight.max = FUNC_6(VAR_4);
  VAR_7->backlight.max >>= 1;
 }

 if (!VAR_7->backlight.max)
  return -VAR_3;

 if (VAR_7->backlight.combination_mode)
  VAR_7->backlight.max *= 0xff;

 VAR_7->backlight.min = FUNC_7(VAR_4);

 VAR_9 = FUNC_8(VAR_4);
 VAR_9 = FUNC_9(VAR_4, VAR_9);
 VAR_7->backlight.level = FUNC_5(VAR_9, VAR_7->backlight.min,
           VAR_7->backlight.max);

 VAR_7->backlight.enabled = VAR_9 != 0;

 return 0;
}
