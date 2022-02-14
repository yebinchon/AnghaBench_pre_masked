
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_execlists {scalar_t__ queue_priority_hint; } ;
struct intel_engine_cs {struct intel_engine_execlists execlists; } ;
struct i915_request {int dummy; } ;


 int FUNC_0 (struct intel_engine_cs*) ;
 scalar_t__ FUNC_1 (struct i915_request const*) ;

__attribute__((used)) static void FUNC_2(struct intel_engine_cs *VAR_0,
    const struct i915_request *VAR_1)
{
 struct intel_engine_execlists *VAR_2 = &VAR_0->execlists;

 if (FUNC_1(VAR_1) <= VAR_2->queue_priority_hint)
  return;

 VAR_2->queue_priority_hint = FUNC_1(VAR_1);
 FUNC_0(VAR_0);
}
