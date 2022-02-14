
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_mode_config {int mutex; struct drm_modeset_acquire_ctx* acquire_ctx; } ;
struct drm_device {struct drm_mode_config mode_config; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_2 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_3 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_device *VAR_0)
{
 struct drm_mode_config *VAR_1 = &VAR_0->mode_config;
 struct drm_modeset_acquire_ctx *VAR_2 = VAR_1->acquire_ctx;

 if (FUNC_0(!VAR_2))
  return;

 VAR_1->acquire_ctx = ((void*)0);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 FUNC_3(VAR_2);

 FUNC_4(&VAR_0->mode_config.mutex);
}
