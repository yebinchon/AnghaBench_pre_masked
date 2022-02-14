
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_crtc_state {int dummy; } ;
struct intel_atomic_state {int rps_interactive; int commit_ready; } ;
struct drm_plane_state {struct dma_fence* fence; int crtc; struct drm_framebuffer* fb; int state; } ;
struct drm_plane {TYPE_1__* state; int dev; } ;
struct TYPE_5__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct TYPE_6__ {int resv; } ;
struct drm_i915_gem_object {TYPE_3__ base; int frontbuffer; } ;
struct drm_framebuffer {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_4__ {int crtc; struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 struct dma_fence* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (int *,struct dma_fence*,int ,int ) ;
 int FUNC_7 (int *,int ,int *,int,int ,int ) ;
 struct intel_crtc_state* FUNC_8 (struct intel_atomic_state*,int ) ;
 struct drm_i915_gem_object* FUNC_9 (struct drm_framebuffer*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct drm_i915_private*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_16 (int ) ;
 struct intel_atomic_state* FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct drm_plane_state*) ;

int
FUNC_20(struct drm_plane *VAR_3,
         struct drm_plane_state *VAR_4)
{
 struct intel_atomic_state *VAR_5 =
  FUNC_17(VAR_4->state);
 struct drm_i915_private *VAR_6 = FUNC_16(VAR_3->dev);
 struct drm_framebuffer *VAR_7 = VAR_4->fb;
 struct drm_i915_gem_object *VAR_8 = FUNC_9(VAR_7);
 struct drm_i915_gem_object *VAR_9 = FUNC_9(VAR_3->state->fb);
 int VAR_10;

 if (VAR_9) {
  struct intel_crtc_state *VAR_11 =
   FUNC_8(VAR_5,
       FUNC_18(VAR_3->state->crtc));
  if (FUNC_15(VAR_11)) {
   VAR_10 = FUNC_7(&VAR_5->commit_ready,
             VAR_9->base.resv, ((void*)0),
             0, 0,
             VAR_0);
   if (VAR_10 < 0)
    return VAR_10;
  }
 }

 if (VAR_4->fence) {
  VAR_10 = FUNC_6(&VAR_5->commit_ready,
          VAR_4->fence,
          VAR_1,
          VAR_0);
  if (VAR_10 < 0)
   return VAR_10;
 }

 if (!VAR_8)
  return 0;

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_13(&VAR_6->drm.struct_mutex);
 if (VAR_10) {
  FUNC_5(VAR_8);
  return VAR_10;
 }

 VAR_10 = FUNC_11(FUNC_19(VAR_4));

 FUNC_14(&VAR_6->drm.struct_mutex);
 FUNC_5(VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_8);
 FUNC_10(VAR_8->frontbuffer, VAR_2);

 if (!VAR_4->fence) {
  struct dma_fence *VAR_12;

  VAR_10 = FUNC_7(&VAR_5->commit_ready,
            VAR_8->base.resv, ((void*)0),
            0, VAR_1,
            VAR_0);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_12 = FUNC_2(VAR_8->base.resv);
  if (VAR_12) {
   FUNC_0(VAR_4->crtc, VAR_12);
   FUNC_1(VAR_12);
  }
 } else {
  FUNC_0(VAR_4->crtc, VAR_4->fence);
 }
 if (!VAR_5->rps_interactive) {
  FUNC_12(VAR_6, 1);
  VAR_5->rps_interactive = 1;
 }

 return 0;
}
