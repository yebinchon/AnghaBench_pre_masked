
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_execlists {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ active; struct intel_engine_execlists execlists; } ;
struct i915_request {int head; int hw_context; } ;


 int FUNC_0 (struct i915_request*,int) ;
 int FUNC_1 (struct intel_engine_execlists* const) ;
 struct i915_request* FUNC_2 (struct intel_engine_execlists* const) ;
 int FUNC_3 (struct i915_request*) ;
 int FUNC_4 (struct intel_engine_cs*,int ,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct intel_engine_cs *VAR_0, bool VAR_1)
{
 struct intel_engine_execlists * const VAR_2 = &VAR_0->execlists;
 struct i915_request *VAR_3;
 unsigned long VAR_4;

 FUNC_5(&VAR_0->active.lock, VAR_4);

 FUNC_1(VAR_2);


 VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3)
  goto out_unlock;

 if (!FUNC_3(VAR_3))
  VAR_1 = 0;

 FUNC_0(VAR_3, VAR_1);
 FUNC_4(VAR_0, VAR_3->hw_context, VAR_3->head, VAR_1);

out_unlock:
 FUNC_6(&VAR_0->active.lock, VAR_4);
}
