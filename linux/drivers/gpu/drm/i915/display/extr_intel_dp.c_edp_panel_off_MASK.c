
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int want_panel_vdd; int panel_power_off_time; } ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int pps_mutex; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (struct intel_dp*) ;
 struct intel_digital_port* FUNC_5 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_digital_port*) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 int FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct intel_dp*) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_15(struct intel_dp *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_6(VAR_4);
 struct intel_digital_port *VAR_6 = FUNC_5(VAR_4);
 u32 VAR_7;
 i915_reg_t VAR_8;

 FUNC_12(&VAR_5->pps_mutex);

 if (!FUNC_9(VAR_4))
  return;

 FUNC_0("Turn eDP port %c panel power off\n",
        FUNC_13(VAR_6->base.port));

 FUNC_3(!VAR_4->want_panel_vdd, "Need eDP port %c VDD to turn off panel\n",
      FUNC_13(VAR_6->base.port));

 VAR_7 = FUNC_10(VAR_4);


 VAR_7 &= ~(VAR_2 | VAR_3 | VAR_1 |
  VAR_0);

 VAR_8 = FUNC_4(VAR_4);

 VAR_4->want_panel_vdd = 0;

 FUNC_1(VAR_8, VAR_7);
 FUNC_2(VAR_8);

 FUNC_14(VAR_4);
 VAR_4->panel_power_off_time = FUNC_11();


 FUNC_8(VAR_5, FUNC_7(VAR_6));
}
