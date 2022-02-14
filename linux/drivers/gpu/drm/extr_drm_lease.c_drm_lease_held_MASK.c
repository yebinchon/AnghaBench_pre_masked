
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_master {TYPE_2__* dev; int lessor; } ;
struct drm_file {struct drm_master* master; } ;
struct TYPE_3__ {int idr_mutex; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_master*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct drm_file *VAR_0, int VAR_1)
{
 struct drm_master *VAR_2;
 bool VAR_3;

 if (!VAR_0 || !VAR_0->master || !VAR_0->master->lessor)
  return 1;

 VAR_2 = VAR_0->master;
 FUNC_1(&VAR_2->dev->mode_config.idr_mutex);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->dev->mode_config.idr_mutex);
 return VAR_3;
}
