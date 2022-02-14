
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int sysfs_dir_lock; int sysfs_lock; scalar_t__ elevator; int kobj; } ;
struct gendisk {struct request_queue* queue; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct request_queue*) ;
 int FUNC_2 (int ,struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (struct gendisk*) ;
 int FUNC_6 (struct request_queue*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct request_queue*) ;

void FUNC_13(struct gendisk *VAR_2)
{
 struct request_queue *VAR_3 = VAR_2->queue;

 if (FUNC_0(!VAR_3))
  return;


 if (!FUNC_3(VAR_3))
  return;






 FUNC_10(&VAR_3->sysfs_lock);
 FUNC_2(VAR_1, VAR_3);
 FUNC_11(&VAR_3->sysfs_lock);

 FUNC_10(&VAR_3->sysfs_dir_lock);




 if (FUNC_12(VAR_3))
  FUNC_1(FUNC_5(VAR_2), VAR_3);

 FUNC_9(&VAR_3->kobj, VAR_0);
 FUNC_7(&VAR_3->kobj);
 FUNC_4(FUNC_5(VAR_2));

 FUNC_10(&VAR_3->sysfs_lock);
 if (VAR_3->elevator)
  FUNC_6(VAR_3);
 FUNC_11(&VAR_3->sysfs_lock);
 FUNC_11(&VAR_3->sysfs_dir_lock);

 FUNC_8(&FUNC_5(VAR_2)->kobj);
}
