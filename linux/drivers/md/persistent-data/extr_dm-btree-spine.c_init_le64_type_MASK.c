
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int dummy; } ;
struct dm_btree_value_type {int size; int equal; int dec; int inc; struct dm_transaction_manager* context; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct dm_transaction_manager *VAR_3,
      struct dm_btree_value_type *VAR_4)
{
 VAR_4->context = VAR_3;
 VAR_4->size = sizeof(__le64);
 VAR_4->inc = VAR_2;
 VAR_4->dec = VAR_0;
 VAR_4->equal = VAR_1;
}
