
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int dummy; } ;
struct intel_context {int dummy; } ;
struct i915_gem_context {int dummy; } ;


 int VAR_0 ;
 struct intel_context* FUNC_0 (int ) ;
 struct intel_context* FUNC_1 () ;
 int FUNC_2 (struct intel_context*,struct i915_gem_context*,struct intel_engine_cs*) ;

struct intel_context *
FUNC_3(struct i915_gem_context *VAR_1,
       struct intel_engine_cs *VAR_2)
{
 struct intel_context *VAR_3;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_3, VAR_1, VAR_2);
 return VAR_3;
}
