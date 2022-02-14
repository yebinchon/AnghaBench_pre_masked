
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event_init; } ;
struct i915_pmu {int lock; TYPE_1__ base; } ;
struct drm_i915_private {struct i915_pmu pmu; } ;


 int FUNC_0 (struct i915_pmu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 struct i915_pmu *VAR_1 = &VAR_0->pmu;

 if (!VAR_1->base.event_init)
  return;

 FUNC_1(&VAR_1->lock);



 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock);
}
