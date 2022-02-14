
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_lock {int dummy; } ;
struct drm_modeset_acquire_ctx {int interruptible; struct drm_modeset_lock* contended; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_2 (struct drm_modeset_lock*,struct drm_modeset_acquire_ctx*,int ,int) ;

int FUNC_3(struct drm_modeset_acquire_ctx *VAR_0)
{
 struct drm_modeset_lock *VAR_1 = VAR_0->contended;

 VAR_0->contended = ((void*)0);

 if (FUNC_0(!VAR_1))
  return 0;

 FUNC_1(VAR_0);

 return FUNC_2(VAR_1, VAR_0, VAR_0->interruptible, 1);
}
