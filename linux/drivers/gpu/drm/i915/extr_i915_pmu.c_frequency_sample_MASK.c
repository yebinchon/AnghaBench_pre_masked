
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; struct drm_i915_private* i915; } ;
struct i915_pmu {int enable; int * sample; } ;
struct TYPE_3__ {int cur_freq; } ;
struct TYPE_4__ {TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_2__ gt_pm; struct i915_pmu pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*,int ) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_4 (struct intel_gt*) ;
 int FUNC_5 (struct intel_gt*) ;
 int FUNC_6 (struct intel_uncore*,int ) ;

__attribute__((used)) static void
FUNC_7(struct intel_gt *VAR_5, unsigned int VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_5->i915;
 struct intel_uncore *VAR_8 = VAR_5->uncore;
 struct i915_pmu *VAR_9 = &VAR_7->pmu;

 if (VAR_9->enable & FUNC_1(VAR_1)) {
  u32 VAR_10;

  VAR_10 = VAR_7->gt_pm.rps.cur_freq;
  if (FUNC_4(VAR_5)) {
   VAR_10 = FUNC_6(VAR_8, VAR_0);
   VAR_10 = FUNC_2(VAR_7, VAR_10);
   FUNC_5(VAR_5);
  }

  FUNC_0(&VAR_9->sample[VAR_3],
    FUNC_3(VAR_7, VAR_10),
    VAR_6 / 1000);
 }

 if (VAR_9->enable & FUNC_1(VAR_2)) {
  FUNC_0(&VAR_9->sample[VAR_4],
    FUNC_3(VAR_7, VAR_7->gt_pm.rps.cur_freq),
    VAR_6 / 1000);
 }
}
