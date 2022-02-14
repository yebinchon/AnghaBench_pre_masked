
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sd; } ;
struct mddev {int sysfs_active; int sb_wait; int thread; int reconfig_mutex; int * sysfs_action; TYPE_2__ kobj; TYPE_1__* pers; struct attribute_group* to_remove; } ;
struct attribute_group {int dummy; } ;
struct TYPE_3__ {int * sync_request; } ;


 struct attribute_group VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,struct attribute_group*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mddev *VAR_2)
{
 if (VAR_2->to_remove) {
  struct attribute_group *VAR_3 = VAR_2->to_remove;
  VAR_2->to_remove = ((void*)0);
  VAR_2->sysfs_active = 1;
  FUNC_1(&VAR_2->reconfig_mutex);

  if (VAR_2->kobj.sd) {
   if (VAR_3 != &VAR_0)
    FUNC_5(&VAR_2->kobj, VAR_3);
   if (VAR_2->pers == ((void*)0) ||
       VAR_2->pers->sync_request == ((void*)0)) {
    FUNC_5(&VAR_2->kobj, &VAR_0);
    if (VAR_2->sysfs_action)
     FUNC_4(VAR_2->sysfs_action);
    VAR_2->sysfs_action = ((void*)0);
   }
  }
  VAR_2->sysfs_active = 0;
 } else
  FUNC_1(&VAR_2->reconfig_mutex);




 FUNC_2(&VAR_1);
 FUNC_0(VAR_2->thread);
 FUNC_6(&VAR_2->sb_wait);
 FUNC_3(&VAR_1);
}
