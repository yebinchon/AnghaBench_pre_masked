
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wm_mutex; } ;
struct TYPE_3__ {int lock; } ;
struct drm_i915_private {int gt; int wopcm; int runtime_pm; int hdcp_comp_mutex; int pps_mutex; TYPE_2__ wm; int av_mutex; int sb_qos; int sb_lock; int backlight_lock; TYPE_1__ gpu_error; int irq_lock; int uncore; int mmio_debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*) ;
 int FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (struct drm_i915_private*) ;
 int FUNC_18 (struct drm_i915_private*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,struct drm_i915_private*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct drm_i915_private*) ;
 int FUNC_27 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_28(struct drm_i915_private *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_2(VAR_3))
  return -VAR_0;

 FUNC_8(VAR_3);

 FUNC_21(&VAR_3->mmio_debug);
 FUNC_20(&VAR_3->uncore, VAR_3);

 FUNC_25(&VAR_3->irq_lock);
 FUNC_25(&VAR_3->gpu_error.lock);
 FUNC_23(&VAR_3->backlight_lock);

 FUNC_23(&VAR_3->sb_lock);
 FUNC_24(&VAR_3->sb_qos,
      VAR_1, VAR_2);

 FUNC_23(&VAR_3->av_mutex);
 FUNC_23(&VAR_3->wm.wm_mutex);
 FUNC_23(&VAR_3->pps_mutex);
 FUNC_23(&VAR_3->hdcp_comp_mutex);

 FUNC_3(VAR_3);
 FUNC_19(&VAR_3->runtime_pm);

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_26(VAR_3);
 if (VAR_4 < 0)
  goto err_workqueues;

 FUNC_22(&VAR_3->wopcm);

 FUNC_11(&VAR_3->gt, VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  goto err_gt;


 FUNC_6(VAR_3);

 FUNC_17(VAR_3);
 FUNC_15(VAR_3);
 VAR_4 = FUNC_18(VAR_3);
 if (VAR_4 < 0)
  goto err_gem;
 FUNC_16(VAR_3);
 FUNC_14(VAR_3);
 FUNC_13(VAR_3);
 FUNC_12(VAR_3);
 FUNC_9(VAR_3);

 FUNC_7(VAR_3);

 return 0;

err_gem:
 FUNC_0(VAR_3);
err_gt:
 FUNC_10(&VAR_3->gt);
 FUNC_27(VAR_3);
err_workqueues:
 FUNC_4(VAR_3);
 return VAR_4;
}
