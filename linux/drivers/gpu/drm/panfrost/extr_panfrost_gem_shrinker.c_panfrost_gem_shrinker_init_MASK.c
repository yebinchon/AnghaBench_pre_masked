
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seeks; int scan_objects; int count_objects; } ;
struct panfrost_device {TYPE_1__ shrinker; } ;
struct drm_device {struct panfrost_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct drm_device *VAR_3)
{
 struct panfrost_device *VAR_4 = VAR_3->dev_private;
 VAR_4->shrinker.count_objects = VAR_1;
 VAR_4->shrinker.scan_objects = VAR_2;
 VAR_4->shrinker.seeks = VAR_0;
 FUNC_0(FUNC_1(&VAR_4->shrinker));
}
