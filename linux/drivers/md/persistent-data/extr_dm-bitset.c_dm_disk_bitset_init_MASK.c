
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int dummy; } ;
struct dm_disk_bitset {int current_index_set; int array_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct dm_transaction_manager*,int *) ;

void FUNC_1(struct dm_transaction_manager *VAR_1,
    struct dm_disk_bitset *VAR_2)
{
 FUNC_0(&VAR_2->array_info, VAR_1, &VAR_0);
 VAR_2->current_index_set = 0;
}
