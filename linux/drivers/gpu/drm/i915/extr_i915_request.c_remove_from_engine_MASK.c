
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct intel_engine_cs {TYPE_2__ active; } ;
struct TYPE_3__ {int link; } ;
struct i915_request {TYPE_1__ sched; int engine; } ;


 struct intel_engine_cs* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct i915_request *VAR_0)
{
 struct intel_engine_cs *VAR_1, *VAR_2;







 VAR_2 = FUNC_0(VAR_0->engine);
 FUNC_2(&VAR_2->active.lock);
 while (FUNC_4(VAR_2 != (VAR_1 = FUNC_0(VAR_0->engine)))) {
  FUNC_3(&VAR_2->active.lock);
  FUNC_2(&VAR_1->active.lock);
  VAR_2 = VAR_1;
 }
 FUNC_1(&VAR_0->sched.link);
 FUNC_3(&VAR_2->active.lock);
}
