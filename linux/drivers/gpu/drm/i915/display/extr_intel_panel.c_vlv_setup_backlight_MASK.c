
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int active_low_pwm; int max; int enabled; int min; int level; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct intel_connector*) ;
 int FUNC_7 (struct intel_connector*) ;
 int FUNC_8 (struct intel_connector*,int) ;
 struct drm_i915_private* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct intel_connector *VAR_5, enum pipe VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_9(VAR_5->base.dev);
 struct intel_panel *VAR_8 = &VAR_5->panel;
 u32 VAR_9, VAR_10, VAR_11;

 if (FUNC_3(VAR_6 != VAR_3 && VAR_6 != VAR_4))
  return -VAR_2;

 VAR_10 = FUNC_0(FUNC_2(VAR_6));
 VAR_8->backlight.active_low_pwm = VAR_10 & VAR_0;

 VAR_9 = FUNC_0(FUNC_1(VAR_6));
 VAR_8->backlight.max = VAR_9 >> 16;

 if (!VAR_8->backlight.max)
  VAR_8->backlight.max = FUNC_6(VAR_5);

 if (!VAR_8->backlight.max)
  return -VAR_2;

 VAR_8->backlight.min = FUNC_7(VAR_5);

 VAR_11 = FUNC_4(VAR_7, VAR_6);
 VAR_11 = FUNC_8(VAR_5, VAR_11);
 VAR_8->backlight.level = FUNC_5(VAR_11, VAR_8->backlight.min,
           VAR_8->backlight.max);

 VAR_8->backlight.enabled = VAR_10 & VAR_1;

 return 0;
}
