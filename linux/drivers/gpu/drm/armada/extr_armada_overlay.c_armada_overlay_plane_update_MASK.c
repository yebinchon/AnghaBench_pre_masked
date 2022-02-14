
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct drm_plane_state {int crtc_x; int crtc_y; unsigned int crtc_h; unsigned int crtc_w; void* src_w; void* src_h; void* src_y; void* src_x; } ;
struct drm_plane {int dev; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_plane_state*) ;
 int FUNC_1 (struct drm_plane_state*) ;
 struct drm_plane_state* FUNC_2 (struct drm_atomic_state*,struct drm_plane*) ;
 int FUNC_3 (struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_plane_state*,struct drm_crtc*) ;
 int FUNC_5 (struct drm_plane_state*,struct drm_framebuffer*) ;
 struct drm_atomic_state* FUNC_6 (int ) ;
 int FUNC_7 (struct drm_atomic_state*) ;
 int FUNC_8 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int,int,unsigned int,unsigned int,void*,void*,void*,void*) ;

__attribute__((used)) static int
FUNC_9(struct drm_plane *VAR_1, struct drm_crtc *VAR_2,
 struct drm_framebuffer *VAR_3,
 int VAR_4, int VAR_5, unsigned VAR_6, unsigned VAR_7,
 uint32_t VAR_8, uint32_t VAR_9, uint32_t VAR_10, uint32_t VAR_11,
 struct drm_modeset_acquire_ctx *VAR_12)
{
 struct drm_atomic_state *VAR_13;
 struct drm_plane_state *VAR_14;
 int VAR_15 = 0;

 FUNC_8(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_10, VAR_11);

 VAR_13 = FUNC_6(VAR_1->dev);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->acquire_ctx = VAR_12;
 VAR_14 = FUNC_2(VAR_13, VAR_1);
 if (FUNC_0(VAR_14)) {
  VAR_15 = FUNC_1(VAR_14);
  goto fail;
 }

 VAR_15 = FUNC_4(VAR_14, VAR_2);
 if (VAR_15 != 0)
  goto fail;

 FUNC_5(VAR_14, VAR_3);
 VAR_14->crtc_x = VAR_4;
 VAR_14->crtc_y = VAR_5;
 VAR_14->crtc_h = VAR_7;
 VAR_14->crtc_w = VAR_6;
 VAR_14->src_x = VAR_8;
 VAR_14->src_y = VAR_9;
 VAR_14->src_h = VAR_11;
 VAR_14->src_w = VAR_10;

 VAR_15 = FUNC_3(VAR_13);
fail:
 FUNC_7(VAR_13);
 return VAR_15;
}
