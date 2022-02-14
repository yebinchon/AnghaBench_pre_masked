
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx_corrupted; int ctx_corrupted_wakeref; } ;
struct TYPE_4__ {TYPE_1__ rc6; } ;
struct drm_i915_private {TYPE_2__ gt_pm; int runtime_pm; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0)
{
 if (VAR_0->gt_pm.rc6.ctx_corrupted) {
  FUNC_0(&VAR_0->runtime_pm,
         VAR_0->gt_pm.rc6.ctx_corrupted_wakeref);
  VAR_0->gt_pm.rc6.ctx_corrupted = 0;
 }
}
