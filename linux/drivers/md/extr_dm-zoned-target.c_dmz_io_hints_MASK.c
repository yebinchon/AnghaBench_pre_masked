
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_limits {unsigned int max_discard_sectors; unsigned int max_hw_discard_sectors; unsigned int max_write_zeroes_sectors; unsigned int chunk_sectors; unsigned int max_sectors; int zoned; void* discard_granularity; void* discard_alignment; void* physical_block_size; void* logical_block_size; } ;
struct dmz_target {TYPE_1__* dev; } ;
struct dm_target {struct dmz_target* private; } ;
struct TYPE_2__ {unsigned int zone_nr_sectors; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct queue_limits*,void*) ;
 int FUNC_1 (struct queue_limits*,void*) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_2, struct queue_limits *VAR_3)
{
 struct dmz_target *VAR_4 = VAR_2->private;
 unsigned int VAR_5 = VAR_4->dev->zone_nr_sectors;

 VAR_3->logical_block_size = VAR_1;
 VAR_3->physical_block_size = VAR_1;

 FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_1);

 VAR_3->discard_alignment = VAR_1;
 VAR_3->discard_granularity = VAR_1;
 VAR_3->max_discard_sectors = VAR_5;
 VAR_3->max_hw_discard_sectors = VAR_5;
 VAR_3->max_write_zeroes_sectors = VAR_5;


 VAR_3->chunk_sectors = VAR_5;
 VAR_3->max_sectors = VAR_5;


 VAR_3->zoned = VAR_0;
}
