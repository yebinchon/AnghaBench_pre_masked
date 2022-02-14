
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 () ;

bool FUNC_3(struct drm_i915_private *VAR_0, enum plane_id VAR_1)
{
 return FUNC_1(VAR_0) >= 11 &&
  FUNC_2() & FUNC_0(VAR_1);
}
