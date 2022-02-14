
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_3__ reset; } ;
struct TYPE_5__ {int (* hpd_irq_setup ) (struct drm_i915_private*) ;} ;
struct TYPE_6__ {int mutex; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct drm_i915_private {TYPE_4__ gt; int irq_lock; TYPE_1__ display; int modeset_restore_state; struct drm_modeset_acquire_ctx reset_ctx; struct drm_device drm; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,struct drm_atomic_state*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_5 (struct drm_modeset_acquire_ctx*) ;
 struct drm_atomic_state* FUNC_6 (int *) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct drm_i915_private*) ;
 int FUNC_16 (int ,int *) ;

void FUNC_17(struct drm_i915_private *VAR_1)
{
 struct drm_device *VAR_2 = &VAR_1->drm;
 struct drm_modeset_acquire_ctx *VAR_3 = &VAR_1->reset_ctx;
 struct drm_atomic_state *VAR_4;
 int VAR_5;


 if (!FUNC_16(VAR_0, &VAR_1->gt.reset.flags))
  return;

 VAR_4 = FUNC_6(&VAR_1->modeset_restore_state);
 if (!VAR_4)
  goto unlock;


 if (!FUNC_7(VAR_1)) {

  VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3);
  if (VAR_5)
   FUNC_0("Restoring old state failed with %i\n", VAR_5);
 } else {




  FUNC_11(VAR_1);
  FUNC_10(VAR_2);
  FUNC_9(VAR_1);

  FUNC_13(&VAR_1->irq_lock);
  if (VAR_1->display.hpd_irq_setup)
   VAR_1->display.hpd_irq_setup(VAR_1);
  FUNC_14(&VAR_1->irq_lock);

  VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3);
  if (VAR_5)
   FUNC_0("Restoring old state failed with %i\n", VAR_5);

  FUNC_8(VAR_1);
 }

 FUNC_3(VAR_4);
unlock:
 FUNC_5(VAR_3);
 FUNC_4(VAR_3);
 FUNC_12(&VAR_2->mode_config.mutex);

 FUNC_2(VAR_0, &VAR_1->gt.reset.flags);
}
