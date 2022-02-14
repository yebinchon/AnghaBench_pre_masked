
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct intel_connector*) ;
 int FUNC_3 (struct intel_connector*) ;
 int FUNC_4 (struct intel_connector*,int) ;
 int FUNC_5 (struct intel_connector*) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct intel_connector *VAR_7, enum pipe VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_6(VAR_7->base.dev);
 struct intel_panel *VAR_10 = &VAR_7->panel;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_12 = FUNC_0(VAR_1);
 VAR_10->backlight.active_low_pwm = VAR_12 & VAR_3;

 VAR_13 = FUNC_0(VAR_2);
 VAR_10->backlight.max = VAR_13 >> 16;

 if (!VAR_10->backlight.max)
  VAR_10->backlight.max = FUNC_2(VAR_7);

 if (!VAR_10->backlight.max)
  return -VAR_6;

 VAR_10->backlight.min = FUNC_3(VAR_7);

 VAR_14 = FUNC_5(VAR_7);
 VAR_14 = FUNC_4(VAR_7, VAR_14);
 VAR_10->backlight.level = FUNC_1(VAR_14, VAR_10->backlight.min,
           VAR_10->backlight.max);

 VAR_11 = FUNC_0(VAR_0);
 VAR_10->backlight.enabled = (VAR_11 & VAR_5) &&
  (VAR_12 & VAR_4);

 return 0;
}
