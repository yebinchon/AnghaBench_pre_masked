
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_plane {int dev; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc_state {int target_vblank; } ;
struct drm_crtc {struct drm_plane* primary; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_crtc_state* FUNC_1 (struct drm_atomic_state*,struct drm_crtc*) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 struct drm_atomic_state* FUNC_3 (int ) ;
 int FUNC_4 (struct drm_atomic_state*) ;
 int FUNC_5 (struct drm_atomic_state*,struct drm_crtc*,struct drm_framebuffer*,struct drm_pending_vblank_event*,int ) ;

int FUNC_6(struct drm_crtc *VAR_2,
           struct drm_framebuffer *VAR_3,
           struct drm_pending_vblank_event *VAR_4,
           uint32_t VAR_5,
           uint32_t VAR_6,
           struct drm_modeset_acquire_ctx *VAR_7)
{
 struct drm_plane *VAR_8 = VAR_2->primary;
 struct drm_atomic_state *VAR_9;
 struct drm_crtc_state *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_3(VAR_8->dev);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->acquire_ctx = VAR_7;

 VAR_11 = FUNC_5(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_11 != 0)
  goto fail;

 VAR_10 = FUNC_1(VAR_9, VAR_2);
 if (FUNC_0(!VAR_10)) {
  VAR_11 = -VAR_0;
  goto fail;
 }
 VAR_10->target_vblank = VAR_6;

 VAR_11 = FUNC_2(VAR_9);
fail:
 FUNC_4(VAR_9);
 return VAR_11;
}
