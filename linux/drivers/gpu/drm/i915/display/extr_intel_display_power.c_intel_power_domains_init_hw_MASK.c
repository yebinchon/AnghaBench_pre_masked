
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_power_domains {int initializing; int wakeref; int lock; } ;
struct drm_i915_private {struct i915_power_domains power_domains; } ;
struct TYPE_2__ {int disable_power_well; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*,int) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*,int) ;
 int FUNC_15 (struct drm_i915_private*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_16 (struct drm_i915_private*,int) ;
 int FUNC_17 (struct drm_i915_private*,int ) ;
 int FUNC_18 (struct drm_i915_private*,int) ;
 int FUNC_19 (struct drm_i915_private*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct drm_i915_private*,int) ;
 int FUNC_23 (struct drm_i915_private*) ;

void FUNC_24(struct drm_i915_private *VAR_2, bool VAR_3)
{
 struct i915_power_domains *VAR_4 = &VAR_2->power_domains;

 VAR_4->initializing = 1;

 if (FUNC_1(VAR_2) >= 11) {
  FUNC_16(VAR_2, VAR_3);
 } else if (FUNC_3(VAR_2)) {
  FUNC_14(VAR_2, VAR_3);
 } else if (FUNC_5(VAR_2)) {
  FUNC_22(VAR_2, VAR_3);
 } else if (FUNC_6(VAR_2)) {
  FUNC_12(VAR_2, VAR_3);
 } else if (FUNC_4(VAR_2)) {
  FUNC_20(&VAR_4->lock);
  FUNC_13(VAR_2);
  FUNC_21(&VAR_4->lock);
  FUNC_10(VAR_2);
 } else if (FUNC_9(VAR_2)) {
  FUNC_20(&VAR_4->lock);
  FUNC_23(VAR_2);
  FUNC_21(&VAR_4->lock);
  FUNC_11(VAR_2);
  FUNC_10(VAR_2);
 } else if (FUNC_2(VAR_2) || FUNC_7(VAR_2)) {
  FUNC_15(VAR_2);
  FUNC_18(VAR_2, !FUNC_0(VAR_2));
 } else if (FUNC_8(VAR_2)) {
  FUNC_18(VAR_2, !FUNC_0(VAR_2));
 }







 VAR_4->wakeref =
  FUNC_17(VAR_2, VAR_0);


 if (!VAR_1.disable_power_well)
  FUNC_17(VAR_2, VAR_0);
 FUNC_19(VAR_2);

 VAR_4->initializing = 0;
}
