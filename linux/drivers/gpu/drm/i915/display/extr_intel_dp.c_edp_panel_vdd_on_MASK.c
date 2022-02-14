
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int want_panel_vdd; int panel_power_up_delay; int panel_vdd_work; } ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int pps_mutex; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (int *) ;
 struct intel_digital_port* FUNC_7 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct intel_dp*) ;
 scalar_t__ FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (struct intel_digital_port*) ;
 int FUNC_12 (struct drm_i915_private*,int ) ;
 int FUNC_13 (struct intel_dp*) ;
 int FUNC_14 (struct intel_dp*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct intel_dp*) ;

__attribute__((used)) static bool FUNC_19(struct intel_dp *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_8(VAR_1);
 struct intel_digital_port *VAR_3 = FUNC_7(VAR_1);
 u32 VAR_4;
 i915_reg_t VAR_5, VAR_6;
 bool VAR_7 = !VAR_1->want_panel_vdd;

 FUNC_15(&VAR_2->pps_mutex);

 if (!FUNC_13(VAR_1))
  return 0;

 FUNC_6(&VAR_1->panel_vdd_work);
 VAR_1->want_panel_vdd = 1;

 if (FUNC_10(VAR_1))
  return VAR_7;

 FUNC_12(VAR_2,
    FUNC_11(VAR_3));

 FUNC_0("Turning eDP port %c VDD on\n",
        FUNC_17(VAR_3->base.port));

 if (!FUNC_9(VAR_1))
  FUNC_18(VAR_1);

 VAR_4 = FUNC_14(VAR_1);
 VAR_4 |= VAR_0;

 VAR_5 = FUNC_5(VAR_1);
 VAR_6 = FUNC_4(VAR_1);

 FUNC_2(VAR_6, VAR_4);
 FUNC_3(VAR_6);
 FUNC_0("PP_STATUS: 0x%08x PP_CONTROL: 0x%08x\n",
   FUNC_1(VAR_5), FUNC_1(VAR_6));



 if (!FUNC_9(VAR_1)) {
  FUNC_0("eDP port %c panel power wasn't enabled\n",
         FUNC_17(VAR_3->base.port));
  FUNC_16(VAR_1->panel_power_up_delay);
 }

 return VAR_7;
}
