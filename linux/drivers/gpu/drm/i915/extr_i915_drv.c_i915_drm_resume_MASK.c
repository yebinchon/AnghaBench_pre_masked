
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* hpd_irq_setup ) (struct drm_i915_private*) ;} ;
struct TYPE_3__ {int struct_mutex; } ;
struct drm_i915_private {int runtime_pm; int irq_lock; TYPE_2__ display; TYPE_1__ drm; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_device*,int ,int) ;
 int FUNC_15 (struct drm_i915_private*) ;
 int FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (struct drm_i915_private*) ;
 int FUNC_18 (struct drm_device*) ;
 int FUNC_19 (struct drm_i915_private*) ;
 int FUNC_20 (struct drm_i915_private*) ;
 int FUNC_21 (struct drm_i915_private*) ;
 int FUNC_22 (struct drm_i915_private*) ;
 int FUNC_23 (struct drm_i915_private*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_29 (struct drm_device*) ;

__attribute__((used)) static int FUNC_30(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_29(VAR_1);
 int VAR_3;

 FUNC_1(&VAR_2->runtime_pm);
 FUNC_23(VAR_2);

 FUNC_8(VAR_2);

 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3)
  FUNC_0("failed to re-enable GGTT\n");

 FUNC_24(&VAR_2->drm.struct_mutex);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2);
 FUNC_25(&VAR_2->drm.struct_mutex);

 FUNC_11(VAR_2);

 FUNC_10(VAR_2);
 FUNC_21(VAR_2);

 FUNC_17(VAR_2);
 FUNC_22(VAR_2);

 FUNC_3(VAR_1);

 FUNC_7(VAR_2);

 FUNC_18(VAR_1);
 FUNC_16(VAR_2);

 FUNC_26(&VAR_2->irq_lock);
 if (VAR_2->display.hpd_irq_setup)
  VAR_2->display.hpd_irq_setup(VAR_2);
 FUNC_27(&VAR_2->irq_lock);

 FUNC_13(VAR_2);

 FUNC_12(VAR_1);

 FUNC_2(VAR_1);







 FUNC_15(VAR_2);

 FUNC_19(VAR_2);

 FUNC_14(VAR_1, VAR_0, 0);

 FUNC_20(VAR_2);

 FUNC_4(&VAR_2->runtime_pm);

 return 0;
}
