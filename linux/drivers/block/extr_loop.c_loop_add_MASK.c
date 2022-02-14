
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int nr_hw_queues; int queue_depth; int cmd_size; struct loop_device* driver_data; int flags; int numa_node; int * ops; } ;
struct loop_device {int lo_number; TYPE_4__ tag_set; TYPE_1__* lo_queue; int lo_lock; int lo_refcnt; struct gendisk* lo_disk; int lo_state; } ;
struct loop_cmd {int dummy; } ;
struct gendisk {int first_minor; int disk_name; TYPE_1__* queue; struct loop_device* private_data; int * fops; int major; int flags; } ;
struct TYPE_10__ {struct loop_device* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_11 ;
 int FUNC_2 (struct gendisk*) ;
 struct gendisk* FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_1__* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int *,struct loop_device*,int,int,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct loop_device*) ;
 struct loop_device* FUNC_14 (int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,char*,int) ;

__attribute__((used)) static int FUNC_17(struct loop_device **VAR_16, int VAR_17)
{
 struct loop_device *VAR_18;
 struct gendisk *VAR_19;
 int VAR_20;

 VAR_20 = -VAR_3;
 VAR_18 = FUNC_14(sizeof(*VAR_18), VAR_7);
 if (!VAR_18)
  goto out;

 VAR_18->lo_state = VAR_9;


 if (VAR_17 >= 0) {
  VAR_20 = FUNC_11(&VAR_13, VAR_18, VAR_17, VAR_17 + 1, VAR_7);
  if (VAR_20 == -VAR_4)
   VAR_20 = -VAR_2;
 } else {
  VAR_20 = FUNC_11(&VAR_13, VAR_18, 0, 0, VAR_7);
 }
 if (VAR_20 < 0)
  goto out_free_dev;
 VAR_17 = VAR_20;

 VAR_20 = -VAR_3;
 VAR_18->tag_set.ops = &VAR_14;
 VAR_18->tag_set.nr_hw_queues = 1;
 VAR_18->tag_set.queue_depth = 128;
 VAR_18->tag_set.numa_node = VAR_10;
 VAR_18->tag_set.cmd_size = sizeof(struct loop_cmd);
 VAR_18->tag_set.flags = VAR_1;
 VAR_18->tag_set.driver_data = VAR_18;

 VAR_20 = FUNC_6(&VAR_18->tag_set);
 if (VAR_20)
  goto out_free_idr;

 VAR_18->lo_queue = FUNC_8(&VAR_18->tag_set);
 if (FUNC_0(VAR_18->lo_queue)) {
  VAR_20 = FUNC_1(VAR_18->lo_queue);
  goto out_cleanup_tags;
 }
 VAR_18->lo_queue->queuedata = VAR_18;

 FUNC_10(VAR_18->lo_queue, VAR_0);







 FUNC_9(VAR_11, VAR_18->lo_queue);

 VAR_20 = -VAR_3;
 VAR_19 = VAR_18->lo_disk = FUNC_3(1 << VAR_15);
 if (!VAR_19)
  goto out_free_queue;
 if (!VAR_15)
  VAR_19->flags |= VAR_6;
 VAR_19->flags |= VAR_5;
 FUNC_4(&VAR_18->lo_refcnt, 0);
 VAR_18->lo_number = VAR_17;
 FUNC_15(&VAR_18->lo_lock);
 VAR_19->major = VAR_8;
 VAR_19->first_minor = VAR_17 << VAR_15;
 VAR_19->fops = &VAR_12;
 VAR_19->private_data = VAR_18;
 VAR_19->queue = VAR_18->lo_queue;
 FUNC_16(VAR_19->disk_name, "loop%d", VAR_17);
 FUNC_2(VAR_19);
 *VAR_16 = VAR_18;
 return VAR_18->lo_number;

out_free_queue:
 FUNC_5(VAR_18->lo_queue);
out_cleanup_tags:
 FUNC_7(&VAR_18->tag_set);
out_free_idr:
 FUNC_12(&VAR_13, VAR_17);
out_free_dev:
 FUNC_13(VAR_18);
out:
 return VAR_20;
}
