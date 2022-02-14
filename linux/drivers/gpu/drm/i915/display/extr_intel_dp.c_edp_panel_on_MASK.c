
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int last_power_on; } ;
struct drm_i915_private {int pps_mutex; } ;
typedef int i915_reg_t ;
struct TYPE_3__ {int port; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct intel_dp*) ;
 TYPE_2__* FUNC_6 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct intel_dp*) ;
 int VAR_2 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct intel_dp*) ;
 int FUNC_14 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_15(struct intel_dp *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_7(VAR_3);
 u32 VAR_5;
 i915_reg_t VAR_6;

 FUNC_11(&VAR_4->pps_mutex);

 if (!FUNC_9(VAR_3))
  return;

 FUNC_0("Turn eDP port %c panel power on\n",
        FUNC_12(FUNC_6(VAR_3)->base.port));

 if (FUNC_4(FUNC_8(VAR_3),
   "eDP port %c panel power already on\n",
   FUNC_12(FUNC_6(VAR_3)->base.port)))
  return;

 FUNC_14(VAR_3);

 VAR_6 = FUNC_5(VAR_3);
 VAR_5 = FUNC_10(VAR_3);
 if (FUNC_2(VAR_4, 5)) {

  VAR_5 &= ~VAR_1;
  FUNC_1(VAR_6, VAR_5);
  FUNC_3(VAR_6);
 }

 VAR_5 |= VAR_0;
 if (!FUNC_2(VAR_4, 5))
  VAR_5 |= VAR_1;

 FUNC_1(VAR_6, VAR_5);
 FUNC_3(VAR_6);

 FUNC_13(VAR_3);
 VAR_3->last_power_on = VAR_2;

 if (FUNC_2(VAR_4, 5)) {
  VAR_5 |= VAR_1;
  FUNC_1(VAR_6, VAR_5);
  FUNC_3(VAR_6);
 }
}
