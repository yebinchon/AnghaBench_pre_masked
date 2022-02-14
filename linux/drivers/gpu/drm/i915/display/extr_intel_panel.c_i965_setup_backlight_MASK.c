
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct intel_connector*) ;
 int FUNC_3 (struct intel_connector*) ;
 int FUNC_4 (struct intel_connector*) ;
 int FUNC_5 (struct intel_connector*,int) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct intel_connector *VAR_6, enum pipe VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_6(VAR_6->base.dev);
 struct intel_panel *VAR_9 = &VAR_6->panel;
 u32 VAR_10, VAR_11, VAR_12;

 VAR_11 = FUNC_0(VAR_1);
 VAR_9->backlight.combination_mode = VAR_11 & VAR_2;
 VAR_9->backlight.active_low_pwm = VAR_11 & VAR_3;

 VAR_10 = FUNC_0(VAR_0);
 VAR_9->backlight.max = VAR_10 >> 16;

 if (!VAR_9->backlight.max)
  VAR_9->backlight.max = FUNC_2(VAR_6);

 if (!VAR_9->backlight.max)
  return -VAR_5;

 if (VAR_9->backlight.combination_mode)
  VAR_9->backlight.max *= 0xff;

 VAR_9->backlight.min = FUNC_3(VAR_6);

 VAR_12 = FUNC_4(VAR_6);
 VAR_12 = FUNC_5(VAR_6, VAR_12);
 VAR_9->backlight.level = FUNC_1(VAR_12, VAR_9->backlight.min,
           VAR_9->backlight.max);

 VAR_9->backlight.enabled = VAR_11 & VAR_4;

 return 0;
}
