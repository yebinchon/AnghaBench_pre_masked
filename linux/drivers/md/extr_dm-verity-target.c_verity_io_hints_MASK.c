
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {int logical_block_size; int physical_block_size; } ;
struct dm_verity {int data_dev_block_bits; } ;
struct dm_target {struct dm_verity* private; } ;


 int FUNC_0 (struct queue_limits*,int) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0, struct queue_limits *VAR_1)
{
 struct dm_verity *VAR_2 = VAR_0->private;

 if (VAR_1->logical_block_size < 1 << VAR_2->data_dev_block_bits)
  VAR_1->logical_block_size = 1 << VAR_2->data_dev_block_bits;

 if (VAR_1->physical_block_size < 1 << VAR_2->data_dev_block_bits)
  VAR_1->physical_block_size = 1 << VAR_2->data_dev_block_bits;

 FUNC_0(VAR_1, VAR_1->logical_block_size);
}
