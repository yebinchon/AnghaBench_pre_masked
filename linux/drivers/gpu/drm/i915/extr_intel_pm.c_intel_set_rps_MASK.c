
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct intel_rps {scalar_t__ max_freq; scalar_t__ min_freq; scalar_t__ cur_freq; int enabled; int lock; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_i915_private*,scalar_t__) ;

int FUNC_6(struct drm_i915_private *VAR_0, u8 VAR_1)
{
 struct intel_rps *VAR_2 = &VAR_0->gt_pm.rps;
 int VAR_3;

 FUNC_4(&VAR_2->lock);
 FUNC_0(VAR_1 > VAR_2->max_freq);
 FUNC_0(VAR_1 < VAR_2->min_freq);

 if (!VAR_2->enabled) {
  VAR_2->cur_freq = VAR_1;
  return 0;
 }

 if (FUNC_2(VAR_0) || FUNC_1(VAR_0))
  VAR_3 = FUNC_5(VAR_0, VAR_1);
 else
  VAR_3 = FUNC_3(VAR_0, VAR_1);

 return VAR_3;
}
