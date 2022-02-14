
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int size; } ;
struct dm_btree_info {int tm; TYPE_2__ value_type; } ;
struct dm_block {int dummy; } ;
struct TYPE_3__ {int nr_entries; int flags; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dm_btree_info*,int ,struct dm_block**) ;
 struct btree_node* FUNC_1 (struct dm_block*) ;
 int FUNC_2 (int ,struct dm_block*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct btree_node*,int ) ;
 int FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (struct btree_node*,int ) ;
 int FUNC_8 (struct btree_node*,int) ;
 int FUNC_9 (struct btree_node*,int) ;

__attribute__((used)) static int FUNC_10(struct dm_btree_info *VAR_2, dm_block_t VAR_3,
           uint64_t VAR_4, uint64_t *VAR_5, void *VAR_6)
{
 int VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10;
 struct dm_block *VAR_11;
 struct btree_node *VAR_12;

 VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_11);
 if (VAR_7)
  return VAR_7;

 VAR_12 = FUNC_1(VAR_11);
 VAR_9 = FUNC_3(VAR_12->header.flags);
 VAR_10 = FUNC_3(VAR_12->header.nr_entries);

 if (VAR_9 & VAR_1) {
  VAR_8 = FUNC_5(VAR_12, VAR_4);
  if (VAR_8 < 0) {




   VAR_8 = 0;
  }
  if (VAR_8 >= VAR_10) {
   VAR_7 = -VAR_0;
   goto out;
  }

  VAR_7 = FUNC_10(VAR_2, FUNC_8(VAR_12, VAR_8), VAR_4, VAR_5, VAR_6);
  if (VAR_7 == -VAR_0 && VAR_8 < (VAR_10 - 1)) {
   VAR_8++;
   VAR_7 = FUNC_10(VAR_2, FUNC_8(VAR_12, VAR_8), VAR_4, VAR_5, VAR_6);
  }

 } else {
  VAR_8 = FUNC_7(VAR_12, VAR_4);
  if (VAR_8 < 0 || VAR_8 >= VAR_10) {
   VAR_7 = -VAR_0;
   goto out;
  }

  *VAR_5 = FUNC_4(VAR_12->keys[VAR_8]);
  FUNC_6(VAR_6, FUNC_9(VAR_12, VAR_8), VAR_2->value_type.size);
 }
out:
 FUNC_2(VAR_2->tm, VAR_11);
 return VAR_7;
}
