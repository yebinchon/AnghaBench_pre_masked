
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int sched_debugfs_dir; int debugfs_dir; TYPE_1__* elevator; } ;
struct elevator_type {int queue_debugfs_attrs; } ;
struct TYPE_2__ {struct elevator_type* type; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,struct request_queue*,int ) ;

void FUNC_2(struct request_queue *VAR_0)
{
 struct elevator_type *VAR_1 = VAR_0->elevator->type;





 if (!VAR_0->debugfs_dir)
  return;

 if (!VAR_1->queue_debugfs_attrs)
  return;

 VAR_0->sched_debugfs_dir = FUNC_0("sched", VAR_0->debugfs_dir);

 FUNC_1(VAR_0->sched_debugfs_dir, VAR_0, VAR_1->queue_debugfs_attrs);
}
