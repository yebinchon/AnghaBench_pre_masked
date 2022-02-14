
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int notifier_call; } ;
struct TYPE_8__ {int notifier_call; } ;
struct TYPE_7__ {int batch; int seeks; int count_objects; int scan_objects; } ;
struct TYPE_5__ {TYPE_2__ vmap_notifier; TYPE_4__ oom_notifier; TYPE_3__ shrinker; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(struct drm_i915_private *VAR_5)
{
 VAR_5->mm.shrinker.scan_objects = VAR_3;
 VAR_5->mm.shrinker.count_objects = VAR_1;
 VAR_5->mm.shrinker.seeks = VAR_0;
 VAR_5->mm.shrinker.batch = 4096;
 FUNC_0(FUNC_2(&VAR_5->mm.shrinker));

 VAR_5->mm.oom_notifier.notifier_call = VAR_2;
 FUNC_0(FUNC_1(&VAR_5->mm.oom_notifier));

 VAR_5->mm.vmap_notifier.notifier_call = VAR_4;
 FUNC_0(FUNC_3(&VAR_5->mm.vmap_notifier));
}
