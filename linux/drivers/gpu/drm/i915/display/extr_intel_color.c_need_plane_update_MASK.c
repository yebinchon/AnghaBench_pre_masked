
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_plane {scalar_t__ id; TYPE_1__ base; } ;
struct intel_crtc_state {int active_planes; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct intel_plane *VAR_1,
         const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_1->base.dev);






 return VAR_2->active_planes & FUNC_0(VAR_1->id) ||
  (FUNC_1(VAR_3) < 9 &&
   VAR_1->id == VAR_0);
}
