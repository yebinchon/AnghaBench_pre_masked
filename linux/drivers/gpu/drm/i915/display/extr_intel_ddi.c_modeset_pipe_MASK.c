
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_crtc_state {int connectors_changed; } ;
struct drm_crtc {int dev; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 struct drm_crtc_state* FUNC_3 (struct drm_atomic_state*,struct drm_crtc*) ;
 struct drm_atomic_state* FUNC_4 (int ) ;
 int FUNC_5 (struct drm_atomic_state*) ;

__attribute__((used)) static int FUNC_6(struct drm_crtc *VAR_1,
   struct drm_modeset_acquire_ctx *VAR_2)
{
 struct drm_atomic_state *VAR_3;
 struct drm_crtc_state *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(VAR_1->dev);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->acquire_ctx = VAR_2;

 VAR_4 = FUNC_3(VAR_3, VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto out;
 }

 VAR_4->connectors_changed = 1;

 VAR_5 = FUNC_2(VAR_3);
out:
 FUNC_5(VAR_3);

 return VAR_5;
}
