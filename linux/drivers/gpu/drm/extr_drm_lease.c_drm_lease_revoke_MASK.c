
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_master {TYPE_2__* dev; } ;
struct TYPE_3__ {int idr_mutex; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_master*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_master *VAR_0)
{
 FUNC_1(&VAR_0->dev->mode_config.idr_mutex);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->dev->mode_config.idr_mutex);
}
