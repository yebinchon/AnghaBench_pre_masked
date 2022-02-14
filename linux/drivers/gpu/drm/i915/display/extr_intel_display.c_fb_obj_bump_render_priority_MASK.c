
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sched_attr {int priority; } ;
struct drm_i915_gem_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_gem_object*,int ,struct i915_sched_attr*) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_gem_object *VAR_1)
{
 struct i915_sched_attr VAR_2 = {
  .priority = VAR_0,
 };

 FUNC_0(VAR_1, 0, &VAR_2);
}
