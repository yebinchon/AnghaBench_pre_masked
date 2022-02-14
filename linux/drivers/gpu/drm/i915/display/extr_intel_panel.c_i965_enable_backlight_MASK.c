
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int max; int level; scalar_t__ active_low_pwm; scalar_t__ combination_mode; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int crtc; int connector; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_6__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_connector* FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(const struct intel_crtc_state *VAR_5,
      const struct drm_connector_state *VAR_6)
{
 struct intel_connector *VAR_7 = FUNC_7(VAR_6->connector);
 struct drm_i915_private *VAR_8 = FUNC_6(VAR_7->base.dev);
 struct intel_panel *VAR_9 = &VAR_7->panel;
 enum pipe VAR_10 = FUNC_8(VAR_6->crtc)->pipe;
 u32 VAR_11, VAR_12, VAR_13;

 VAR_12 = FUNC_2(VAR_1);
 if (VAR_12 & VAR_4) {
  FUNC_1("backlight already enabled\n");
  VAR_12 &= ~VAR_4;
  FUNC_3(VAR_1, VAR_12);
 }

 VAR_13 = VAR_9->backlight.max;
 if (VAR_9->backlight.combination_mode)
  VAR_13 /= 0xff;

 VAR_11 = VAR_13 << 16;
 FUNC_3(VAR_0, VAR_11);

 VAR_12 = FUNC_0(VAR_10);
 if (VAR_9->backlight.combination_mode)
  VAR_12 |= VAR_2;
 if (VAR_9->backlight.active_low_pwm)
  VAR_12 |= VAR_3;
 FUNC_3(VAR_1, VAR_12);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1, VAR_12 | VAR_4);

 FUNC_5(VAR_6, VAR_9->backlight.level);
}
