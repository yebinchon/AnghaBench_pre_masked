
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ppgtt {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 struct i915_ppgtt* FUNC_1 (struct drm_i915_private*) ;
 struct i915_ppgtt* FUNC_2 (struct drm_i915_private*) ;

__attribute__((used)) static struct i915_ppgtt *
FUNC_3(struct drm_i915_private *VAR_0)
{
 if (FUNC_0(VAR_0) < 8)
  return FUNC_1(VAR_0);
 else
  return FUNC_2(VAR_0);
}
