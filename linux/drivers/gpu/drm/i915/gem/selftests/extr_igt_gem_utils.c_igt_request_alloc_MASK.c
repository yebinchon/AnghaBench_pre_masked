
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int legacy_idx; } ;
struct intel_context {int dummy; } ;
struct i915_request {int dummy; } ;
struct i915_gem_context {int dummy; } ;


 struct i915_request* FUNC_0 (struct intel_context*) ;
 scalar_t__ FUNC_1 (struct intel_context*) ;
 struct intel_context* FUNC_2 (struct i915_gem_context*,int ) ;
 struct i915_request* FUNC_3 (struct intel_context*) ;
 int FUNC_4 (struct intel_context*) ;

struct i915_request *
FUNC_5(struct i915_gem_context *VAR_0, struct intel_engine_cs *VAR_1)
{
 struct intel_context *VAR_2;
 struct i915_request *VAR_3;






 VAR_2 = FUNC_2(VAR_0, VAR_1->legacy_idx);
 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2);

 VAR_3 = FUNC_3(VAR_2);
 FUNC_4(VAR_2);

 return VAR_3;
}
