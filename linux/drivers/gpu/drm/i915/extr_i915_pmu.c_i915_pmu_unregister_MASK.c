
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * event_init; } ;
struct i915_pmu {TYPE_1__ base; int timer; int enable; } ;
struct drm_i915_private {struct i915_pmu pmu; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i915_pmu*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i915_pmu*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct drm_i915_private *VAR_0)
{
 struct i915_pmu *VAR_1 = &VAR_0->pmu;

 if (!VAR_1->base.event_init)
  return;

 FUNC_0(VAR_1->enable);

 FUNC_2(&VAR_1->timer);

 FUNC_3(VAR_1);

 FUNC_4(&VAR_1->base);
 VAR_1->base.event_init = ((void*)0);
 FUNC_1(VAR_1);
}
