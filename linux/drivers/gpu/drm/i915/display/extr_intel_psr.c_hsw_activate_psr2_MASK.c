
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dummy; } ;
struct TYPE_5__ {int idle_frames; int psr2_tp2_tp3_wakeup_time_us; } ;
struct TYPE_6__ {TYPE_2__ psr; } ;
struct TYPE_4__ {int sink_sync_latency; } ;
struct drm_i915_private {TYPE_3__ vbt; TYPE_1__ psr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct intel_dp *VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_4(VAR_10);
 u32 VAR_12;




 int VAR_13 = FUNC_5(6, VAR_11->vbt.psr.idle_frames);

 VAR_13 = FUNC_5(VAR_13, VAR_11->psr.sink_sync_latency + 1);
 VAR_12 = VAR_13 << VAR_2;

 VAR_12 |= VAR_1 | VAR_8;
 if (FUNC_2(VAR_11) >= 10 || FUNC_3(VAR_11))
  VAR_12 |= VAR_9;

 VAR_12 |= FUNC_0(VAR_11->psr.sink_sync_latency + 1);

 if (VAR_11->vbt.psr.psr2_tp2_tp3_wakeup_time_us >= 0 &&
     VAR_11->vbt.psr.psr2_tp2_tp3_wakeup_time_us <= 50)
  VAR_12 |= VAR_6;
 else if (VAR_11->vbt.psr.psr2_tp2_tp3_wakeup_time_us <= 100)
  VAR_12 |= VAR_3;
 else if (VAR_11->vbt.psr.psr2_tp2_tp3_wakeup_time_us <= 500)
  VAR_12 |= VAR_5;
 else
  VAR_12 |= VAR_4;





 FUNC_1(VAR_7, 0);

 FUNC_1(VAR_0, VAR_12);
}
