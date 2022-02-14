
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_atomic_state {int rps_interactive; } ;
struct drm_plane_state {int state; } ;
struct drm_plane {int dev; } ;
struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_atomic_state* FUNC_5 (int ) ;
 int FUNC_6 (struct drm_plane_state*) ;

void
FUNC_7(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct intel_atomic_state *VAR_2 =
  FUNC_5(VAR_1->state);
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_0->dev);

 if (VAR_2->rps_interactive) {
  FUNC_1(VAR_3, 0);
  VAR_2->rps_interactive = 0;
 }


 FUNC_2(&VAR_3->drm.struct_mutex);
 FUNC_0(FUNC_6(VAR_1));
 FUNC_3(&VAR_3->drm.struct_mutex);
}
