
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_rps {int max_freq_softlimit; int max_freq; int boost_freq; int idle_freq; int cur_freq; int min_freq; int min_freq_softlimit; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_4__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_3__ drm; TYPE_1__ gt_pm; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct drm_i915_private*,int ,int*,int *) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*) ;

void FUNC_16(struct drm_i915_private *VAR_1)
{
 struct intel_rps *VAR_2 = &VAR_1->gt_pm.rps;





 if (!FUNC_14(VAR_1)) {
  FUNC_2("RC6 disabled, disabling runtime PM support\n");
  FUNC_12(&VAR_1->drm.pdev->dev);
 }

 FUNC_11(VAR_1);


 if (FUNC_4(VAR_1))
  FUNC_9(VAR_1);
 else if (FUNC_8(VAR_1))
  FUNC_15(VAR_1);
 else if (FUNC_3(VAR_1) >= 6)
  FUNC_10(VAR_1);


 VAR_2->max_freq_softlimit = VAR_2->max_freq;
 VAR_2->min_freq_softlimit = VAR_2->min_freq;


 if (FUNC_5(VAR_1, 6) ||
     FUNC_7(VAR_1) || FUNC_6(VAR_1)) {
  u32 VAR_3 = 0;

  FUNC_13(VAR_1, VAR_0,
           &VAR_3, ((void*)0));
  if (VAR_3 & FUNC_0(31)) {
   FUNC_1("Overclocking supported, max: %dMHz, overclock: %dMHz\n",
      (VAR_2->max_freq & 0xff) * 50,
      (VAR_3 & 0xff) * 50);
   VAR_2->max_freq = VAR_3 & 0xff;
  }
 }


 VAR_2->boost_freq = VAR_2->max_freq;
 VAR_2->idle_freq = VAR_2->min_freq;
 VAR_2->cur_freq = VAR_2->idle_freq;
}
