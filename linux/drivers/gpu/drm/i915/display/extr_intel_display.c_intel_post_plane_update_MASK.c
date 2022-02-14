
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ active; struct drm_atomic_state* state; int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; scalar_t__ update_wm_post; int fb_bits; } ;
struct TYPE_4__ {struct drm_device* dev; struct drm_plane* primary; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_plane_state {scalar_t__ visible; } ;
struct drm_plane {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 struct drm_plane_state* FUNC_0 (struct drm_atomic_state*,struct drm_plane*) ;
 struct drm_plane_state* FUNC_1 (struct drm_atomic_state*,struct drm_plane*) ;
 int FUNC_2 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_3 (struct intel_crtc_state*,struct intel_crtc_state*) ;
 int FUNC_4 (struct drm_i915_private*,int ,int) ;
 struct intel_crtc_state* FUNC_5 (int ,struct intel_crtc*) ;
 int FUNC_6 (struct intel_crtc*) ;
 int FUNC_7 (struct drm_i915_private*,int ) ;
 int FUNC_8 (TYPE_2__*,struct intel_crtc_state*) ;
 int FUNC_9 (struct intel_crtc*) ;
 scalar_t__ FUNC_10 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*,struct intel_crtc_state*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*,struct intel_crtc_state*) ;
 int FUNC_13 (struct drm_i915_private*,int ,int) ;
 struct drm_i915_private* FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_atomic_state*) ;
 struct intel_crtc* FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_16(VAR_0->base.crtc);
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct drm_i915_private *VAR_3 = FUNC_14(VAR_2);
 struct drm_atomic_state *VAR_4 = VAR_0->base.state;
 struct intel_crtc_state *VAR_5 =
  FUNC_5(FUNC_15(VAR_4),
      VAR_1);
 struct drm_plane *VAR_6 = VAR_1->base.primary;
 struct drm_plane_state *VAR_7 =
  FUNC_1(VAR_4, VAR_6);

 FUNC_7(FUNC_14(VAR_1->base.dev), VAR_5->fb_bits);

 if (VAR_5->update_wm_post && VAR_5->base.active)
  FUNC_9(VAR_1);

 if (FUNC_3(VAR_0, VAR_5))
  FUNC_2(VAR_5);

 if (VAR_7) {
  struct drm_plane_state *VAR_8 =
   FUNC_0(VAR_4, VAR_6);

  FUNC_6(VAR_1);

  if (VAR_8->visible &&
      (FUNC_10(VAR_5) ||
       !VAR_7->visible))
   FUNC_8(&VAR_1->base, VAR_5);
 }

 if (FUNC_11(VAR_3, VAR_0) &&
     !FUNC_11(VAR_3, VAR_5))
  FUNC_13(VAR_3, VAR_1->pipe, 0);

 if (FUNC_12(VAR_3, VAR_0) &&
     !FUNC_12(VAR_3, VAR_5))
  FUNC_4(VAR_3, VAR_1->pipe, 0);
}
