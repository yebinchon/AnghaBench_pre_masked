
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct shadow_spine {int dummy; } ;
struct dm_btree_value_type {int context; int (* dec ) (int ,int ) ;} ;
struct dm_btree_info {int levels; struct dm_btree_value_type value_type; int tm; } ;
struct TYPE_2__ {int nr_entries; } ;
struct btree_node {TYPE_1__ header; } ;
typedef int dm_block_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btree_node*,int) ;
 struct btree_node* FUNC_2 (int ) ;
 int FUNC_3 (struct shadow_spine*) ;
 int FUNC_4 (int ,struct dm_btree_value_type*) ;
 int FUNC_5 (struct shadow_spine*,struct dm_btree_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct shadow_spine*,struct dm_btree_info*,struct dm_btree_value_type*,int ,int ,unsigned int*) ;
 int FUNC_8 (struct shadow_spine*) ;
 int FUNC_9 (struct shadow_spine*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct btree_node*,int) ;
 int FUNC_12 (struct btree_node*,int) ;

int FUNC_13(struct dm_btree_info *VAR_0, dm_block_t VAR_1,
      uint64_t *VAR_2, dm_block_t *VAR_3)
{
 unsigned VAR_4, VAR_5 = VAR_0->levels - 1;
 int VAR_6 = 0, VAR_7 = 0;
 struct shadow_spine VAR_8;
 struct btree_node *VAR_9;
 struct dm_btree_value_type VAR_10;

 FUNC_4(VAR_0->tm, &VAR_10);
 FUNC_5(&VAR_8, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_0->levels; VAR_4++) {
  VAR_7 = FUNC_7(&VAR_8, VAR_0,
          (VAR_4 == VAR_5 ?
    &VAR_0->value_type : &VAR_10),
          VAR_1, VAR_2[VAR_4], (unsigned *)&VAR_6);
  if (VAR_7 < 0)
   break;

  VAR_9 = FUNC_2(FUNC_8(&VAR_8));
  if (VAR_4 != VAR_5) {
   VAR_1 = FUNC_11(VAR_9, VAR_6);
   continue;
  }

  FUNC_0(VAR_6 < 0 || VAR_6 >= FUNC_6(VAR_9->header.nr_entries));

  if (VAR_0->value_type.dec)
   VAR_0->value_type.dec(VAR_0->value_type.context,
          FUNC_12(VAR_9, VAR_6));

  FUNC_1(VAR_9, VAR_6);
 }

 *VAR_3 = FUNC_9(&VAR_8);
 FUNC_3(&VAR_8);

 return VAR_7;
}
