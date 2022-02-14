
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct intel_dp {int aux; } ;
struct TYPE_5__ {int dev; } ;
struct intel_connector {TYPE_2__* encoder; TYPE_1__ base; } ;
struct TYPE_7__ {int pwm_freq_hz; } ;
struct TYPE_8__ {TYPE_3__ backlight; } ;
struct drm_i915_private {TYPE_4__ vbt; } ;
struct TYPE_6__ {int base; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int *,int ,int*) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 struct intel_dp* FUNC_6 (int *) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct intel_connector *VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_7(VAR_6->base.dev);
 struct intel_dp *VAR_8 = FUNC_6(&VAR_6->encoder->base);
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 1;
 u8 VAR_15, VAR_16, VAR_17;





 VAR_9 = VAR_7->vbt.backlight.pwm_freq_hz;
 FUNC_1("VBT defined backlight frequency %u Hz\n", VAR_9);
 if (!VAR_9) {
  FUNC_1("Use panel default backlight frequency\n");
  return 0;
 }

 VAR_10 = FUNC_0(FUNC_2(VAR_0), VAR_9);
 if (FUNC_4(&VAR_8->aux,
          VAR_4, &VAR_16) != 1) {
  FUNC_1("Failed to read pwmgen bit count cap min\n");
  return 0;
 }
 if (FUNC_4(&VAR_8->aux,
          VAR_3, &VAR_17) != 1) {
  FUNC_1("Failed to read pwmgen bit count cap max\n");
  return 0;
 }
 VAR_16 &= VAR_5;
 VAR_17 &= VAR_5;

 VAR_11 = FUNC_0(VAR_10 * 3, 4);
 VAR_12 = FUNC_0(VAR_10 * 5, 4);
 if (VAR_11 < (1 << VAR_16) || (255 << VAR_17) < VAR_12) {
  FUNC_1("VBT defined backlight frequency out of range\n");
  return 0;
 }

 for (VAR_15 = VAR_17; VAR_15 >= VAR_16; VAR_15--) {
  VAR_14 = FUNC_3(FUNC_0(VAR_10, 1 << VAR_15), 1, 255);
  VAR_13 = VAR_14 << VAR_15;
  if (VAR_11 <= VAR_13 && VAR_13 <= VAR_12)
   break;
 }

 if (FUNC_5(&VAR_8->aux,
          VAR_2, VAR_15) < 0) {
  FUNC_1("Failed to write aux pwmgen bit count\n");
  return 0;
 }
 if (FUNC_5(&VAR_8->aux,
          VAR_1, (u8) VAR_14) < 0) {
  FUNC_1("Failed to write aux backlight freq\n");
  return 0;
 }
 return 1;
}
