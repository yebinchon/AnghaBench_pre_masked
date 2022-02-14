
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int visible; int fb; int plane; } ;
struct intel_plane_state {int ctl; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_plane {TYPE_1__ base; } ;
struct intel_crtc_state {int base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (TYPE_2__*,int *,int,int,int,int) ;
 int FUNC_3 (struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_4 (struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_5 (struct intel_plane_state*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct intel_plane_state*) ;
 int FUNC_8 (struct intel_crtc_state*,struct intel_plane_state*) ;
 struct drm_i915_private* FUNC_9 (int ) ;
 struct intel_plane* FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct intel_crtc_state *VAR_1,
   struct intel_plane_state *VAR_2)
{
 struct intel_plane *VAR_3 = FUNC_10(VAR_2->base.plane);
 struct drm_i915_private *VAR_4 = FUNC_9(VAR_3->base.dev);
 int VAR_5 = VAR_0;
 int VAR_6 = VAR_0;
 int VAR_7;

 if (FUNC_6(VAR_2->base.fb)) {
  if (FUNC_0(VAR_4) < 7) {
   VAR_5 = 1;
   VAR_6 = 16 << 16;
  } else if (FUNC_1(VAR_4)) {
   VAR_5 = 1;
   VAR_6 = 2 << 16;
  }
 }

 VAR_7 = FUNC_2(&VAR_2->base,
        &VAR_1->base,
        VAR_5, VAR_6,
        1, 1);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_2);
 if (VAR_7)
  return VAR_7;

 if (!VAR_2->base.visible)
  return 0;

 VAR_7 = FUNC_7(VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_1, VAR_2);
 if (VAR_7)
  return VAR_7;

 if (FUNC_0(VAR_4) >= 7)
  VAR_2->ctl = FUNC_8(VAR_1, VAR_2);
 else
  VAR_2->ctl = FUNC_4(VAR_1, VAR_2);

 return 0;
}
