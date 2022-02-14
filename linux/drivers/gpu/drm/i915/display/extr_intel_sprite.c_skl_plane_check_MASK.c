
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int visible; int alpha; struct drm_framebuffer* fb; int plane; } ;
struct TYPE_6__ {int flags; } ;
struct intel_plane_state {int color_ctl; int ctl; TYPE_4__ base; TYPE_2__ ckey; } ;
struct TYPE_5__ {int dev; } ;
struct intel_plane {TYPE_1__ base; } ;
struct intel_crtc_state {int base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct TYPE_7__ {int format; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (TYPE_4__*,int *,int,int,int,int) ;
 int FUNC_3 (struct intel_crtc_state*,struct intel_plane_state*) ;
 scalar_t__ FUNC_4 (struct drm_framebuffer const*) ;
 int FUNC_5 (struct intel_plane_state*) ;
 int FUNC_6 (struct intel_plane_state*) ;
 int FUNC_7 (struct intel_crtc_state*,int ) ;
 int FUNC_8 (struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_9 (struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_10 (struct intel_plane_state*) ;
 int FUNC_11 (struct intel_crtc_state*,struct intel_plane_state*) ;
 struct drm_i915_private* FUNC_12 (int ) ;
 struct intel_plane* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct intel_crtc_state *VAR_1,
      struct intel_plane_state *VAR_2)
{
 struct intel_plane *VAR_3 = FUNC_13(VAR_2->base.plane);
 struct drm_i915_private *VAR_4 = FUNC_12(VAR_3->base.dev);
 const struct drm_framebuffer *VAR_5 = VAR_2->base.fb;
 int VAR_6 = VAR_0;
 int VAR_7 = VAR_0;
 int VAR_8;

 VAR_8 = FUNC_9(VAR_1, VAR_2);
 if (VAR_8)
  return VAR_8;


 if (!VAR_2->ckey.flags && FUNC_4(VAR_5)) {
  VAR_6 = 1;
  VAR_7 = FUNC_7(VAR_1, VAR_5->format->format);
 }

 VAR_8 = FUNC_2(&VAR_2->base,
        &VAR_1->base,
        VAR_6, VAR_7,
        1, 1);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_2);
 if (VAR_8)
  return VAR_8;

 if (!VAR_2->base.visible)
  return 0;

 VAR_8 = FUNC_8(VAR_1, VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_10(VAR_2);
 if (VAR_8)
  return VAR_8;


 if (!(VAR_2->base.alpha >> 8))
  VAR_2->base.visible = 0;

 VAR_2->ctl = FUNC_11(VAR_1, VAR_2);

 if (FUNC_0(VAR_4) >= 10 || FUNC_1(VAR_4))
  VAR_2->color_ctl = FUNC_3(VAR_1,
            VAR_2);

 return 0;
}
