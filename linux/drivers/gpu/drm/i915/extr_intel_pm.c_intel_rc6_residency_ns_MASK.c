
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct intel_uncore {int lock; } ;
struct TYPE_3__ {scalar_t__* cur_residency; scalar_t__* prev_hw_residency; } ;
struct TYPE_4__ {TYPE_1__ rc6; } ;
struct drm_i915_private {int czclk_freq; TYPE_2__ gt_pm; struct intel_uncore uncore; } ;
typedef int i915_reg_t ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int const) ;
 unsigned int FUNC_8 (struct intel_uncore*,int const,int ) ;
 int FUNC_9 (struct intel_uncore*,unsigned int) ;
 int FUNC_10 (struct intel_uncore*,unsigned int) ;
 scalar_t__ FUNC_11 (struct intel_uncore*,int const) ;
 scalar_t__ FUNC_12 (scalar_t__,int,int) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (struct drm_i915_private*,int const) ;

u64 FUNC_16(struct drm_i915_private *VAR_2,
      const i915_reg_t VAR_3)
{
 struct intel_uncore *VAR_4 = &VAR_2->uncore;
 u64 VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;
 u32 VAR_11, VAR_12;

 if (!FUNC_2(VAR_2))
  return 0;
 VAR_10 = (FUNC_7(VAR_3) -
      FUNC_7(VAR_1)) / sizeof(u32);
 if (FUNC_6(VAR_10 >= FUNC_0(VAR_2->gt_pm.rc6.cur_residency)))
  return 0;

 VAR_8 = FUNC_8(VAR_4, VAR_3, VAR_0);

 FUNC_13(&VAR_4->lock, VAR_9);
 FUNC_9(VAR_4, VAR_8);


 if (FUNC_5(VAR_2) || FUNC_3(VAR_2)) {
  VAR_11 = 1000000;
  VAR_12 = VAR_2->czclk_freq;
  VAR_7 = FUNC_1(40);
  VAR_5 = FUNC_15(VAR_2, VAR_3);
 } else {

  if (FUNC_4(VAR_2)) {
   VAR_11 = 10000;
   VAR_12 = 12;
  } else {
   VAR_11 = 1280;
   VAR_12 = 1;
  }

  VAR_7 = FUNC_1(32);
  VAR_5 = FUNC_11(VAR_4, VAR_3);
 }







 VAR_6 = VAR_2->gt_pm.rc6.prev_hw_residency[VAR_10];
 VAR_2->gt_pm.rc6.prev_hw_residency[VAR_10] = VAR_5;


 if (VAR_5 >= VAR_6)
  VAR_5 -= VAR_6;
 else
  VAR_5 += VAR_7 - VAR_6;


 VAR_5 += VAR_2->gt_pm.rc6.cur_residency[VAR_10];
 VAR_2->gt_pm.rc6.cur_residency[VAR_10] = VAR_5;

 FUNC_10(VAR_4, VAR_8);
 FUNC_14(&VAR_4->lock, VAR_9);

 return FUNC_12(VAR_5, VAR_11, VAR_12);
}
