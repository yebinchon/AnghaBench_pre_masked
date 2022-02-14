
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_mode_set {struct drm_crtc* crtc; } ;
struct drm_crtc {int dev; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_mode_set*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 struct drm_atomic_state* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_atomic_state*,int) ;

int FUNC_5(struct drm_mode_set *VAR_1,
     struct drm_modeset_acquire_ctx *VAR_2)
{
 struct drm_atomic_state *VAR_3;
 struct drm_crtc *VAR_4 = VAR_1->crtc;
 int VAR_5 = 0;

 VAR_3 = FUNC_2(VAR_4->dev);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->acquire_ctx = VAR_2;
 VAR_5 = FUNC_0(VAR_1, VAR_3);
 if (VAR_5 != 0)
  goto fail;

 VAR_5 = FUNC_4(VAR_3, 1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3);

fail:
 FUNC_3(VAR_3);
 return VAR_5;
}
