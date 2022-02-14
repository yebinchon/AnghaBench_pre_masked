
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intel_rps {int max_freq_softlimit; int min_freq_softlimit; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;


 int FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static u32 FUNC_1(struct drm_i915_private *VAR_0, u8 VAR_1)
{
 struct intel_rps *VAR_2 = &VAR_0->gt_pm.rps;
 u32 VAR_3;







 if (FUNC_0(VAR_0) >= 9) {
  VAR_3 = (VAR_2->max_freq_softlimit) << 23;
  if (VAR_1 <= VAR_2->min_freq_softlimit)
   VAR_3 |= (VAR_2->min_freq_softlimit) << 14;
 } else {
  VAR_3 = VAR_2->max_freq_softlimit << 24;
  if (VAR_1 <= VAR_2->min_freq_softlimit)
   VAR_3 |= VAR_2->min_freq_softlimit << 16;
 }

 return VAR_3;
}
