
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int max; int level; scalar_t__ active_low_pwm; scalar_t__ alternate_pwm_increment; } ;
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
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_connector* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(const struct intel_crtc_state *VAR_9,
     const struct drm_connector_state *VAR_10)
{
 struct intel_connector *VAR_11 = FUNC_7(VAR_10->connector);
 struct drm_i915_private *VAR_12 = FUNC_6(VAR_11->base.dev);
 struct intel_panel *VAR_13 = &VAR_11->panel;
 u32 VAR_14, VAR_15, VAR_16;

 VAR_14 = FUNC_2(VAR_0);
 if (VAR_14 & VAR_4) {
  FUNC_0("pch backlight already enabled\n");
  VAR_14 &= ~VAR_4;
  FUNC_3(VAR_0, VAR_14);
 }

 if (FUNC_1(VAR_12)) {
  VAR_16 = FUNC_2(VAR_7);
  if (VAR_13->backlight.alternate_pwm_increment)
   VAR_16 |= VAR_5;
  else
   VAR_16 &= ~VAR_5;
  FUNC_3(VAR_7, VAR_16);
 } else {
  VAR_16 = FUNC_2(VAR_6);
  if (VAR_13->backlight.alternate_pwm_increment)
   VAR_16 |= VAR_8;
  else
   VAR_16 &= ~VAR_8;
  FUNC_3(VAR_6, VAR_16);
 }

 VAR_15 = VAR_13->backlight.max << 16;
 FUNC_3(VAR_1, VAR_15);

 VAR_14 = 0;
 if (VAR_13->backlight.active_low_pwm)
  VAR_14 |= VAR_3;


 if (FUNC_1(VAR_12))
  VAR_14 |= VAR_2;

 FUNC_3(VAR_0, VAR_14);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0, VAR_14 | VAR_4);


 FUNC_5(VAR_10, VAR_13->backlight.level);
}
