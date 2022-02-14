
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int gt; } ;
struct intel_context {struct intel_engine_cs* const engine; } ;
struct i915_request {struct intel_context* hw_context; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_request*,int ) ;
 int FUNC_1 (struct intel_context* const) ;
 int FUNC_2 (struct intel_engine_cs* const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i915_request*,struct intel_context* const) ;

__attribute__((used)) static inline void
FUNC_5(struct i915_request *VAR_1,
    struct intel_engine_cs * const VAR_2)
{
 struct intel_context * const VAR_3 = VAR_1->hw_context;

 FUNC_2(VAR_2);
 FUNC_0(VAR_1, VAR_0);
 FUNC_3(VAR_2->gt);
 if (VAR_3->engine != VAR_2)
  FUNC_4(VAR_1, VAR_3);

 FUNC_1(VAR_3);
}
