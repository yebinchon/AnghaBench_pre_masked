
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int notifier_call; } ;
struct TYPE_5__ {TYPE_3__ pm_notifier; int retire_work; int idle_work; } ;
struct TYPE_4__ {int pm_notifications; } ;
struct drm_i915_private {TYPE_2__ gem; TYPE_1__ gt; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(struct drm_i915_private *VAR_3)
{
 FUNC_1(&VAR_3->gem.idle_work, VAR_0);
 FUNC_0(&VAR_3->gem.retire_work, VAR_2);

 VAR_3->gem.pm_notifier.notifier_call = VAR_1;
 FUNC_2(&VAR_3->gt.pm_notifications,
      &VAR_3->gem.pm_notifier);
}
