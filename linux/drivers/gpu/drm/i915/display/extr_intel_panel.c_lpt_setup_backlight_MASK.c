
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int alternate_pwm_increment; int active_low_pwm; int max; int enabled; int level; int min; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_3__ {int state; int dev; } ;
struct intel_connector {TYPE_1__ base; struct intel_panel panel; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct intel_connector*) ;
 int FUNC_6 (struct intel_connector*) ;
 int FUNC_7 (struct intel_connector*,int) ;
 int FUNC_8 (struct intel_connector*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct intel_connector*) ;
 struct drm_i915_private* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct intel_connector *VAR_12, enum pipe VAR_13)
{
 struct drm_i915_private *VAR_14 = FUNC_11(VAR_12->base.dev);
 struct intel_panel *VAR_15 = &VAR_12->panel;
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 bool VAR_20, VAR_21;

 if (FUNC_1(VAR_14))
  VAR_20 = FUNC_2(VAR_10) & VAR_8;
 else
  VAR_20 = FUNC_2(VAR_9) & VAR_11;
 VAR_15->backlight.alternate_pwm_increment = VAR_20;

 VAR_17 = FUNC_2(VAR_1);
 VAR_15->backlight.active_low_pwm = VAR_17 & VAR_4;

 VAR_18 = FUNC_2(VAR_2);
 VAR_15->backlight.max = VAR_18 >> 16;

 VAR_16 = FUNC_2(VAR_0);

 if (!VAR_15->backlight.max)
  VAR_15->backlight.max = FUNC_5(VAR_12);

 if (!VAR_15->backlight.max)
  return -VAR_7;

 VAR_15->backlight.min = FUNC_6(VAR_12);

 VAR_15->backlight.enabled = VAR_17 & VAR_5;

 VAR_21 = VAR_15->backlight.enabled && FUNC_1(VAR_14) &&
     !(VAR_17 & VAR_3) &&
     (VAR_16 & VAR_6);
 if (VAR_21)
  VAR_19 = FUNC_10(VAR_12);
 else
  VAR_19 = FUNC_8(VAR_12);
 VAR_19 = FUNC_7(VAR_12, VAR_19);
 VAR_15->backlight.level = FUNC_4(VAR_19, VAR_15->backlight.min,
           VAR_15->backlight.max);

 if (VAR_21) {
  FUNC_0("CPU backlight register was enabled, switching to PCH override\n");


  FUNC_9(VAR_12->base.state, VAR_15->backlight.level);
  FUNC_3(VAR_1, VAR_17 | VAR_3);

  FUNC_3(VAR_0, VAR_16 & ~VAR_6);
 }

 return 0;
}
