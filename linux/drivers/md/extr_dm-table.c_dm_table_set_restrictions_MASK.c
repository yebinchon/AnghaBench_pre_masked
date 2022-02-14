
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct queue_limits {int max_sectors; scalar_t__ max_write_zeroes_sectors; scalar_t__ max_write_same_sectors; scalar_t__ discard_misaligned; scalar_t__ discard_alignment; scalar_t__ discard_granularity; scalar_t__ max_hw_discard_sectors; scalar_t__ max_discard_sectors; } ;
struct request_queue {TYPE_2__* backing_dev_info; struct queue_limits limits; } ;
struct dm_table {TYPE_1__* md; } ;
struct TYPE_4__ {int io_pages; int capabilities; } ;
struct TYPE_3__ {int disk; int dax_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (int ,struct request_queue*) ;
 scalar_t__ FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (struct dm_table*,int ) ;
 scalar_t__ FUNC_8 (struct dm_table*) ;
 scalar_t__ FUNC_9 (struct dm_table*,int ,int*) ;
 scalar_t__ FUNC_10 (struct dm_table*) ;
 int FUNC_11 (struct dm_table*) ;
 scalar_t__ FUNC_12 (struct dm_table*,unsigned long) ;
 scalar_t__ FUNC_13 (struct dm_table*) ;
 int FUNC_14 (struct dm_table*) ;
 int FUNC_15 (struct dm_table*) ;
 int FUNC_16 (struct dm_table*) ;
 int FUNC_17 (int ) ;

void FUNC_18(struct dm_table *VAR_14, struct request_queue *VAR_15,
          struct queue_limits *VAR_16)
{
 bool VAR_17 = 0, VAR_18 = 0;
 int VAR_19 = VAR_2;




 VAR_15->limits = *VAR_16;

 if (!FUNC_11(VAR_14)) {
  FUNC_1(VAR_5, VAR_15);

  VAR_15->limits.max_discard_sectors = 0;
  VAR_15->limits.max_hw_discard_sectors = 0;
  VAR_15->limits.discard_granularity = 0;
  VAR_15->limits.discard_alignment = 0;
  VAR_15->limits.discard_misaligned = 0;
 } else
  FUNC_2(VAR_5, VAR_15);

 if (FUNC_13(VAR_14))
  FUNC_2(VAR_8, VAR_15);

 if (FUNC_12(VAR_14, (1UL << VAR_9))) {
  VAR_17 = 1;
  if (FUNC_12(VAR_14, (1UL << VAR_6)))
   VAR_18 = 1;
 }
 FUNC_4(VAR_15, VAR_17, VAR_18);

 if (FUNC_9(VAR_14, VAR_13, &VAR_19)) {
  FUNC_2(VAR_4, VAR_15);
  if (FUNC_9(VAR_14, VAR_10, ((void*)0)))
   FUNC_17(VAR_14->md->dax_dev);
 }
 else
  FUNC_1(VAR_4, VAR_15);

 if (FUNC_10(VAR_14))
  FUNC_6(VAR_14->md->dax_dev, 1);


 if (FUNC_7(VAR_14, VAR_11))
  FUNC_2(VAR_7, VAR_15);
 else
  FUNC_1(VAR_7, VAR_15);

 if (!FUNC_14(VAR_14))
  VAR_15->limits.max_write_same_sectors = 0;
 if (!FUNC_15(VAR_14))
  VAR_15->limits.max_write_zeroes_sectors = 0;

 FUNC_16(VAR_14);





 if (FUNC_8(VAR_14))
  VAR_15->backing_dev_info->capabilities |= VAR_0;
 else
  VAR_15->backing_dev_info->capabilities &= ~VAR_0;







 if (FUNC_0(VAR_15) && FUNC_7(VAR_14, VAR_12))
  FUNC_1(VAR_3, VAR_15);
 if (FUNC_3(VAR_15))
  FUNC_5(VAR_14->md->disk);


 VAR_15->backing_dev_info->io_pages = VAR_16->max_sectors >> (VAR_1 - 9);
}
