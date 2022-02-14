
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int panel_power_off_time; int want_panel_vdd; } ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int pps_mutex; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*) ;
 struct intel_digital_port* FUNC_7 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct intel_digital_port*) ;
 int FUNC_11 (struct drm_i915_private*,int ) ;
 int FUNC_12 (struct intel_dp*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct intel_dp *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_8(VAR_2);
 struct intel_digital_port *VAR_4 =
  FUNC_7(VAR_2);
 u32 VAR_5;
 i915_reg_t VAR_6, VAR_7;

 FUNC_14(&VAR_3->pps_mutex);

 FUNC_4(VAR_2->want_panel_vdd);

 if (!FUNC_9(VAR_2))
  return;

 FUNC_0("Turning eDP port %c VDD off\n",
        FUNC_15(VAR_4->base.port));

 VAR_5 = FUNC_12(VAR_2);
 VAR_5 &= ~VAR_0;

 VAR_7 = FUNC_5(VAR_2);
 VAR_6 = FUNC_6(VAR_2);

 FUNC_2(VAR_7, VAR_5);
 FUNC_3(VAR_7);


 FUNC_0("PP_STATUS: 0x%08x PP_CONTROL: 0x%08x\n",
 FUNC_1(VAR_6), FUNC_1(VAR_7));

 if ((VAR_5 & VAR_1) == 0)
  VAR_2->panel_power_off_time = FUNC_13();

 FUNC_11(VAR_3,
       FUNC_10(VAR_4));
}
