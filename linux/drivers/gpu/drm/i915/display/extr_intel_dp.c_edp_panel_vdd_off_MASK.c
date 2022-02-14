
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int want_panel_vdd; } ;
struct drm_i915_private {int pps_mutex; } ;
struct TYPE_3__ {int port; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (int,char*,int ) ;
 TYPE_2__* FUNC_1 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_dp *VAR_0, bool VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_0);

 FUNC_6(&VAR_2->pps_mutex);

 if (!FUNC_5(VAR_0))
  return;

 FUNC_0(!VAR_0->want_panel_vdd, "eDP port %c VDD not forced on",
      FUNC_7(FUNC_1(VAR_0)->base.port));

 VAR_0->want_panel_vdd = 0;

 if (VAR_1)
  FUNC_3(VAR_0);
 else
  FUNC_4(VAR_0);
}
