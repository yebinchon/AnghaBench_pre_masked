
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_9__ {TYPE_1__ reset; } ;
struct TYPE_7__ {int pending_fb_pin; } ;
struct TYPE_8__ {int mutex; } ;
struct drm_device {TYPE_3__ mode_config; } ;
struct drm_i915_private {struct drm_atomic_state* modeset_restore_state; TYPE_4__ gt; TYPE_2__ gpu_error; struct drm_modeset_acquire_ctx reset_ctx; struct drm_device drm; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;
struct TYPE_10__ {int force_reset_modeset_test; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_atomic_state*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct drm_device*,struct drm_modeset_acquire_ctx*) ;
 struct drm_atomic_state* FUNC_6 (struct drm_device*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_7 (struct drm_atomic_state*) ;
 int FUNC_8 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_9 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_10 (struct drm_device*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int *,int ) ;

void FUNC_17(struct drm_i915_private *VAR_3)
{
 struct drm_device *VAR_4 = &VAR_3->drm;
 struct drm_modeset_acquire_ctx *VAR_5 = &VAR_3->reset_ctx;
 struct drm_atomic_state *VAR_6;
 int VAR_7;


 if (!VAR_2.force_reset_modeset_test &&
     !FUNC_11(VAR_3))
  return;


 FUNC_14(VAR_1, &VAR_3->gt.reset.flags);
 FUNC_15();
 FUNC_16(&VAR_3->gt.reset.flags, VAR_1);

 if (FUNC_4(&VAR_3->gpu_error.pending_fb_pin)) {
  FUNC_0("Modeset potentially stuck, unbreaking through wedging\n");
  FUNC_12(&VAR_3->gt);
 }





 FUNC_13(&VAR_4->mode_config.mutex);
 FUNC_8(VAR_5, 0);
 while (1) {
  VAR_7 = FUNC_10(VAR_4, VAR_5);
  if (VAR_7 != -VAR_0)
   break;

  FUNC_9(VAR_5);
 }




 VAR_6 = FUNC_6(VAR_4, VAR_5);
 if (FUNC_2(VAR_6)) {
  VAR_7 = FUNC_3(VAR_6);
  FUNC_1("Duplicating state failed with %i\n", VAR_7);
  return;
 }

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_1("Suspending crtc's failed with %i\n", VAR_7);
  FUNC_7(VAR_6);
  return;
 }

 VAR_3->modeset_restore_state = VAR_6;
 VAR_6->acquire_ctx = VAR_5;
}
