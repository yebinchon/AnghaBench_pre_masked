
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int dummy; } ;
struct intel_context {int inflight; } ;
struct i915_request {scalar_t__ engine; struct intel_context* hw_context; } ;


 int FUNC_0 (int) ;
 struct intel_engine_cs* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (struct i915_request*) ;
 scalar_t__ FUNC_5 (struct intel_context* const) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct intel_engine_cs*) ;
 int FUNC_8 (struct i915_request*,int) ;
 int FUNC_9 (int *,struct intel_engine_cs**,int ) ;

__attribute__((used)) static inline struct i915_request *
FUNC_10(struct i915_request *VAR_0, int VAR_1)
{
 struct intel_context * const VAR_2 = VAR_0->hw_context;
 struct intel_engine_cs *VAR_3;

 FUNC_0(!FUNC_6(VAR_0->engine));
 FUNC_8(VAR_0, VAR_1);

 VAR_3 = FUNC_1(VAR_2->inflight);
 do {
  if (!VAR_3) {
   FUNC_2(VAR_2->inflight, FUNC_3(VAR_0));
   break;
  }
 } while (!FUNC_9(&VAR_2->inflight, &VAR_3, FUNC_7(VAR_3)));

 FUNC_0(FUNC_5(VAR_2) != VAR_0->engine);
 return FUNC_4(VAR_0);
}
