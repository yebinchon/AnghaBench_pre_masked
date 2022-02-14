
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_transaction_manager {int bm; TYPE_1__* real; scalar_t__ is_clone; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
typedef int dm_block_t ;
struct TYPE_2__ {int prefetches; int bm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct dm_block_validator*,struct dm_block**) ;
 int FUNC_1 (int ,int ,struct dm_block_validator*,struct dm_block**) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct dm_transaction_manager *VAR_1, dm_block_t VAR_2,
      struct dm_block_validator *VAR_3,
      struct dm_block **VAR_4)
{
 if (VAR_1->is_clone) {
  int VAR_5 = FUNC_1(VAR_1->real->bm, VAR_2, VAR_3, VAR_4);

  if (VAR_5 == -VAR_0)
   FUNC_2(&VAR_1->real->prefetches, VAR_2);

  return VAR_5;
 }

 return FUNC_0(VAR_1->bm, VAR_2, VAR_3, VAR_4);
}
