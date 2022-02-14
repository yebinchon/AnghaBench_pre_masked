
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int const*) ;
 int const* VAR_0 ;
 int const* VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int,int) ;

__attribute__((used)) static const u32 *FUNC_2(struct drm_i915_private *VAR_2,
     enum pipe VAR_3, enum plane_id VAR_4,
     int *VAR_5)
{
 if (FUNC_1(VAR_2, VAR_3, VAR_4)) {
  *VAR_5 = FUNC_0(VAR_0);
  return VAR_0;
 } else {
  *VAR_5 = FUNC_0(VAR_1);
  return VAR_1;
 }
}
