
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;

int FUNC_6(struct drm_i915_private *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_2) >= 9)
  return FUNC_0(VAR_3 * VAR_1,
      VAR_0);
 else if (FUNC_2(VAR_2))
  return FUNC_5(VAR_2, VAR_3);
 else if (FUNC_3(VAR_2))
  return FUNC_4(VAR_2, VAR_3);
 else
  return VAR_3 * VAR_1;
}
