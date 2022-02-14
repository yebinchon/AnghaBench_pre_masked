
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mutex; int interactive; } ;
struct intel_rps {TYPE_3__ power; } ;
struct TYPE_4__ {int awake; } ;
struct TYPE_5__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt; TYPE_2__ gt_pm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;

void FUNC_6(struct drm_i915_private *VAR_1, bool VAR_2)
{
 struct intel_rps *VAR_3 = &VAR_1->gt_pm.rps;

 if (FUNC_1(VAR_1) < 6)
  return;

 FUNC_3(&VAR_3->power.mutex);
 if (VAR_2) {
  if (!VAR_3->power.interactive++ && FUNC_2(VAR_1->gt.awake))
   FUNC_5(VAR_1, VAR_0);
 } else {
  FUNC_0(!VAR_3->power.interactive);
  VAR_3->power.interactive--;
 }
 FUNC_4(&VAR_3->power.mutex);
}
