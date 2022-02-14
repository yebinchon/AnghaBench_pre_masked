
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int legacy_idx; } ;
struct intel_context {int dummy; } ;
struct i915_gem_context {int i915; } ;
struct i915_engine_class_instance {int engine_instance; int engine_class; } ;


 int VAR_0 ;
 struct intel_context* FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 struct intel_context* FUNC_1 (struct i915_gem_context*,int) ;
 int FUNC_2 (struct i915_gem_context*) ;
 struct intel_engine_cs* FUNC_3 (int ,int ,int) ;

__attribute__((used)) static struct intel_context *
FUNC_4(struct i915_gem_context *VAR_2,
     unsigned long VAR_3,
     const struct i915_engine_class_instance *VAR_4)

{
 int VAR_5;

 if (!!(VAR_3 & FUNC_0(0)) != FUNC_2(VAR_2))
  return FUNC_0(-VAR_0);

 if (!FUNC_2(VAR_2)) {
  struct intel_engine_cs *VAR_6;

  VAR_6 = FUNC_3(VAR_2->i915,
        VAR_4->engine_class,
        VAR_4->engine_instance);
  if (!VAR_6)
   return FUNC_0(-VAR_0);

  VAR_5 = VAR_6->legacy_idx;
 } else {
  VAR_5 = VAR_4->engine_instance;
 }

 return FUNC_1(VAR_2, VAR_5);
}
