
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {int legacy_idx; } ;
struct intel_context {int dummy; } ;
struct igt_spinner {int dummy; } ;
struct i915_request {int dummy; } ;
struct i915_gem_context {int dummy; } ;


 struct i915_request* FUNC_0 (struct intel_context*) ;
 scalar_t__ FUNC_1 (struct intel_context*) ;
 struct intel_context* FUNC_2 (struct i915_gem_context*,int ) ;
 struct i915_request* FUNC_3 (struct igt_spinner*,struct intel_context*,int ) ;
 int FUNC_4 (struct intel_context*) ;

__attribute__((used)) static struct i915_request *
FUNC_5(struct igt_spinner *VAR_0,
         struct i915_gem_context *VAR_1,
         struct intel_engine_cs *VAR_2,
         u32 VAR_3)
{
 struct intel_context *VAR_4;
 struct i915_request *VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_2->legacy_idx);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);

 VAR_5 = FUNC_3(VAR_0, VAR_4, VAR_3);
 FUNC_4(VAR_4);
 return VAR_5;
}
