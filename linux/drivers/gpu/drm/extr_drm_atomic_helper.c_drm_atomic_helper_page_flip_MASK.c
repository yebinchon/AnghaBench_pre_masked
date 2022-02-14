
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_plane {int dev; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {struct drm_plane* primary; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_atomic_state*) ;
 struct drm_atomic_state* FUNC_1 (int ) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_atomic_state*,struct drm_crtc*,struct drm_framebuffer*,struct drm_pending_vblank_event*,int ) ;

int FUNC_4(struct drm_crtc *VAR_1,
    struct drm_framebuffer *VAR_2,
    struct drm_pending_vblank_event *VAR_3,
    uint32_t VAR_4,
    struct drm_modeset_acquire_ctx *VAR_5)
{
 struct drm_plane *VAR_6 = VAR_1->primary;
 struct drm_atomic_state *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_1(VAR_6->dev);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->acquire_ctx = VAR_5;

 VAR_8 = FUNC_3(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_8 != 0)
  goto fail;

 VAR_8 = FUNC_0(VAR_7);
fail:
 FUNC_2(VAR_7);
 return VAR_8;
}
