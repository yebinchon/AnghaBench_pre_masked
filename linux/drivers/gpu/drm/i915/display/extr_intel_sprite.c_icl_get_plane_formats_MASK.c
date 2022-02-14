
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
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int const* VAR_1 ;
 int const* VAR_2 ;

__attribute__((used)) static const u32 *FUNC_3(struct drm_i915_private *VAR_3,
     enum pipe VAR_4, enum plane_id VAR_5,
     int *VAR_6)
{
 if (FUNC_1(VAR_3, VAR_5)) {
  *VAR_6 = FUNC_0(VAR_0);
  return VAR_0;
 } else if (FUNC_2(VAR_5)) {
  *VAR_6 = FUNC_0(VAR_2);
  return VAR_2;
 } else {
  *VAR_6 = FUNC_0(VAR_1);
  return VAR_1;
 }
}
