
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int max; scalar_t__ active_low_pwm; int level; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct intel_crtc_state {int cpu_transcoder; } ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_connector* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(const struct intel_crtc_state *VAR_8,
     const struct drm_connector_state *VAR_9)
{
 struct intel_connector *VAR_10 = FUNC_7(VAR_9->connector);
 struct drm_i915_private *VAR_11 = FUNC_6(VAR_10->base.dev);
 struct intel_panel *VAR_12 = &VAR_10->panel;
 enum transcoder VAR_13 = VAR_8->cpu_transcoder;
 u32 VAR_14, VAR_15, VAR_16;

 VAR_14 = FUNC_2(VAR_0);
 if (VAR_14 & VAR_5) {
  FUNC_1("cpu backlight already enabled\n");
  VAR_14 &= ~VAR_5;
  FUNC_3(VAR_0, VAR_14);
 }

 VAR_15 = FUNC_2(VAR_1);
 if (VAR_15 & VAR_4) {
  FUNC_1("pch backlight already enabled\n");
  VAR_15 &= ~VAR_4;
  FUNC_3(VAR_1, VAR_15);
 }

 if (VAR_13 == VAR_7)
  VAR_14 = VAR_6;
 else
  VAR_14 = FUNC_0(VAR_13);
 FUNC_3(VAR_0, VAR_14);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0, VAR_14 | VAR_5);


 FUNC_5(VAR_9, VAR_12->backlight.level);

 VAR_16 = VAR_12->backlight.max << 16;
 FUNC_3(VAR_2, VAR_16);

 VAR_15 = 0;
 if (VAR_12->backlight.active_low_pwm)
  VAR_15 |= VAR_3;

 FUNC_3(VAR_1, VAR_15);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1, VAR_15 | VAR_4);
}
