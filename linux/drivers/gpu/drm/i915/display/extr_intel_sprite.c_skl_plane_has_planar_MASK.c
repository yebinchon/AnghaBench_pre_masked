
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_4(struct drm_i915_private *VAR_3,
     enum pipe VAR_4, enum plane_id VAR_5)
{

 if (FUNC_3(VAR_3) || FUNC_0(VAR_3))
  return 0;

 if (FUNC_2(VAR_3, 9) && !FUNC_1(VAR_3) && VAR_4 == VAR_0)
  return 0;

 if (VAR_5 != VAR_1 && VAR_5 != VAR_2)
  return 0;

 return 1;
}
