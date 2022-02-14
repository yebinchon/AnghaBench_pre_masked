
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int dummy; } ;
struct i915_gem_engines_iter {scalar_t__ idx; struct i915_gem_engines* engines; } ;
struct i915_gem_engines {scalar_t__ num_engines; struct intel_context** engines; } ;



struct intel_context *
FUNC_0(struct i915_gem_engines_iter *VAR_0)
{
 const struct i915_gem_engines *VAR_1 = VAR_0->engines;
 struct intel_context *VAR_2;

 do {
  if (VAR_0->idx >= VAR_1->num_engines)
   return ((void*)0);

  VAR_2 = VAR_1->engines[VAR_0->idx++];
 } while (!VAR_2);

 return VAR_2;
}
