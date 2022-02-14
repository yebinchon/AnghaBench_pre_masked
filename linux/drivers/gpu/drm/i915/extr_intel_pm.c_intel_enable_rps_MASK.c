
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_rps {int enabled; scalar_t__ max_freq; scalar_t__ min_freq; scalar_t__ idle_freq; scalar_t__ efficient_freq; int lock; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_14(struct drm_i915_private *VAR_0)
{
 struct intel_rps *VAR_1 = &VAR_0->gt_pm.rps;

 FUNC_12(&VAR_1->lock);

 if (VAR_1->enabled)
  return;

 if (FUNC_2(VAR_0)) {
  FUNC_6(VAR_0);
 } else if (FUNC_4(VAR_0)) {
  FUNC_13(VAR_0);
 } else if (FUNC_0(VAR_0) >= 9) {
  FUNC_9(VAR_0);
 } else if (FUNC_1(VAR_0)) {
  FUNC_8(VAR_0);
 } else if (FUNC_0(VAR_0) >= 6) {
  FUNC_7(VAR_0);
 } else if (FUNC_3(VAR_0)) {
  FUNC_11(VAR_0);
  FUNC_10(VAR_0);
 }

 FUNC_5(VAR_1->max_freq < VAR_1->min_freq);
 FUNC_5(VAR_1->idle_freq > VAR_1->max_freq);

 FUNC_5(VAR_1->efficient_freq < VAR_1->min_freq);
 FUNC_5(VAR_1->efficient_freq > VAR_1->max_freq);

 VAR_1->enabled = 1;
}
