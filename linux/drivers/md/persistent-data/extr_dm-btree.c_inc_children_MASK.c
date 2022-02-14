
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct dm_transaction_manager {int dummy; } ;
struct dm_btree_value_type {int context; int (* inc ) (int ,int ) ;} ;
struct TYPE_2__ {int flags; int nr_entries; } ;
struct btree_node {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_transaction_manager*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct btree_node*,unsigned int) ;
 int FUNC_4 (struct btree_node*,unsigned int) ;

void FUNC_5(struct dm_transaction_manager *VAR_1, struct btree_node *VAR_2,
    struct dm_btree_value_type *VAR_3)
{
 unsigned VAR_4;
 uint32_t VAR_5 = FUNC_1(VAR_2->header.nr_entries);

 if (FUNC_1(VAR_2->header.flags) & VAR_0)
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   FUNC_0(VAR_1, FUNC_3(VAR_2, VAR_4));
 else if (VAR_3->inc)
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   VAR_3->inc(VAR_3->context, FUNC_4(VAR_2, VAR_4));
}
