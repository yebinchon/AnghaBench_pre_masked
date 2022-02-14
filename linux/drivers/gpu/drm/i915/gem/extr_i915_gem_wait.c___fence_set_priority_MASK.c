
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int (* schedule ) (struct i915_request*,struct i915_sched_attr const*) ;} ;
struct i915_sched_attr {int dummy; } ;
struct i915_request {struct intel_engine_cs* engine; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;
 scalar_t__ FUNC_1 (struct dma_fence*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct i915_request*,struct i915_sched_attr const*) ;
 struct i915_request* FUNC_7 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_8(struct dma_fence *VAR_0,
     const struct i915_sched_attr *VAR_1)
{
 struct i915_request *VAR_2;
 struct intel_engine_cs *VAR_3;

 if (FUNC_1(VAR_0) || !FUNC_0(VAR_0))
  return;

 VAR_2 = FUNC_7(VAR_0);
 VAR_3 = VAR_2->engine;

 FUNC_2();
 FUNC_4();
 if (VAR_3->schedule)
  VAR_3->schedule(VAR_2, VAR_1);
 FUNC_5();
 FUNC_3();
}
