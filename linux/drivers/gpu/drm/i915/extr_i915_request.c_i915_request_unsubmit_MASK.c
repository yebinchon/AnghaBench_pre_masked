
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ active; } ;
struct i915_request {struct intel_engine_cs* engine; } ;


 int FUNC_0 (struct i915_request*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct i915_request *VAR_0)
{
 struct intel_engine_cs *VAR_1 = VAR_0->engine;
 unsigned long VAR_2;


 FUNC_1(&VAR_1->active.lock, VAR_2);

 FUNC_0(VAR_0);

 FUNC_2(&VAR_1->active.lock, VAR_2);
}
