
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum i9xx_plane_id { ____Placeholder_i9xx_plane_id } i9xx_plane_id ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_5(struct drm_i915_private *VAR_3,
          enum i9xx_plane_id VAR_4)
{
 if (!FUNC_0(VAR_3))
  return 0;

 if (FUNC_2(VAR_3) || FUNC_3(VAR_3))
  return VAR_4 == VAR_0;
 else if (FUNC_4(VAR_3))
  return VAR_4 == VAR_0 || VAR_4 == VAR_1 ||
   VAR_4 == VAR_2;
 else if (FUNC_1(VAR_3) >= 4)
  return VAR_4 == VAR_0 || VAR_4 == VAR_1;
 else
  return VAR_4 == VAR_0;
}
