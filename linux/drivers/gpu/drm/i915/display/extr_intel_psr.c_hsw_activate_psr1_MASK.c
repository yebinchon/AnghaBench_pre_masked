
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dummy; } ;
struct TYPE_5__ {int sink_sync_latency; scalar_t__ link_standby; } ;
struct TYPE_6__ {int idle_frames; } ;
struct TYPE_4__ {TYPE_3__ psr; } ;
struct drm_i915_private {TYPE_2__ psr; TYPE_1__ vbt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct intel_dp *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_4(VAR_8);
 u32 VAR_10 = 0x1f;
 u32 VAR_11 = VAR_2;




 int VAR_12 = FUNC_6(6, VAR_9->vbt.psr.idle_frames);




 VAR_12 = FUNC_6(VAR_12, VAR_9->psr.sink_sync_latency + 1);
 VAR_11 |= VAR_12 << VAR_3;

 VAR_11 |= VAR_10 << VAR_5;
 if (FUNC_3(VAR_9))
  VAR_11 |= VAR_6;

 if (VAR_9->psr.link_standby)
  VAR_11 |= VAR_4;

 VAR_11 |= FUNC_5(VAR_8);

 if (FUNC_2(VAR_9) >= 8)
  VAR_11 |= VAR_0;

 VAR_11 |= FUNC_0(VAR_1) & VAR_7;
 FUNC_1(VAR_1, VAR_11);
}
