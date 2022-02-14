
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_lock {int mutex; } ;
struct drm_modeset_acquire_ctx {int interruptible; } ;


 int FUNC_0 (struct drm_modeset_lock*,struct drm_modeset_acquire_ctx*,int ,int) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct drm_modeset_lock *VAR_0,
  struct drm_modeset_acquire_ctx *VAR_1)
{
 if (VAR_1)
  return FUNC_0(VAR_0, VAR_1, VAR_1->interruptible, 0);

 FUNC_1(&VAR_0->mutex, ((void*)0));
 return 0;
}
