
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct drm_i915_private *VAR_2,
         enum pipe VAR_3, enum plane_id VAR_4)
{
 if (!FUNC_0(VAR_2))
  return 0;

 return VAR_3 == VAR_0 && VAR_4 == VAR_1;
}
