
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int dummy; } ;
struct intel_context {int inflight; } ;
struct i915_request {struct intel_context* hw_context; } ;


 struct intel_engine_cs* FUNC_0 (int ) ;
 int FUNC_1 (struct i915_request*,struct intel_engine_cs*) ;
 int FUNC_2 (struct i915_request*) ;
 struct intel_engine_cs* FUNC_3 (struct intel_engine_cs*) ;
 scalar_t__ FUNC_4 (struct intel_engine_cs*,int) ;
 int FUNC_5 (struct i915_request*) ;
 int FUNC_6 (int *,struct intel_engine_cs**,struct intel_engine_cs*) ;

__attribute__((used)) static inline void
FUNC_7(struct i915_request *VAR_0)
{
 struct intel_context * const VAR_1 = VAR_0->hw_context;
 struct intel_engine_cs *VAR_2, *VAR_3;

 FUNC_5(VAR_0);

 VAR_3 = FUNC_0(VAR_1->inflight);
 do
  VAR_2 = FUNC_4(VAR_3, 2) ? FUNC_3(VAR_3) : ((void*)0);
 while (!FUNC_6(&VAR_1->inflight, &VAR_3, VAR_2));
 if (!VAR_2)
  FUNC_1(VAR_0, VAR_3);

 FUNC_2(VAR_0);
}
