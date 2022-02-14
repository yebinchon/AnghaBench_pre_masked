
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_plane {int frontbuffer_bit; } ;
struct TYPE_6__ {int active; } ;
struct intel_crtc_state {TYPE_3__ base; int active_planes; scalar_t__ update_pipe; } ;
struct drm_plane_state {scalar_t__ src_w; scalar_t__ src_h; unsigned int crtc_w; unsigned int crtc_h; int crtc_x; int crtc_y; scalar_t__ visible; struct drm_framebuffer* fb; scalar_t__ src_y; scalar_t__ src_x; struct drm_crtc* crtc; TYPE_1__* commit; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_5__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int state; int dev; } ;
struct TYPE_4__ {int hw_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int,int,unsigned int,unsigned int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct drm_modeset_acquire_ctx*) ;
 int FUNC_1 (struct drm_plane_state*,struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_crtc*,TYPE_3__*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct intel_plane*,struct intel_crtc_state*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct intel_crtc_state*,struct intel_crtc_state*,int ,int ) ;
 int FUNC_8 (struct drm_plane*,struct drm_plane_state*) ;
 struct drm_plane_state* FUNC_9 (struct drm_plane*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct intel_plane*,struct intel_crtc_state*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_16 (int ) ;
 struct intel_crtc_state* FUNC_17 (int ) ;
 int FUNC_18 (struct drm_framebuffer*) ;
 struct intel_plane* FUNC_19 (struct drm_plane*) ;
 int FUNC_20 (struct drm_plane_state*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int
FUNC_22(struct drm_plane *VAR_2,
      struct drm_crtc *VAR_3,
      struct drm_framebuffer *VAR_4,
      int VAR_5, int VAR_6,
      unsigned int VAR_7, unsigned int VAR_8,
      u32 VAR_9, u32 VAR_10,
      u32 VAR_11, u32 VAR_12,
      struct drm_modeset_acquire_ctx *VAR_13)
{
 struct drm_i915_private *VAR_14 = FUNC_16(VAR_3->dev);
 struct drm_plane_state *VAR_15, *VAR_16;
 struct intel_plane *VAR_17 = FUNC_19(VAR_2);
 struct intel_crtc_state *VAR_18 =
  FUNC_17(VAR_3->state);
 struct intel_crtc_state *VAR_19;
 int VAR_20;





 if (!VAR_18->base.active || FUNC_15(VAR_18) ||
     VAR_18->update_pipe)
  goto slow;

 VAR_15 = VAR_2->state;





 if (VAR_15->commit &&
     !FUNC_21(&VAR_15->commit->hw_done))
  goto slow;






 if (VAR_15->crtc != VAR_3 ||
     VAR_15->src_w != VAR_11 ||
     VAR_15->src_h != VAR_12 ||
     VAR_15->crtc_w != VAR_7 ||
     VAR_15->crtc_h != VAR_8 ||
     !VAR_15->fb != !VAR_4)
  goto slow;

 VAR_16 = FUNC_9(VAR_2);
 if (!VAR_16)
  return -VAR_0;

 VAR_19 = FUNC_17(FUNC_3(VAR_3));
 if (!VAR_19) {
  VAR_20 = -VAR_0;
  goto out_free;
 }

 FUNC_1(VAR_16, VAR_4);

 VAR_16->src_x = VAR_9;
 VAR_16->src_y = VAR_10;
 VAR_16->src_w = VAR_11;
 VAR_16->src_h = VAR_12;
 VAR_16->crtc_x = VAR_5;
 VAR_16->crtc_y = VAR_6;
 VAR_16->crtc_w = VAR_7;
 VAR_16->crtc_h = VAR_8;

 VAR_20 = FUNC_7(VAR_18, VAR_19,
        FUNC_20(VAR_15),
        FUNC_20(VAR_16));
 if (VAR_20)
  goto out_free;

 VAR_20 = FUNC_13(&VAR_14->drm.struct_mutex);
 if (VAR_20)
  goto out_free;

 VAR_20 = FUNC_10(FUNC_20(VAR_16));
 if (VAR_20)
  goto out_unlock;

 FUNC_5(FUNC_18(VAR_4), VAR_1);
 FUNC_6(FUNC_18(VAR_15->fb),
    FUNC_18(VAR_4),
    VAR_17->frontbuffer_bit);


 VAR_2->state = VAR_16;
 VAR_18->active_planes = VAR_19->active_planes;

 if (VAR_2->state->visible)
  FUNC_12(VAR_17, VAR_18,
       FUNC_20(VAR_2->state));
 else
  FUNC_4(VAR_17, VAR_18);

 FUNC_11(FUNC_20(VAR_15));

out_unlock:
 FUNC_14(&VAR_14->drm.struct_mutex);
out_free:
 if (VAR_19)
  FUNC_2(VAR_3, &VAR_19->base);
 if (VAR_20)
  FUNC_8(VAR_2, VAR_16);
 else
  FUNC_8(VAR_2, VAR_15);
 return VAR_20;

slow:
 return FUNC_0(VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_7, VAR_8,
           VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
}
