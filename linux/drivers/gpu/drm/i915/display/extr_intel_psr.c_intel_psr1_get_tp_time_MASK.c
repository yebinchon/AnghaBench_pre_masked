
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dpcd; } ;
struct TYPE_3__ {int tp1_wakeup_time_us; int tp2_tp3_wakeup_time_us; } ;
struct TYPE_4__ {TYPE_1__ psr; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct intel_dp*) ;

__attribute__((used)) static u32 FUNC_4(struct intel_dp *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_1(VAR_11);
 u32 VAR_13 = 0;

 if (FUNC_0(VAR_12) >= 11)
  VAR_13 |= VAR_10;

 if (VAR_12->vbt.psr.tp1_wakeup_time_us == 0)
  VAR_13 |= VAR_0;
 else if (VAR_12->vbt.psr.tp1_wakeup_time_us <= 100)
  VAR_13 |= VAR_1;
 else if (VAR_12->vbt.psr.tp1_wakeup_time_us <= 500)
  VAR_13 |= VAR_3;
 else
  VAR_13 |= VAR_2;

 if (VAR_12->vbt.psr.tp2_tp3_wakeup_time_us == 0)
  VAR_13 |= VAR_6;
 else if (VAR_12->vbt.psr.tp2_tp3_wakeup_time_us <= 100)
  VAR_13 |= VAR_7;
 else if (VAR_12->vbt.psr.tp2_tp3_wakeup_time_us <= 500)
  VAR_13 |= VAR_9;
 else
  VAR_13 |= VAR_8;

 if (FUNC_3(VAR_11) &&
     FUNC_2(VAR_11->dpcd))
  VAR_13 |= VAR_5;
 else
  VAR_13 |= VAR_4;

 return VAR_13;
}
