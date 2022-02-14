
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled; int lock; } ;
struct TYPE_4__ {TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_2__ gt_pm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_private *VAR_0)
{
 FUNC_8(&VAR_0->gt_pm.rps.lock);

 if (!VAR_0->gt_pm.rps.enabled)
  return;

 if (FUNC_0(VAR_0) >= 9)
  FUNC_6(VAR_0);
 else if (FUNC_1(VAR_0))
  FUNC_4(VAR_0);
 else if (FUNC_3(VAR_0))
  FUNC_9(VAR_0);
 else if (FUNC_0(VAR_0) >= 6)
  FUNC_5(VAR_0);
 else if (FUNC_2(VAR_0))
  FUNC_7(VAR_0);

 VAR_0->gt_pm.rps.enabled = 0;
}
