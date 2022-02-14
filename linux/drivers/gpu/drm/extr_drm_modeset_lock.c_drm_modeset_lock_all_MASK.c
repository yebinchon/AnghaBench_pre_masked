
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_acquire_ctx {int ww_ctx; } ;
struct drm_mode_config {int acquire_ctx; int mutex; } ;
struct drm_device {struct drm_mode_config mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_2 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_3 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_4 (struct drm_device*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_modeset_acquire_ctx*) ;
 struct drm_modeset_acquire_ctx* FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct drm_device *VAR_3)
{
 struct drm_mode_config *VAR_4 = &VAR_3->mode_config;
 struct drm_modeset_acquire_ctx *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_1 | VAR_2);
 if (FUNC_0(!VAR_5))
  return;

 FUNC_8(&VAR_4->mutex);

 FUNC_2(VAR_5, 0);

retry:
 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (VAR_6 < 0) {
  if (VAR_6 == -VAR_0) {
   FUNC_3(VAR_5);
   goto retry;
  }

  FUNC_1(VAR_5);
  FUNC_6(VAR_5);
  return;
 }
 FUNC_9(&VAR_5->ww_ctx);

 FUNC_0(VAR_4->acquire_ctx);





 VAR_4->acquire_ctx = VAR_5;

 FUNC_5(VAR_3);
}
