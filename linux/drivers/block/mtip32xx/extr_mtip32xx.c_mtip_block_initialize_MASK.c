
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct mtip_cmd {int dummy; } ;
struct kobject {int dummy; } ;
struct TYPE_29__ {int nr_hw_queues; int reserved_tags; int cmd_size; int timeout; struct driver_data* driver_data; int flags; int numa_node; int queue_depth; int * ops; } ;
struct driver_data {unsigned int index; TYPE_3__* disk; TYPE_5__ tags; TYPE_2__* queue; int * bdev; TYPE_2__* mtip_svc_handler; TYPE_1__* pdev; int numa_node; int dd_flag; int major; } ;
typedef int sector_t ;
struct TYPE_30__ {int kobj; } ;
struct TYPE_28__ {unsigned int first_minor; unsigned int minors; TYPE_2__* queue; struct driver_data* private_data; int * fops; int major; int disk_name; } ;
struct TYPE_27__ {struct driver_data* queuedata; } ;
struct TYPE_26__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__* FUNC_1 (unsigned int,int ) ;
 int * FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_2__* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int *,TYPE_3__*,int *) ;
 TYPE_7__* FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,unsigned int) ;
 struct kobject* FUNC_23 (int *) ;
 int FUNC_24 (struct kobject*) ;
 TYPE_2__* FUNC_25 (int ,struct driver_data*,int ,char*,unsigned int) ;
 int FUNC_26 (TYPE_5__*,int ,int) ;
 int VAR_15 ;
 int FUNC_27 (struct driver_data*) ;
 int FUNC_28 (struct driver_data*) ;
 int FUNC_29 (struct driver_data*) ;
 int FUNC_30 (struct driver_data*,int *) ;
 int FUNC_31 (struct driver_data*) ;
 scalar_t__ FUNC_32 (struct driver_data*) ;
 int FUNC_33 (struct driver_data*,struct kobject*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_34 (TYPE_3__*) ;
 int FUNC_35 (char*,unsigned int,int ,int ) ;
 int VAR_18 ;
 int FUNC_36 (int ,int *) ;
 int FUNC_37 (TYPE_3__*,int ) ;
 int FUNC_38 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_39(struct driver_data *VAR_19)
{
 int VAR_20 = 0, VAR_21 = 0;
 sector_t VAR_22;
 unsigned int VAR_23 = 0;
 struct kobject *VAR_24;

 if (VAR_19->disk)
  goto skip_create_disk;

 if (FUNC_32(VAR_19)) {
  VAR_20 = -VAR_3;
  goto protocol_init_error;
 }

 VAR_19->disk = FUNC_1(VAR_10, VAR_19->numa_node);
 if (VAR_19->disk == ((void*)0)) {
  FUNC_16(&VAR_19->pdev->dev,
   "Unable to allocate gendisk structure\n");
  VAR_20 = -VAR_3;
  goto alloc_disk_error;
 }

 VAR_20 = FUNC_21(&VAR_18, VAR_6);
 if (VAR_20 < 0)
  goto ida_get_error;
 VAR_23 = VAR_20;

 VAR_20 = FUNC_35("rssd",
    VAR_23,
    VAR_19->disk->disk_name,
    VAR_1);
 if (VAR_20)
  goto disk_index_error;

 VAR_19->disk->major = VAR_19->major;
 VAR_19->disk->first_minor = VAR_23 * VAR_10;
 VAR_19->disk->minors = VAR_10;
 VAR_19->disk->fops = &VAR_15;
 VAR_19->disk->private_data = VAR_19;
 VAR_19->index = VAR_23;

 FUNC_28(VAR_19);

 FUNC_26(&VAR_19->tags, 0, sizeof(VAR_19->tags));
 VAR_19->tags.ops = &VAR_16;
 VAR_19->tags.nr_hw_queues = 1;
 VAR_19->tags.queue_depth = VAR_9;
 VAR_19->tags.reserved_tags = 1;
 VAR_19->tags.cmd_size = sizeof(struct mtip_cmd);
 VAR_19->tags.numa_node = VAR_19->numa_node;
 VAR_19->tags.flags = VAR_0;
 VAR_19->tags.driver_data = VAR_19;
 VAR_19->tags.timeout = VAR_12;

 VAR_20 = FUNC_5(&VAR_19->tags);
 if (VAR_20) {
  FUNC_16(&VAR_19->pdev->dev,
   "Unable to allocate request queue\n");
  goto block_queue_alloc_tag_error;
 }


 VAR_19->queue = FUNC_7(&VAR_19->tags);
 if (FUNC_0(VAR_19->queue)) {
  FUNC_16(&VAR_19->pdev->dev,
   "Unable to allocate request queue\n");
  VAR_20 = -VAR_5;
  goto block_queue_alloc_init_error;
 }

 VAR_19->disk->queue = VAR_19->queue;
 VAR_19->queue->queuedata = VAR_19;

skip_create_disk:

 VAR_21 = FUNC_31(VAR_19);
 if (VAR_21 < 0) {
  FUNC_16(&VAR_19->pdev->dev,
   "Protocol layer initialization failed\n");
  VAR_20 = -VAR_3;
  goto init_hw_cmds_error;
 }





 if (VAR_21 == VAR_8)
  goto start_service_thread;


 FUNC_9(VAR_14, VAR_19->queue);
 FUNC_8(VAR_13, VAR_19->queue);
 FUNC_13(VAR_19->queue, VAR_11);
 FUNC_14(VAR_19->queue, 4096);
 FUNC_11(VAR_19->queue, 0xffff);
 FUNC_12(VAR_19->queue, 0x400000);
 FUNC_20(&VAR_19->pdev->dev, 0x400000);
 FUNC_10(VAR_19->queue, 4096);


 if (!(FUNC_30(VAR_19, &VAR_22))) {
  FUNC_17(&VAR_19->pdev->dev,
   "Could not read drive capacity\n");
  VAR_20 = -VAR_4;
  goto read_capacity_error;
 }
 FUNC_37(VAR_19->disk, VAR_22);


 FUNC_18(&VAR_19->pdev->dev, VAR_19->disk, ((void*)0));

 VAR_19->bdev = FUNC_2(VAR_19->disk, 0);




 VAR_24 = FUNC_23(&FUNC_19(VAR_19->disk)->kobj);
 if (VAR_24) {
  FUNC_33(VAR_19, VAR_24);
  FUNC_24(VAR_24);
 }

 if (VAR_19->mtip_svc_handler) {
  FUNC_36(VAR_7, &VAR_19->dd_flag);
  return VAR_20;
 }

start_service_thread:
 VAR_19->mtip_svc_handler = FUNC_25(VAR_17,
      VAR_19, VAR_19->numa_node,
      "mtip_svc_thd_%02d", VAR_23);

 if (FUNC_0(VAR_19->mtip_svc_handler)) {
  FUNC_16(&VAR_19->pdev->dev, "service thread failed to start\n");
  VAR_19->mtip_svc_handler = ((void*)0);
  VAR_20 = -VAR_2;
  goto kthread_run_error;
 }
 FUNC_38(VAR_19->mtip_svc_handler);
 if (VAR_21 == VAR_8)
  VAR_20 = VAR_21;

 return VAR_20;

kthread_run_error:
 FUNC_3(VAR_19->bdev);
 VAR_19->bdev = ((void*)0);


 FUNC_15(VAR_19->disk);

read_capacity_error:
init_hw_cmds_error:
 FUNC_4(VAR_19->queue);
block_queue_alloc_init_error:
 FUNC_6(&VAR_19->tags);
block_queue_alloc_tag_error:
 FUNC_27(VAR_19);
disk_index_error:
 FUNC_22(&VAR_18, VAR_23);

ida_get_error:
 FUNC_34(VAR_19->disk);

alloc_disk_error:
 FUNC_29(VAR_19);

protocol_init_error:
 return VAR_20;
}
