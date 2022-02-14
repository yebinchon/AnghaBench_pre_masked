
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tasklet; struct i915_request** active; } ;
struct intel_engine_cs {TYPE_1__ execlists; } ;
struct i915_request {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct i915_request const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct intel_engine_cs *VAR_0, int VAR_1)
{
 const struct i915_request *VAR_2 = *VAR_0->execlists.active;
 if (!VAR_2 || !FUNC_0(VAR_1, FUNC_1(VAR_2)))
  return;

 FUNC_2(&VAR_0->execlists.tasklet);
}
