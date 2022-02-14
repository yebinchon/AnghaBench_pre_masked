
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int cmd_size; int nr_hw_queues; int nr_maps; int queue_depth; int flags; int numa_node; int * ops; } ;
struct pd_unit {int drive; struct gendisk* gd; TYPE_1__ tag_set; int name; } ;
struct pd_req {int dummy; } ;
struct gendisk {int first_minor; TYPE_2__* queue; struct pd_unit* private_data; int events; int major; int * fops; int disk_name; } ;
struct TYPE_10__ {struct pd_unit* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct gendisk* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 struct pd_unit* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (struct pd_unit*,int ) ;
 int FUNC_9 (struct gendisk*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct pd_unit *VAR_12)
{
 struct gendisk *VAR_13;

 VAR_13 = FUNC_1(1 << VAR_5);
 if (!VAR_13)
  return;

 FUNC_10(VAR_13->disk_name, VAR_12->name);
 VAR_13->fops = &VAR_9;
 VAR_13->major = VAR_7;
 VAR_13->first_minor = (VAR_12 - VAR_8) << VAR_5;
 VAR_13->events = VAR_3;
 VAR_12->gd = VAR_13;
 VAR_13->private_data = VAR_12;

 FUNC_7(&VAR_12->tag_set, 0, sizeof(VAR_12->tag_set));
 VAR_12->tag_set.ops = &VAR_11;
 VAR_12->tag_set.cmd_size = sizeof(struct pd_req);
 VAR_12->tag_set.nr_hw_queues = 1;
 VAR_12->tag_set.nr_maps = 1;
 VAR_12->tag_set.queue_depth = 2;
 VAR_12->tag_set.numa_node = VAR_4;
 VAR_12->tag_set.flags = VAR_2 | VAR_1;

 if (FUNC_2(&VAR_12->tag_set))
  return;

 VAR_13->queue = FUNC_4(&VAR_12->tag_set);
 if (FUNC_0(VAR_13->queue)) {
  FUNC_3(&VAR_12->tag_set);
  VAR_13->queue = ((void*)0);
  return;
 }

 VAR_13->queue->queuedata = VAR_12;
 FUNC_6(VAR_13->queue, VAR_6);
 FUNC_5(VAR_13->queue, VAR_0);

 if (VAR_12->drive == -1) {
  for (VAR_12->drive = 0; VAR_12->drive <= 1; VAR_12->drive++)
   if (FUNC_8(VAR_12, VAR_10) == 0)
    return;
 } else if (FUNC_8(VAR_12, VAR_10) == 0)
  return;
 VAR_12->gd = ((void*)0);
 FUNC_9(VAR_13);
}
