
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int i915; } ;
struct i915_vma {int dummy; } ;
struct i915_request {int dummy; } ;
struct i915_gem_context {int dummy; } ;


 int VAR_0 ;
 struct i915_request* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*,struct i915_vma*,int) ;
 int FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (struct i915_gem_context*,struct intel_engine_cs*) ;
 struct i915_gem_context* FUNC_5 (int ) ;
 int FUNC_6 (struct i915_gem_context*) ;

__attribute__((used)) static struct i915_request *
FUNC_7(struct intel_engine_cs *VAR_1, struct i915_vma *VAR_2, int VAR_3)
{
 struct i915_gem_context *VAR_4;
 struct i915_request *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_1->i915);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_4(VAR_4, VAR_1);
 if (FUNC_1(VAR_5))
  goto out_ctx;

 VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3);
 FUNC_3(VAR_5);
 if (VAR_6)
  VAR_5 = FUNC_0(VAR_6);

out_ctx:
 FUNC_6(VAR_4);
 return VAR_5;
}
