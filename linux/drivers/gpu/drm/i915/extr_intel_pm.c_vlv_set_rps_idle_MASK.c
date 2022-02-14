
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_rps {scalar_t__ idle_freq; scalar_t__ cur_freq; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {int uncore; TYPE_1__ gt_pm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct drm_i915_private*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_1)
{
 struct intel_rps *VAR_2 = &VAR_1->gt_pm.rps;
 u32 VAR_3 = VAR_2->idle_freq;
 int VAR_4;

 if (VAR_2->cur_freq <= VAR_3)
  return;
 FUNC_1(&VAR_1->uncore, VAR_0);
 VAR_4 = FUNC_3(VAR_1, VAR_3);
 FUNC_2(&VAR_1->uncore, VAR_0);

 if (VAR_4)
  FUNC_0("Failed to set RPS for idle\n");
}
