
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_16__ {unsigned short block_size; } ;
struct TYPE_17__ {TYPE_1__ data; } ;
struct rsxx_cardinfo {scalar_t__ major; int disk_id; TYPE_4__* queue; TYPE_14__* gendisk; TYPE_2__ config; scalar_t__ config_valid; int dev_lock; } ;
struct TYPE_18__ {int discard_granularity; int discard_alignment; } ;
struct TYPE_19__ {struct rsxx_cardinfo* queuedata; TYPE_3__ limits; } ;
struct TYPE_15__ {scalar_t__ major; TYPE_4__* queue; struct rsxx_cardinfo* private_data; int * fops; scalar_t__ first_minor; int disk_name; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_14__* FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,unsigned short) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,unsigned short) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int ,char*) ;
 int VAR_9 ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (struct rsxx_cardinfo*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (int ,int,char*,int) ;
 int FUNC_17 (scalar_t__,int ) ;

int FUNC_18(struct rsxx_cardinfo *VAR_12)
{
 unsigned short VAR_13;

 FUNC_13(&VAR_12->dev_lock);

 if (!VAR_9)
  return 0;

 VAR_12->major = FUNC_14(0, VAR_0);
 if (VAR_12->major < 0) {
  FUNC_12(FUNC_0(VAR_12), "Failed to get major number\n");
  return -VAR_1;
 }

 VAR_12->queue = FUNC_2(VAR_2);
 if (!VAR_12->queue) {
  FUNC_12(FUNC_0(VAR_12), "Failed queue alloc\n");
  FUNC_17(VAR_12->major, VAR_0);
  return -VAR_1;
 }

 VAR_12->gendisk = FUNC_1(VAR_8);
 if (!VAR_12->gendisk) {
  FUNC_12(FUNC_0(VAR_12), "Failed disk alloc\n");
  FUNC_3(VAR_12->queue);
  FUNC_17(VAR_12->major, VAR_0);
  return -VAR_1;
 }

 if (VAR_12->config_valid) {
  VAR_13 = VAR_12->config.data.block_size;
  FUNC_4(VAR_12->queue, VAR_13 - 1);
  FUNC_7(VAR_12->queue, VAR_13);
 }

 FUNC_8(VAR_12->queue, VAR_11);
 FUNC_10(VAR_12->queue, VAR_7);
 FUNC_11(VAR_12->queue, VAR_6);

 FUNC_6(VAR_5, VAR_12->queue);
 FUNC_5(VAR_3, VAR_12->queue);
 if (FUNC_15(VAR_12)) {
  FUNC_6(VAR_4, VAR_12->queue);
  FUNC_9(VAR_12->queue,
      VAR_6 >> 9);
  VAR_12->queue->limits.discard_granularity = VAR_6;
  VAR_12->queue->limits.discard_alignment = VAR_6;
 }

 VAR_12->queue->queuedata = VAR_12;

 FUNC_16(VAR_12->gendisk->disk_name, sizeof(VAR_12->gendisk->disk_name),
   "rsxx%d", VAR_12->disk_id);
 VAR_12->gendisk->major = VAR_12->major;
 VAR_12->gendisk->first_minor = 0;
 VAR_12->gendisk->fops = &VAR_10;
 VAR_12->gendisk->private_data = VAR_12;
 VAR_12->gendisk->queue = VAR_12->queue;

 return 0;
}
