
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {unsigned int io_min; unsigned int logical_block_size; unsigned int physical_block_size; } ;



void FUNC_0(struct queue_limits *VAR_0, unsigned int VAR_1)
{
 VAR_0->io_min = VAR_1;

 if (VAR_0->io_min < VAR_0->logical_block_size)
  VAR_0->io_min = VAR_0->logical_block_size;

 if (VAR_0->io_min < VAR_0->physical_block_size)
  VAR_0->io_min = VAR_0->physical_block_size;
}
