
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enabled; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_6__ {TYPE_2__ rc6; TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_3__ gt_pm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_0)
{
 FUNC_6(&VAR_0->gt_pm.rps.lock);

 if (!VAR_0->gt_pm.rc6.enabled)
  return;

 if (FUNC_0(VAR_0) >= 9)
  FUNC_5(VAR_0);
 else if (FUNC_1(VAR_0))
  FUNC_3(VAR_0);
 else if (FUNC_2(VAR_0))
  FUNC_7(VAR_0);
 else if (FUNC_0(VAR_0) >= 6)
  FUNC_4(VAR_0);

 VAR_0->gt_pm.rc6.enabled = 0;
}
