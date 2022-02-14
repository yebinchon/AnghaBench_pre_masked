
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int changed; int flags; int kobj; int sysfs_action; int sysfs_state; int gendisk; int array_sectors; int sync_thread; int thread; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (struct mddev*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct mddev*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int *,char*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct mddev *VAR_2)
{
 int VAR_3;

 FUNC_11(VAR_1, &VAR_2->flags);
 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3) {
  FUNC_4(VAR_2);
  goto out;
 }

 if (FUNC_9(VAR_2))
  FUNC_3(VAR_2);


 FUNC_7(VAR_2);

 FUNC_8(VAR_2->thread);
 FUNC_8(VAR_2->sync_thread);

 FUNC_12(VAR_2->gendisk, VAR_2->array_sectors);
 FUNC_10(VAR_2->gendisk);
 FUNC_0(VAR_1, &VAR_2->flags);
 VAR_2->changed = 1;
 FUNC_2(&FUNC_1(VAR_2->gendisk)->kobj, VAR_0);
 FUNC_14(VAR_2->sysfs_state);
 FUNC_14(VAR_2->sysfs_action);
 FUNC_13(&VAR_2->kobj, ((void*)0), "degraded");
out:
 FUNC_0(VAR_1, &VAR_2->flags);
 return VAR_3;
}
