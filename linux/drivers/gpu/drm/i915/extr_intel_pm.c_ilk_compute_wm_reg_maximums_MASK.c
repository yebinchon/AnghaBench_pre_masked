
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ilk_wm_maximums {int fbc; int cur; void* spr; void* pri; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private const*,int) ;
 int FUNC_1 (struct drm_i915_private const*) ;
 void* FUNC_2 (struct drm_i915_private const*,int,int) ;

__attribute__((used)) static void FUNC_3(const struct drm_i915_private *VAR_0,
     int VAR_1,
     struct ilk_wm_maximums *VAR_2)
{
 VAR_2->pri = FUNC_2(VAR_0, VAR_1, 0);
 VAR_2->spr = FUNC_2(VAR_0, VAR_1, 1);
 VAR_2->cur = FUNC_0(VAR_0, VAR_1);
 VAR_2->fbc = FUNC_1(VAR_0);
}
