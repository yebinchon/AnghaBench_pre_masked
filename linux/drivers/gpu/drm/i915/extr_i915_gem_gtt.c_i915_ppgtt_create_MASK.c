
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ppgtt {int vm; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct i915_ppgtt*) ;
 struct i915_ppgtt* FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;

struct i915_ppgtt *
FUNC_3(struct drm_i915_private *VAR_0)
{
 struct i915_ppgtt *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_1))
  return VAR_1;

 FUNC_2(&VAR_1->vm);

 return VAR_1;
}
