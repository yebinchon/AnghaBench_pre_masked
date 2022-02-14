
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int visible; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct TYPE_7__ {scalar_t__ active; struct drm_atomic_state* state; int crtc; } ;
struct intel_crtc_state {scalar_t__ update_wm_pre; TYPE_3__ base; scalar_t__ disable_lp_wm; scalar_t__ disable_cxsr; } ;
struct TYPE_5__ {struct drm_plane* primary; struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_plane_state {scalar_t__ visible; } ;
struct drm_plane {int dummy; } ;
struct TYPE_8__ {int (* initial_watermarks ) (struct intel_atomic_state*,struct intel_crtc_state*) ;} ;
struct drm_i915_private {TYPE_4__ display; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 struct drm_plane_state* FUNC_2 (struct drm_atomic_state*,struct drm_plane*) ;
 int FUNC_3 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state*,struct intel_crtc_state*) ;
 int FUNC_5 (struct drm_i915_private*,int ,int) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 struct intel_plane_state* FUNC_7 (struct intel_atomic_state*,int ) ;
 int FUNC_8 (struct intel_crtc*,struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_9 (struct drm_i915_private*,int ,int) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*,int) ;
 int FUNC_11 (struct intel_crtc*) ;
 int FUNC_12 (struct drm_i915_private*,int ) ;
 int FUNC_13 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_14 (struct drm_i915_private*,struct intel_crtc_state*) ;
 scalar_t__ FUNC_15 (struct drm_i915_private*,struct intel_crtc_state*) ;
 int FUNC_16 (struct drm_i915_private*,int ,int) ;
 int FUNC_17 (struct intel_atomic_state*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_18 (struct drm_device*) ;
 struct intel_atomic_state* FUNC_19 (struct drm_atomic_state*) ;
 struct intel_crtc* FUNC_20 (int ) ;
 int FUNC_21 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_22(struct intel_crtc_state *VAR_0,
       struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_20(VAR_0->base.crtc);
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct drm_i915_private *VAR_4 = FUNC_18(VAR_3);
 struct drm_atomic_state *VAR_5 = VAR_0->base.state;
 struct drm_plane *VAR_6 = VAR_2->base.primary;
 struct drm_plane_state *VAR_7 =
  FUNC_2(VAR_5, VAR_6);
 bool VAR_8 = FUNC_13(VAR_1);
 struct intel_atomic_state *VAR_9 =
  FUNC_19(VAR_5);

 if (FUNC_4(VAR_0, VAR_1))
  FUNC_3(VAR_0);

 if (VAR_7) {
  struct intel_plane_state *VAR_10 =
   FUNC_7(VAR_9,
        FUNC_21(VAR_6));

  FUNC_8(VAR_2, VAR_1, VAR_10);




  if (FUNC_1(VAR_4, 2) && VAR_7->visible &&
      (VAR_8 || !VAR_10->base.visible))
   FUNC_9(VAR_4, VAR_2->pipe, 0);
 }


 if (!FUNC_14(VAR_4, VAR_0) &&
     FUNC_14(VAR_4, VAR_1))
  FUNC_16(VAR_4, VAR_2->pipe, 1);


 if (!FUNC_15(VAR_4, VAR_0) &&
     FUNC_15(VAR_4, VAR_1))
  FUNC_5(VAR_4, VAR_2->pipe, 1);
 if (FUNC_0(VAR_4) && VAR_0->base.active &&
     VAR_1->disable_cxsr && FUNC_10(VAR_4, 0))
  FUNC_12(VAR_4, VAR_2->pipe);
 if (VAR_1->disable_lp_wm && FUNC_6(VAR_3) &&
     VAR_0->base.active)
  FUNC_12(VAR_4, VAR_2->pipe);





 if (FUNC_13(VAR_1))
  return;
 if (VAR_4->display.initial_watermarks != ((void*)0))
  VAR_4->display.initial_watermarks(VAR_9,
           VAR_1);
 else if (VAR_1->update_wm_pre)
  FUNC_11(VAR_2);
}
