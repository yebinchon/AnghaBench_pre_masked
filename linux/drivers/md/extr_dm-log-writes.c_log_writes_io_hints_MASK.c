
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct queue_limits {int max_discard_sectors; int physical_block_size; int io_min; int logical_block_size; int discard_granularity; } ;
struct log_writes_c {int device_supports_discard; TYPE_1__* dev; int sectorsize; } ;
struct dm_target {struct log_writes_c* private; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct request_queue*) ;

__attribute__((used)) static void FUNC_4(struct dm_target *VAR_2, struct queue_limits *VAR_3)
{
 struct log_writes_c *VAR_4 = VAR_2->private;
 struct request_queue *VAR_5 = FUNC_0(VAR_4->dev->bdev);

 if (!VAR_5 || !FUNC_3(VAR_5)) {
  VAR_4->device_supports_discard = 0;
  VAR_3->discard_granularity = VAR_4->sectorsize;
  VAR_3->max_discard_sectors = (VAR_1 >> VAR_0);
 }
 VAR_3->logical_block_size = FUNC_1(VAR_4->dev->bdev);
 VAR_3->physical_block_size = FUNC_2(VAR_4->dev->bdev);
 VAR_3->io_min = VAR_3->physical_block_size;
}
