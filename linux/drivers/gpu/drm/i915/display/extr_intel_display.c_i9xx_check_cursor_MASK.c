
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int crtc_w; scalar_t__ crtc_x; scalar_t__ visible; int crtc_h; struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {int ctl; TYPE_4__ base; TYPE_2__* color_plane; } ;
struct TYPE_5__ {int dev; } ;
struct intel_plane {int pipe; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {int* pitches; TYPE_3__* format; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_7__ {int* cpp; } ;
struct TYPE_6__ {int stride; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_5 (struct intel_plane_state*) ;
 int FUNC_6 (struct intel_crtc_state*,struct intel_plane_state*) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_plane* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct intel_crtc_state *VAR_2,
        struct intel_plane_state *VAR_3)
{
 struct intel_plane *VAR_4 = FUNC_8(VAR_3->base.plane);
 struct drm_i915_private *VAR_5 = FUNC_7(VAR_4->base.dev);
 const struct drm_framebuffer *VAR_6 = VAR_3->base.fb;
 enum pipe VAR_7 = VAR_4->pipe;
 int VAR_8;

 VAR_8 = FUNC_6(VAR_2, VAR_3);
 if (VAR_8)
  return VAR_8;


 if (!VAR_6)
  return 0;


 if (!FUNC_5(VAR_3)) {
  FUNC_0("Cursor dimension %dx%d not supported\n",
     VAR_3->base.crtc_w,
     VAR_3->base.crtc_h);
  return -VAR_0;
 }

 FUNC_3(VAR_3->base.visible &&
  VAR_3->color_plane[0].stride != VAR_6->pitches[0]);

 if (VAR_6->pitches[0] != VAR_3->base.crtc_w * VAR_6->format->cpp[0]) {
  FUNC_1("Invalid cursor stride (%u) (cursor width %d)\n",
         VAR_6->pitches[0], VAR_3->base.crtc_w);
  return -VAR_0;
 }
 if (FUNC_2(VAR_5) && VAR_7 == VAR_1 &&
     VAR_3->base.visible && VAR_3->base.crtc_x < 0) {
  FUNC_1("CHV cursor C not allowed to straddle the left screen edge\n");
  return -VAR_0;
 }

 VAR_3->ctl = FUNC_4(VAR_2, VAR_3);

 return 0;
}
