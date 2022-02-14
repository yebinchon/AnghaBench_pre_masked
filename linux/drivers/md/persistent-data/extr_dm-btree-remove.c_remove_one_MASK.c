
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct shadow_spine {int dummy; } ;
struct dm_btree_value_type {int dummy; } ;
struct TYPE_4__ {int context; int (* dec ) (int ,int ) ;} ;
struct dm_btree_info {int levels; TYPE_2__ value_type; int tm; } ;
struct TYPE_3__ {int nr_entries; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct btree_node*,int) ;
 struct btree_node* FUNC_1 (int ) ;
 int FUNC_2 (struct shadow_spine*) ;
 int FUNC_3 (int ,struct dm_btree_value_type*) ;
 int FUNC_4 (struct shadow_spine*,struct dm_btree_info*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct shadow_spine*,struct dm_btree_info*,TYPE_2__*,int ,scalar_t__,int*) ;
 int FUNC_8 (struct shadow_spine*,struct dm_btree_info*,struct dm_btree_value_type*,int ,scalar_t__,unsigned int*) ;
 int FUNC_9 (struct shadow_spine*) ;
 int FUNC_10 (struct shadow_spine*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct btree_node*,int) ;
 int FUNC_13 (struct btree_node*,int) ;

__attribute__((used)) static int FUNC_14(struct dm_btree_info *VAR_1, dm_block_t VAR_2,
        uint64_t *VAR_3, uint64_t VAR_4,
        dm_block_t *VAR_5, unsigned *VAR_6)
{
 unsigned VAR_7, VAR_8 = VAR_1->levels - 1;
 int VAR_9 = 0, VAR_10 = 0;
 struct shadow_spine VAR_11;
 struct btree_node *VAR_12;
 struct dm_btree_value_type VAR_13;
 uint64_t VAR_14;

 FUNC_3(VAR_1->tm, &VAR_13);
 FUNC_4(&VAR_11, VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_10 = FUNC_8(&VAR_11, VAR_1, &VAR_13,
          VAR_2, VAR_3[VAR_7], (unsigned *) &VAR_9);
  if (VAR_10 < 0)
   goto out;

  VAR_12 = FUNC_1(FUNC_9(&VAR_11));
  VAR_2 = FUNC_12(VAR_12, VAR_9);
 }

 VAR_10 = FUNC_7(&VAR_11, VAR_1, &VAR_1->value_type,
      VAR_2, VAR_3[VAR_8], &VAR_9);
 if (VAR_10 < 0)
  goto out;

 VAR_12 = FUNC_1(FUNC_9(&VAR_11));

 if (VAR_9 < 0)
  VAR_9 = 0;

 if (VAR_9 >= FUNC_5(VAR_12->header.nr_entries)) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_6(VAR_12->keys[VAR_9]);
 if (VAR_14 >= VAR_3[VAR_8] && VAR_14 < VAR_4) {
  if (VAR_1->value_type.dec)
   VAR_1->value_type.dec(VAR_1->value_type.context,
          FUNC_13(VAR_12, VAR_9));

  FUNC_0(VAR_12, VAR_9);
  VAR_3[VAR_8] = VAR_14 + 1ull;

 } else
  VAR_10 = -VAR_0;

out:
 *VAR_5 = FUNC_10(&VAR_11);
 FUNC_2(&VAR_11);

 return VAR_10;
}
