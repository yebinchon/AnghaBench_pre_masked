
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_rps {int lock; scalar_t__ last_adj; int idle_freq; scalar_t__ enabled; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct drm_i915_private*) ;

void FUNC_9(struct drm_i915_private *VAR_1)
{
 struct intel_rps *VAR_2 = &VAR_1->gt_pm.rps;






 FUNC_3(VAR_1);

 FUNC_6(&VAR_2->lock);
 if (VAR_2->enabled) {
  if (FUNC_2(VAR_1) || FUNC_1(VAR_1))
   FUNC_8(VAR_1);
  else
   FUNC_5(VAR_1, VAR_2->idle_freq);
  VAR_2->last_adj = 0;
  FUNC_0(VAR_0,
      FUNC_4(VAR_1, ~0));
 }
 FUNC_7(&VAR_2->lock);
}
