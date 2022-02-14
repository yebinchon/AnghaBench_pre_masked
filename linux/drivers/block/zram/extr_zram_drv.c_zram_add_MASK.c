
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zram {TYPE_3__* disk; int compressor; int wb_limit_lock; int init_lock; } ;
struct TYPE_6__ {scalar_t__ discard_granularity; } ;
struct request_queue {TYPE_2__* backing_dev_info; TYPE_1__ limits; struct zram* queuedata; } ;
struct TYPE_8__ {int first_minor; int disk_name; struct request_queue* queue; struct zram* private_data; int * fops; int major; } ;
struct TYPE_7__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__* FUNC_0 (int) ;
 struct request_queue* FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (int ,struct request_queue*) ;
 int FUNC_4 (int ,struct request_queue*) ;
 int FUNC_5 (struct request_queue*,scalar_t__) ;
 int FUNC_6 (struct request_queue*,scalar_t__) ;
 int FUNC_7 (struct request_queue*,scalar_t__) ;
 int FUNC_8 (struct request_queue*,int ) ;
 int FUNC_9 (struct request_queue*,int ) ;
 int FUNC_10 (struct request_queue*,int ) ;
 int FUNC_11 (struct request_queue*,scalar_t__) ;
 int VAR_10 ;
 int FUNC_12 (int *,TYPE_3__*,int ) ;
 int FUNC_13 (int *,struct zram*,int ,int ,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct zram*) ;
 struct zram* FUNC_17 (int,int ) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 int FUNC_21 (int ,int,char*,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int ,int) ;
 int FUNC_24 (struct zram*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_25(void)
{
 struct zram *VAR_16;
 struct request_queue *VAR_17;
 int VAR_18, VAR_19;

 VAR_16 = FUNC_17(sizeof(struct zram), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_18 = FUNC_13(&VAR_13, VAR_16, 0, 0, VAR_3);
 if (VAR_18 < 0)
  goto out_free_dev;
 VAR_19 = VAR_18;

 FUNC_15(&VAR_16->init_lock);



 VAR_17 = FUNC_1(VAR_3);
 if (!VAR_17) {
  FUNC_18("Error allocating disk queue for device %d\n",
   VAR_19);
  VAR_18 = -VAR_2;
  goto out_free_idr;
 }

 FUNC_8(VAR_17, VAR_15);


 VAR_16->disk = FUNC_0(1);
 if (!VAR_16->disk) {
  FUNC_18("Error allocating disk structure for device %d\n",
   VAR_19);
  VAR_18 = -VAR_2;
  goto out_free_queue;
 }

 VAR_16->disk->major = VAR_14;
 VAR_16->disk->first_minor = VAR_19;
 VAR_16->disk->fops = &VAR_11;
 VAR_16->disk->queue = VAR_17;
 VAR_16->disk->queue->queuedata = VAR_16;
 VAR_16->disk->private_data = VAR_16;
 FUNC_21(VAR_16->disk->disk_name, 16, "zram%d", VAR_19);


 FUNC_20(VAR_16->disk, 0);

 FUNC_4(VAR_7, VAR_16->disk->queue);
 FUNC_3(VAR_5, VAR_16->disk->queue);





 FUNC_11(VAR_16->disk->queue, VAR_4);
 FUNC_7(VAR_16->disk->queue,
     VAR_9);
 FUNC_5(VAR_16->disk->queue, VAR_4);
 FUNC_6(VAR_16->disk->queue, VAR_4);
 VAR_16->disk->queue->limits.discard_granularity = VAR_4;
 FUNC_9(VAR_16->disk->queue, VAR_8);
 FUNC_4(VAR_6, VAR_16->disk->queue);
 if (VAR_9 == VAR_4)
  FUNC_10(VAR_16->disk->queue, VAR_8);

 VAR_16->disk->queue->backing_dev_info->capabilities |=
   (VAR_0 | VAR_1);
 FUNC_12(((void*)0), VAR_16->disk, VAR_12);

 FUNC_23(VAR_16->compressor, VAR_10, sizeof(VAR_16->compressor));

 FUNC_24(VAR_16);
 FUNC_19("Added device: %s\n", VAR_16->disk->disk_name);
 return VAR_19;

out_free_queue:
 FUNC_2(VAR_17);
out_free_idr:
 FUNC_14(&VAR_13, VAR_19);
out_free_dev:
 FUNC_16(VAR_16);
 return VAR_18;
}
