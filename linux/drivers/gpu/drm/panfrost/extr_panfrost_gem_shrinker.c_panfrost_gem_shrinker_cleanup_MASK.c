
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_deferred; } ;
struct panfrost_device {TYPE_1__ shrinker; } ;
struct drm_device {struct panfrost_device* dev_private; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct drm_device *VAR_0)
{
 struct panfrost_device *VAR_1 = VAR_0->dev_private;

 if (VAR_1->shrinker.nr_deferred) {
  FUNC_0(&VAR_1->shrinker);
 }
}
