
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct intel_hdmi {TYPE_1__ dp_dual_mode; int ddc_bus; } ;
struct i2c_adapter {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,struct i2c_adapter*,int) ;
 struct i2c_adapter* FUNC_2 (struct drm_i915_private*,int ) ;
 int FUNC_3 (struct intel_hdmi*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

void FUNC_5(struct intel_hdmi *VAR_1, bool VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_4(FUNC_3(VAR_1));
 struct i2c_adapter *VAR_4 =
  FUNC_2(VAR_3, VAR_1->ddc_bus);

 if (VAR_1->dp_dual_mode.type < VAR_0)
  return;

 FUNC_0("%s DP dual mode adaptor TMDS output\n",
        VAR_2 ? "Enabling" : "Disabling");

 FUNC_1(VAR_1->dp_dual_mode.type,
      VAR_4, VAR_2);
}
