
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_deferred; } ;
struct msm_drm_private {TYPE_1__ shrinker; int vmap_notifier; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_device *VAR_0)
{
 struct msm_drm_private *VAR_1 = VAR_0->dev_private;

 if (VAR_1->shrinker.nr_deferred) {
  FUNC_0(FUNC_2(&VAR_1->vmap_notifier));
  FUNC_1(&VAR_1->shrinker);
 }
}
