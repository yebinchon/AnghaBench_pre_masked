
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_4,
         enum pipe VAR_5, enum plane_id VAR_6)
{
 if (VAR_6 == VAR_1)
  return 0;

 if (FUNC_0(VAR_4) >= 10)
  return 1;

 if (FUNC_1(VAR_4))
  return VAR_5 != VAR_0;

 return VAR_5 != VAR_0 &&
  (VAR_6 == VAR_2 ||
   VAR_6 == VAR_3);
}
