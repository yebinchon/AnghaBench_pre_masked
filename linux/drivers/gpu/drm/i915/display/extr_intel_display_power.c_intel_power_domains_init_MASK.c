
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_power_domains {int power_well_count; int async_put_work; int lock; } ;
struct TYPE_3__ {int allowed_dc_mask; } ;
struct drm_i915_private {TYPE_1__ csr; struct i915_power_domains power_domains; } ;
struct TYPE_4__ {int enable_dc; int disable_power_well; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (struct drm_i915_private*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct drm_i915_private*,int ) ;
 int FUNC_16 (struct i915_power_domains*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

int FUNC_17(struct drm_i915_private *VAR_15)
{
 struct i915_power_domains *VAR_16 = &VAR_15->power_domains;
 int VAR_17;

 VAR_8.disable_power_well =
  FUNC_15(VAR_15,
         VAR_8.disable_power_well);
 VAR_15->csr.allowed_dc_mask =
  FUNC_13(VAR_15, VAR_8.enable_dc);

 FUNC_0(VAR_0 > 64);

 FUNC_14(&VAR_16->lock);

 FUNC_1(&VAR_16->async_put_work,
     VAR_11);





 if (FUNC_8(VAR_15, 12)) {
  VAR_17 = FUNC_16(VAR_16, VAR_13);
 } else if (FUNC_8(VAR_15, 11)) {
  VAR_17 = FUNC_16(VAR_16, VAR_10);
 } else if (FUNC_4(VAR_15)) {
  VAR_17 = FUNC_16(VAR_16, VAR_4);







  if (!FUNC_6(VAR_15))
   VAR_16->power_well_count -= 2;
 } else if (FUNC_7(VAR_15)) {
  VAR_17 = FUNC_16(VAR_16, VAR_5);
 } else if (FUNC_3(VAR_15)) {
  VAR_17 = FUNC_16(VAR_16, VAR_2);
 } else if (FUNC_9(VAR_15)) {
  VAR_17 = FUNC_16(VAR_16, VAR_12);
 } else if (FUNC_5(VAR_15)) {
  VAR_17 = FUNC_16(VAR_16, VAR_3);
 } else if (FUNC_2(VAR_15)) {
  VAR_17 = FUNC_16(VAR_16, VAR_1);
 } else if (FUNC_10(VAR_15)) {
  VAR_17 = FUNC_16(VAR_16, VAR_6);
 } else if (FUNC_12(VAR_15)) {
  VAR_17 = FUNC_16(VAR_16, VAR_14);
 } else if (FUNC_11(VAR_15)) {
  VAR_17 = FUNC_16(VAR_16, VAR_7);
 } else {
  VAR_17 = FUNC_16(VAR_16, VAR_9);
 }

 return VAR_17;
}
