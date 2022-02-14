
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_2__ gt_pm; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct drm_i915_private *VAR_0)
{

 if (FUNC_6(VAR_0))
  return;

 FUNC_7(&VAR_0->gt_pm.rps.lock);

 if (FUNC_1(VAR_0))
  FUNC_4(VAR_0);
 if (FUNC_2(VAR_0))
  FUNC_5(VAR_0);
 if (FUNC_0(VAR_0))
  FUNC_3(VAR_0);

 FUNC_8(&VAR_0->gt_pm.rps.lock);
}
