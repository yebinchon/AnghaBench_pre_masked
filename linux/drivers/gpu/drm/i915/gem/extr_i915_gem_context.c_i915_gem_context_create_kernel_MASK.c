
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priority; } ;
struct i915_gem_context {TYPE_1__ sched; } ;
struct drm_i915_private {int dummy; } ;


 struct i915_gem_context* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct i915_gem_context*) ;
 int FUNC_4 (struct i915_gem_context**) ;
 int FUNC_5 (struct i915_gem_context*) ;
 int FUNC_6 (struct i915_gem_context*) ;
 int FUNC_7 (struct i915_gem_context*) ;
 struct i915_gem_context* FUNC_8 (struct drm_i915_private*,int ) ;

struct i915_gem_context *
FUNC_9(struct drm_i915_private *VAR_0, int VAR_1)
{
 struct i915_gem_context *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_8(VAR_0, 0);
 if (FUNC_3(VAR_2))
  return VAR_2;

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3) {
  FUNC_4(&VAR_2);
  return FUNC_0(VAR_3);
 }

 FUNC_5(VAR_2);
 VAR_2->sched.priority = FUNC_2(VAR_1);

 FUNC_1(!FUNC_6(VAR_2));

 return VAR_2;
}
