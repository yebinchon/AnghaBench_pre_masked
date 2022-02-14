
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int bm; int sm; scalar_t__ is_clone; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct dm_transaction_manager*,int ,struct dm_block_validator*,struct dm_block**) ;
 int FUNC_1 (struct dm_block*) ;
 int FUNC_2 (int ,int ,struct dm_block_validator*,struct dm_block**) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (struct dm_transaction_manager*,int ) ;
 scalar_t__ FUNC_5 (struct dm_transaction_manager*,int ) ;

int FUNC_6(struct dm_transaction_manager *VAR_1, dm_block_t VAR_2,
         struct dm_block_validator *VAR_3, struct dm_block **VAR_4,
         int *VAR_5)
{
 int VAR_6;

 if (VAR_1->is_clone)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_1->sm, VAR_2, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (FUNC_5(VAR_1, VAR_2) && !*VAR_5)
  return FUNC_2(VAR_1->bm, VAR_2, VAR_3, VAR_4);

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 FUNC_4(VAR_1, FUNC_1(*VAR_4));

 return VAR_6;
}
