
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int controller; int max; scalar_t__ active_low_pwm; int level; scalar_t__ util_pin_active_low; } ;
struct intel_panel {TYPE_3__ backlight; } ;
struct TYPE_6__ {int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_8__ {int pipe; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_connector* FUNC_9 (int ) ;
 TYPE_4__* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(const struct intel_crtc_state *VAR_6,
     const struct drm_connector_state *VAR_7)
{
 struct intel_connector *VAR_8 = FUNC_9(VAR_7->connector);
 struct drm_i915_private *VAR_9 = FUNC_8(VAR_8->base.dev);
 struct intel_panel *VAR_10 = &VAR_8->panel;
 enum pipe VAR_11 = FUNC_10(VAR_6->base.crtc)->pipe;
 u32 VAR_12, VAR_13;


 if (VAR_10->backlight.controller == 1) {
  VAR_13 = FUNC_3(VAR_2);
  if (VAR_13 & VAR_3) {
   FUNC_2("util pin already enabled\n");
   VAR_13 &= ~VAR_3;
   FUNC_4(VAR_2, VAR_13);
  }

  VAR_13 = 0;
  if (VAR_10->backlight.util_pin_active_low)
   VAR_13 |= VAR_5;
  FUNC_4(VAR_2, VAR_13 | FUNC_6(VAR_11) |
    VAR_4 | VAR_3);
 }

 VAR_12 = FUNC_3(FUNC_0(VAR_10->backlight.controller));
 if (VAR_12 & VAR_0) {
  FUNC_2("backlight already enabled\n");
  VAR_12 &= ~VAR_0;
  FUNC_4(FUNC_0(VAR_10->backlight.controller),
    VAR_12);
 }

 FUNC_4(FUNC_1(VAR_10->backlight.controller),
   VAR_10->backlight.max);

 FUNC_7(VAR_7, VAR_10->backlight.level);

 VAR_12 = 0;
 if (VAR_10->backlight.active_low_pwm)
  VAR_12 |= VAR_1;

 FUNC_4(FUNC_0(VAR_10->backlight.controller), VAR_12);
 FUNC_5(FUNC_0(VAR_10->backlight.controller));
 FUNC_4(FUNC_0(VAR_10->backlight.controller),
   VAR_12 | VAR_0);
}
