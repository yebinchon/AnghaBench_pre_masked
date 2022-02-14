
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_plane {scalar_t__ i9xx_plane; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ VAR_1 ;
 struct drm_i915_private* FUNC_2 (int ) ;

unsigned int
FUNC_3(struct intel_plane *VAR_2,
        u32 VAR_3, u64 VAR_4,
        unsigned int VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_2(VAR_2->base.dev);

 if (!FUNC_0(VAR_6)) {
  return 32*1024;
 } else if (FUNC_1(VAR_6) >= 4) {
  if (VAR_4 == VAR_0)
   return 16*1024;
  else
   return 32*1024;
 } else if (FUNC_1(VAR_6) >= 3) {
  if (VAR_4 == VAR_0)
   return 8*1024;
  else
   return 16*1024;
 } else {
  if (VAR_2->i9xx_plane == VAR_1)
   return 4*1024;
  else
   return 8*1024;
 }
}
