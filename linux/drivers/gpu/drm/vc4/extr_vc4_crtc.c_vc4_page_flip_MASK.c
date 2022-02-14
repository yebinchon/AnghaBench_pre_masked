
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,struct drm_framebuffer*,struct drm_pending_vblank_event*,int,struct drm_modeset_acquire_ctx*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_framebuffer*,struct drm_pending_vblank_event*,int) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_1,
    struct drm_framebuffer *VAR_2,
    struct drm_pending_vblank_event *VAR_3,
    uint32_t VAR_4,
    struct drm_modeset_acquire_ctx *VAR_5)
{
 if (VAR_4 & VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
