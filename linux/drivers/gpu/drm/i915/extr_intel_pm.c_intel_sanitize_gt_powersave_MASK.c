
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enabled; } ;
struct TYPE_4__ {int enabled; } ;
struct TYPE_6__ {TYPE_2__ rc6; TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_3__ gt_pm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;

void FUNC_4(struct drm_i915_private *VAR_0)
{
 VAR_0->gt_pm.rps.enabled = 1;
 VAR_0->gt_pm.rc6.enabled = 1;
 FUNC_3(VAR_0);

 if (FUNC_0(VAR_0) >= 11)
  FUNC_1(VAR_0);
 else if (FUNC_0(VAR_0) >= 6)
  FUNC_2(VAR_0);
}
