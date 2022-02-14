
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int size; } ;
struct dm_btree_info {TYPE_2__ value_type; int tm; } ;
struct dm_block {int dummy; } ;
struct TYPE_3__ {void* value_size; void* max_entries; void* nr_entries; void* flags; } ;
struct btree_node {TYPE_1__ header; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 void* FUNC_1 (int ) ;
 struct btree_node* FUNC_2 (struct dm_block*) ;
 int FUNC_3 (struct dm_block*) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct btree_node*,int ,size_t) ;
 int FUNC_7 (struct dm_btree_info*,struct dm_block**) ;
 int FUNC_8 (struct dm_btree_info*,struct dm_block*) ;

int FUNC_9(struct dm_btree_info *VAR_1, dm_block_t *VAR_2)
{
 int VAR_3;
 struct dm_block *VAR_4;
 struct btree_node *VAR_5;
 size_t VAR_6;
 uint32_t VAR_7;

 VAR_3 = FUNC_7(VAR_1, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_6 = FUNC_4(FUNC_5(VAR_1->tm));
 VAR_7 = FUNC_0(VAR_1->value_type.size, VAR_6);

 VAR_5 = FUNC_2(VAR_4);
 FUNC_6(VAR_5, 0, VAR_6);
 VAR_5->header.flags = FUNC_1(VAR_0);
 VAR_5->header.nr_entries = FUNC_1(0);
 VAR_5->header.max_entries = FUNC_1(VAR_7);
 VAR_5->header.value_size = FUNC_1(VAR_1->value_type.size);

 *VAR_2 = FUNC_3(VAR_4);
 FUNC_8(VAR_1, VAR_4);

 return 0;
}
