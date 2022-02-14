
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int notifier_call; } ;
struct TYPE_4__ {int seeks; int scan_objects; int count_objects; } ;
struct msm_drm_private {TYPE_1__ vmap_notifier; TYPE_2__ shrinker; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct drm_device *VAR_4)
{
 struct msm_drm_private *VAR_5 = VAR_4->dev_private;
 VAR_5->shrinker.count_objects = VAR_1;
 VAR_5->shrinker.scan_objects = VAR_2;
 VAR_5->shrinker.seeks = VAR_0;
 FUNC_0(FUNC_1(&VAR_5->shrinker));

 VAR_5->vmap_notifier.notifier_call = VAR_3;
 FUNC_0(FUNC_2(&VAR_5->vmap_notifier));
}
