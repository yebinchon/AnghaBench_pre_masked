
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_i915_private {struct drm_atomic_state* modeset_restore_state; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,struct drm_atomic_state*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_4 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_5 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_6 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_7 (struct drm_device*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_9 (struct drm_device*) ;

void FUNC_10(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_9(VAR_1);
 struct drm_atomic_state *VAR_3 = VAR_2->modeset_restore_state;
 struct drm_modeset_acquire_ctx VAR_4;
 int VAR_5;

 VAR_2->modeset_restore_state = ((void*)0);
 if (VAR_3)
  VAR_3->acquire_ctx = &VAR_4;

 FUNC_4(&VAR_4, 0);

 while (1) {
  VAR_5 = FUNC_7(VAR_1, &VAR_4);
  if (VAR_5 != -VAR_0)
   break;

  FUNC_5(&VAR_4);
 }

 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_1, VAR_3, &VAR_4);

 FUNC_8(VAR_2);
 FUNC_6(&VAR_4);
 FUNC_3(&VAR_4);

 if (VAR_5)
  FUNC_0("Restoring old state failed with %i\n", VAR_5);
 if (VAR_3)
  FUNC_2(VAR_3);
}
