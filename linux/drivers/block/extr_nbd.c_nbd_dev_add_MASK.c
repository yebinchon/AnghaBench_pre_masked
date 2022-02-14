
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int max_sectors; scalar_t__ discard_alignment; scalar_t__ discard_granularity; } ;
struct request_queue {TYPE_1__ limits; } ;
struct TYPE_6__ {int nr_hw_queues; int queue_depth; int cmd_size; int flags; struct nbd_device* driver_data; int numa_node; int * ops; } ;
struct nbd_device {int index; TYPE_2__ tag_set; int list; int refs; int config_refs; int config_lock; int * destroy_complete; struct gendisk* disk; } ;
struct nbd_cmd {int dummy; } ;
struct gendisk {int first_minor; int disk_name; struct nbd_device* private_data; int * fops; int major; struct request_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct request_queue*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct gendisk*) ;
 struct gendisk* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 struct request_queue* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,struct request_queue*) ;
 int FUNC_9 (int ,struct request_queue*) ;
 int FUNC_10 (struct request_queue*,int ) ;
 int FUNC_11 (struct request_queue*,int) ;
 int FUNC_12 (struct request_queue*,int ) ;
 int FUNC_13 (struct request_queue*,int ) ;
 int FUNC_14 (int *,struct nbd_device*,int,int,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (struct nbd_device*) ;
 struct nbd_device* FUNC_17 (int,int ) ;
 int FUNC_18 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_19 (struct gendisk*) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int ,char*,int) ;

__attribute__((used)) static int FUNC_22(int VAR_17)
{
 struct nbd_device *VAR_18;
 struct gendisk *VAR_19;
 struct request_queue *VAR_20;
 int VAR_21 = -VAR_3;

 VAR_18 = FUNC_17(sizeof(struct nbd_device), VAR_5);
 if (!VAR_18)
  goto out;

 VAR_19 = FUNC_4(1 << VAR_16);
 if (!VAR_19)
  goto out_free_nbd;

 if (VAR_17 >= 0) {
  VAR_21 = FUNC_14(&VAR_13, VAR_18, VAR_17, VAR_17 + 1,
    VAR_5);
  if (VAR_21 == -VAR_4)
   VAR_21 = -VAR_2;
 } else {
  VAR_21 = FUNC_14(&VAR_13, VAR_18, 0, 0, VAR_5);
  if (VAR_21 >= 0)
   VAR_17 = VAR_21;
 }
 if (VAR_21 < 0)
  goto out_free_disk;

 VAR_18->index = VAR_17;
 VAR_18->disk = VAR_19;
 VAR_18->tag_set.ops = &VAR_14;
 VAR_18->tag_set.nr_hw_queues = 1;
 VAR_18->tag_set.queue_depth = 128;
 VAR_18->tag_set.numa_node = VAR_7;
 VAR_18->tag_set.cmd_size = sizeof(struct nbd_cmd);
 VAR_18->tag_set.flags = VAR_1 |
  VAR_0;
 VAR_18->tag_set.driver_data = VAR_18;
 VAR_18->destroy_complete = ((void*)0);

 VAR_21 = FUNC_5(&VAR_18->tag_set);
 if (VAR_21)
  goto out_free_idr;

 VAR_20 = FUNC_7(&VAR_18->tag_set);
 if (FUNC_1(VAR_20)) {
  VAR_21 = FUNC_2(VAR_20);
  goto out_free_tags;
 }
 VAR_19->queue = VAR_20;




 FUNC_9(VAR_9, VAR_19->queue);
 FUNC_8(VAR_8, VAR_19->queue);
 VAR_19->queue->limits.discard_granularity = 0;
 VAR_19->queue->limits.discard_alignment = 0;
 FUNC_10(VAR_19->queue, 0);
 FUNC_12(VAR_19->queue, VAR_10);
 FUNC_13(VAR_19->queue, VAR_11);
 FUNC_11(VAR_19->queue, 65536);
 VAR_19->queue->limits.max_sectors = 256;

 FUNC_18(&VAR_18->config_lock);
 FUNC_20(&VAR_18->config_refs, 0);
 FUNC_20(&VAR_18->refs, 1);
 FUNC_0(&VAR_18->list);
 VAR_19->major = VAR_6;
 VAR_19->first_minor = VAR_17 << VAR_16;
 VAR_19->fops = &VAR_12;
 VAR_19->private_data = VAR_18;
 FUNC_21(VAR_19->disk_name, "nbd%d", VAR_17);
 FUNC_3(VAR_19);
 VAR_15++;
 return VAR_17;

out_free_tags:
 FUNC_6(&VAR_18->tag_set);
out_free_idr:
 FUNC_15(&VAR_13, VAR_17);
out_free_disk:
 FUNC_19(VAR_19);
out_free_nbd:
 FUNC_16(VAR_18);
out:
 return VAR_21;
}
