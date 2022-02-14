
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_context {int sseu; TYPE_1__* engine; } ;
struct i915_gem_engines {unsigned long num_engines; struct intel_context** engines; } ;
struct i915_gem_context {struct i915_gem_engines* engines; } ;
struct TYPE_2__ {scalar_t__ class; } ;


 int VAR_0 ;
 struct i915_gem_engines* FUNC_0 (struct i915_gem_context*) ;
 int FUNC_1 (struct i915_gem_context*) ;
 int FUNC_2 (struct intel_context*) ;
 int FUNC_3 (struct intel_context*) ;

__attribute__((used)) static int FUNC_4(struct i915_gem_context *VAR_1,
        struct i915_gem_context *VAR_2)
{
 struct i915_gem_engines *VAR_3 = FUNC_0(VAR_2);
 struct i915_gem_engines *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_4 = VAR_1->engines;
 if (VAR_3->num_engines != VAR_4->num_engines) {
  VAR_6 = -VAR_0;
  goto unlock;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_engines; VAR_5++) {
  struct intel_context *VAR_7 = VAR_3->engines[VAR_5];

  if (VAR_4->engines[VAR_5]->engine->class != VAR_7->engine->class) {

   VAR_6 = -VAR_0;
   goto unlock;
  }


  VAR_6 = FUNC_2(VAR_7);
  if (VAR_6)
   goto unlock;

  VAR_4->engines[VAR_5]->sseu = VAR_7->sseu;
  FUNC_3(VAR_7);
 }

 VAR_6 = 0;
unlock:
 FUNC_1(VAR_2);
 return VAR_6;
}
