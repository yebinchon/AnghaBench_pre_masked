
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct elevator_queue {int kobj; int sysfs_lock; TYPE_2__* type; } ;
struct TYPE_3__ {scalar_t__ exit_sched; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct request_queue*,struct elevator_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct request_queue *VAR_0, struct elevator_queue *VAR_1)
{
 FUNC_2(&VAR_1->sysfs_lock);
 if (VAR_1->type->ops.exit_sched)
  FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_1->sysfs_lock);

 FUNC_1(&VAR_1->kobj);
}
