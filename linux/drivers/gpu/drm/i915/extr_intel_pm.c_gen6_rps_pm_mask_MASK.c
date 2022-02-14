
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct intel_rps {scalar_t__ min_freq_softlimit; scalar_t__ max_freq_softlimit; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {int pm_rps_events; TYPE_1__ gt_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_i915_private*,int) ;

__attribute__((used)) static u32 FUNC_1(struct drm_i915_private *VAR_4, u8 VAR_5)
{
 struct intel_rps *VAR_6 = &VAR_4->gt_pm.rps;
 u32 VAR_7 = 0;


 if (VAR_5 > VAR_6->min_freq_softlimit)
  VAR_7 |= VAR_2 | VAR_0 | VAR_1;
 if (VAR_5 < VAR_6->max_freq_softlimit)
  VAR_7 |= VAR_2 | VAR_3;

 VAR_7 &= VAR_4->pm_rps_events;

 return FUNC_0(VAR_4, ~VAR_7);
}
