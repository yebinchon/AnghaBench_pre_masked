
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int suspended; int wakeref_count; } ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_7__ {int num_waiters; TYPE_2__ power; int lock; } ;
struct TYPE_8__ {TYPE_3__ rps; } ;
struct drm_i915_private {TYPE_1__ runtime_pm; TYPE_4__ gt_pm; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_i915_private *VAR_0)
{
 FUNC_1(&VAR_0->gt_pm.rps.lock);
 FUNC_1(&VAR_0->gt_pm.rps.power.mutex);

 FUNC_0(&VAR_0->gt_pm.rps.num_waiters, 0);

 VAR_0->runtime_pm.suspended = 0;
 FUNC_0(&VAR_0->runtime_pm.wakeref_count, 0);
}
