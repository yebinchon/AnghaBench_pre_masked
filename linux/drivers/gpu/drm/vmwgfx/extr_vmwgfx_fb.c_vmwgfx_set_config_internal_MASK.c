
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_mode_set {struct drm_crtc* crtc; } ;
struct drm_crtc {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* set_config ) (struct drm_mode_set*,struct drm_modeset_acquire_ctx*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_1 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_2 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_3 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_4 (struct drm_mode_set*,struct drm_modeset_acquire_ctx*) ;

__attribute__((used)) static int FUNC_5(struct drm_mode_set *VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_1->crtc;
 struct drm_modeset_acquire_ctx VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, 0);

restart:
 VAR_4 = VAR_2->funcs->set_config(VAR_1, &VAR_3);

 if (VAR_4 == -VAR_0) {
  FUNC_2(&VAR_3);
  goto restart;
 }

 FUNC_3(&VAR_3);
 FUNC_0(&VAR_3);

 return VAR_4;
}
