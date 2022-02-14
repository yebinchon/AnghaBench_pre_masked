
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {struct dm_block_manager* bm; } ;
struct dm_block_manager {int dummy; } ;



struct dm_block_manager *FUNC_0(struct dm_transaction_manager *VAR_0)
{
 return VAR_0->bm;
}
