
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_execlists {int inflight; struct i915_request** active; } ;
struct i915_request {int dummy; } ;


 struct i915_request** FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct i915_request*) ;

__attribute__((used)) static void
FUNC_2(struct intel_engine_execlists * const VAR_0)
{
 struct i915_request * const *VAR_1, *VAR_2;



 for (VAR_1 = VAR_0->active; (VAR_2 = *VAR_1); VAR_1++)
  FUNC_1(VAR_2);
 VAR_0->active =
  FUNC_0(VAR_0->inflight, 0, sizeof(VAR_0->inflight));
}
