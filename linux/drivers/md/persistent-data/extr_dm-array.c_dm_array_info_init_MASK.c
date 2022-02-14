
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_transaction_manager {int dummy; } ;
struct dm_btree_value_type {int size; int equal; int dec; int inc; struct dm_array_info* context; } ;
struct TYPE_2__ {int levels; struct dm_transaction_manager* tm; struct dm_btree_value_type value_type; } ;
struct dm_array_info {TYPE_1__ btree_info; int value_type; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct dm_btree_value_type*,int) ;

void FUNC_1(struct dm_array_info *VAR_3,
   struct dm_transaction_manager *VAR_4,
   struct dm_btree_value_type *VAR_5)
{
 struct dm_btree_value_type *VAR_6 = &VAR_3->btree_info.value_type;

 FUNC_0(&VAR_3->value_type, VAR_5, sizeof(VAR_3->value_type));
 VAR_3->btree_info.tm = VAR_4;
 VAR_3->btree_info.levels = 1;

 VAR_6->context = VAR_3;
 VAR_6->size = sizeof(__le64);
 VAR_6->inc = VAR_2;
 VAR_6->dec = VAR_0;
 VAR_6->equal = VAR_1;
}
