
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int bm; int sm; scalar_t__ is_clone; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct dm_transaction_manager *VAR_1)
{
 int VAR_2;

 if (VAR_1->is_clone)
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1->sm);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_1->bm);
}
