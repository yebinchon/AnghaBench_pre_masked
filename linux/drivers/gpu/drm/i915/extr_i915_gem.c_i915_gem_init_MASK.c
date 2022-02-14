
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int struct_mutex; } ;
struct TYPE_8__ {int uc; } ;
struct drm_i915_private {TYPE_1__ drm; TYPE_3__ gt; int uncore; int wopcm; } ;
struct TYPE_7__ {int page_sizes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*,int ) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*) ;
 int FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (struct drm_i915_private*) ;
 int FUNC_18 (struct drm_i915_private*,int) ;
 int FUNC_19 (struct drm_i915_private*,char*) ;
 int FUNC_20 (struct drm_i915_private*) ;
 int FUNC_21 (struct drm_i915_private*) ;
 int FUNC_22 (struct drm_i915_private*) ;
 int FUNC_23 (struct drm_i915_private*) ;
 int FUNC_24 (struct drm_i915_private*) ;
 int FUNC_25 (TYPE_3__*) ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (TYPE_3__*) ;
 int FUNC_28 (struct drm_i915_private*) ;
 int FUNC_29 (struct drm_i915_private*) ;
 int FUNC_30 (struct drm_i915_private*) ;
 int FUNC_31 (struct drm_i915_private*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *,int ) ;
 int FUNC_38 (int *,int ) ;
 scalar_t__ FUNC_39 (struct drm_i915_private*) ;
 int FUNC_40 (struct drm_i915_private*) ;
 int FUNC_41 (int *) ;
 TYPE_2__* FUNC_42 (struct drm_i915_private*) ;
 int FUNC_43 (int *) ;
 int FUNC_44 (int *) ;

int FUNC_45(struct drm_i915_private *VAR_6)
{
 int VAR_7;


 if (FUNC_39(VAR_6) && !FUNC_40(VAR_6))
  FUNC_42(VAR_6)->page_sizes =
   VAR_3;

 FUNC_31(VAR_6);

 VAR_7 = FUNC_11(VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_33(&VAR_6->gt.uc);
 FUNC_41(&VAR_6->wopcm);







 FUNC_43(&VAR_6->drm.struct_mutex);
 FUNC_37(&VAR_6->uncore, VAR_2);

 VAR_7 = FUNC_17(VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_7 == -VAR_0);
  goto err_unlock;
 }

 VAR_7 = FUNC_10(VAR_6,
        FUNC_1(VAR_6, 2) ? VAR_5 : VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_7 == -VAR_0);
  goto err_ggtt;
 }

 VAR_7 = FUNC_23(VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_7 == -VAR_0);
  goto err_unlock;
 }

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_7 == -VAR_0);
  goto err_scratch;
 }

 VAR_7 = FUNC_22(VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_7 == -VAR_0);
  goto err_context;
 }

 FUNC_29(VAR_6);

 FUNC_36(&VAR_6->gt.uc);

 VAR_7 = FUNC_9(VAR_6);
 if (VAR_7)
  goto err_uc_init;


 VAR_7 = FUNC_26(&VAR_6->gt);
 if (VAR_7)
  goto err_init_hw;
 FUNC_28(VAR_6);

 VAR_7 = FUNC_24(VAR_6);
 if (VAR_7)
  goto err_gt;

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7)
  goto err_gt;

 VAR_7 = FUNC_18(VAR_6, -VAR_1);
 if (VAR_7)
  goto err_gt;

 VAR_7 = FUNC_18(VAR_6, -VAR_0);
 if (VAR_7)
  goto err_gt;

 FUNC_38(&VAR_6->uncore, VAR_2);
 FUNC_44(&VAR_6->drm.struct_mutex);

 return 0;







err_gt:
 FUNC_44(&VAR_6->drm.struct_mutex);

 FUNC_27(&VAR_6->gt);
 FUNC_14(VAR_6);
 FUNC_15(VAR_6);

 FUNC_7(VAR_6);

 FUNC_43(&VAR_6->drm.struct_mutex);
err_init_hw:
 FUNC_35(&VAR_6->gt.uc);
err_uc_init:
 if (VAR_7 != -VAR_0) {
  FUNC_34(&VAR_6->gt.uc);
  FUNC_20(VAR_6);
  FUNC_21(VAR_6);
 }
err_context:
 if (VAR_7 != -VAR_0)
  FUNC_4(VAR_6);
err_scratch:
 FUNC_8(VAR_6);
err_ggtt:
err_unlock:
 FUNC_38(&VAR_6->uncore, VAR_2);
 FUNC_44(&VAR_6->drm.struct_mutex);

 if (VAR_7 != -VAR_0) {
  FUNC_32(&VAR_6->gt.uc);
  FUNC_3(VAR_6);
  FUNC_30(VAR_6);
 }

 if (VAR_7 == -VAR_0) {
  FUNC_43(&VAR_6->drm.struct_mutex);






  if (!FUNC_25(&VAR_6->gt)) {
   FUNC_19(VAR_6,
      "Failed to initialize GPU, declaring it wedged!\n");
   FUNC_27(&VAR_6->gt);
  }


  VAR_7 = FUNC_16(VAR_6);
  FUNC_13(VAR_6);
  FUNC_12(VAR_6);
  FUNC_28(VAR_6);

  FUNC_44(&VAR_6->drm.struct_mutex);
 }

 FUNC_6(VAR_6);
 return VAR_7;
}
