
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {scalar_t__ logical_block_size; scalar_t__ physical_block_size; scalar_t__ io_min; } ;
struct dm_writecache {scalar_t__ block_size; } ;
struct dm_target {struct dm_writecache* private; } ;



__attribute__((used)) static void FUNC_0(struct dm_target *VAR_0, struct queue_limits *VAR_1)
{
 struct dm_writecache *VAR_2 = VAR_0->private;

 if (VAR_1->logical_block_size < VAR_2->block_size)
  VAR_1->logical_block_size = VAR_2->block_size;

 if (VAR_1->physical_block_size < VAR_2->block_size)
  VAR_1->physical_block_size = VAR_2->block_size;

 if (VAR_1->io_min < VAR_2->block_size)
  VAR_1->io_min = VAR_2->block_size;
}
