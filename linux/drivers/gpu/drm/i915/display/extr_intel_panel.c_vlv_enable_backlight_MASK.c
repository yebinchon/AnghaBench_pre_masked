
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int max; scalar_t__ active_low_pwm; int level; } ;
struct intel_panel {TYPE_3__ backlight; } ;
struct TYPE_6__ {int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_8__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_connector* FUNC_8 (int ) ;
 TYPE_4__* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(const struct intel_crtc_state *VAR_2,
     const struct drm_connector_state *VAR_3)
{
 struct intel_connector *VAR_4 = FUNC_8(VAR_3->connector);
 struct drm_i915_private *VAR_5 = FUNC_7(VAR_4->base.dev);
 struct intel_panel *VAR_6 = &VAR_4->panel;
 enum pipe VAR_7 = FUNC_9(VAR_2->base.crtc)->pipe;
 u32 VAR_8, VAR_9;

 VAR_9 = FUNC_1(FUNC_5(VAR_7));
 if (VAR_9 & VAR_1) {
  FUNC_0("backlight already enabled\n");
  VAR_9 &= ~VAR_1;
  FUNC_2(FUNC_5(VAR_7), VAR_9);
 }

 VAR_8 = VAR_6->backlight.max << 16;
 FUNC_2(FUNC_4(VAR_7), VAR_8);


 FUNC_6(VAR_3, VAR_6->backlight.level);

 VAR_9 = 0;
 if (VAR_6->backlight.active_low_pwm)
  VAR_9 |= VAR_0;
 FUNC_2(FUNC_5(VAR_7), VAR_9);
 FUNC_3(FUNC_5(VAR_7));
 FUNC_2(FUNC_5(VAR_7), VAR_9 | VAR_1);
}
