
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_rps {int lock; int max_freq_softlimit; int min_freq_softlimit; int efficient_freq; int cur_freq; scalar_t__ enabled; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {int pm_rps_events; TYPE_1__ gt_pm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct drm_i915_private *VAR_2)
{
 struct intel_rps *VAR_3 = &VAR_2->gt_pm.rps;

 FUNC_8(&VAR_3->lock);
 if (VAR_3->enabled) {
  u8 VAR_4;

  if (VAR_2->pm_rps_events & VAR_1)
   FUNC_5(VAR_2);
  FUNC_1(VAR_0,
      FUNC_4(VAR_2, VAR_3->cur_freq));

  FUNC_3(VAR_2);




  VAR_4 = FUNC_7(VAR_3->cur_freq,
      VAR_3->efficient_freq);

  if (FUNC_6(VAR_2,
      FUNC_2(VAR_4,
     VAR_3->min_freq_softlimit,
     VAR_3->max_freq_softlimit)))
   FUNC_0("Failed to set idle frequency\n");
 }
 FUNC_9(&VAR_3->lock);
}
