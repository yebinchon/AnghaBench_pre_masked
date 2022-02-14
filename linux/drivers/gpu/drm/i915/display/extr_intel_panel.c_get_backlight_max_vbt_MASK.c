
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int (* hz_to_pwm ) (struct intel_connector*,int) ;} ;
struct intel_panel {TYPE_4__ backlight; } ;
struct TYPE_5__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct TYPE_6__ {int pwm_freq_hz; } ;
struct TYPE_7__ {TYPE_2__ backlight; } ;
struct drm_i915_private {TYPE_3__ vbt; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct intel_connector*,int) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct intel_connector *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0->base.dev);
 struct intel_panel *VAR_2 = &VAR_0->panel;
 u16 VAR_3 = VAR_1->vbt.backlight.pwm_freq_hz;
 u32 VAR_4;

 if (!VAR_2->backlight.hz_to_pwm) {
  FUNC_0("backlight frequency conversion not supported\n");
  return 0;
 }

 if (VAR_3) {
  FUNC_0("VBT defined backlight frequency %u Hz\n",
         VAR_3);
 } else {
  VAR_3 = 200;
  FUNC_0("default backlight frequency %u Hz\n",
         VAR_3);
 }

 VAR_4 = VAR_2->backlight.hz_to_pwm(VAR_0, VAR_3);
 if (!VAR_4) {
  FUNC_0("backlight frequency conversion failed\n");
  return 0;
 }

 return VAR_4;
}
