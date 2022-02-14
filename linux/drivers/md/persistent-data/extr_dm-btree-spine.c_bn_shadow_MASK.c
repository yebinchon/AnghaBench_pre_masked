
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_btree_value_type {int dummy; } ;
struct dm_btree_info {int tm; } ;
struct dm_block {int dummy; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct dm_block*) ;
 int FUNC_1 (int ,int ,int *,struct dm_block**,int*) ;
 int FUNC_2 (int ,int ,struct dm_btree_value_type*) ;

__attribute__((used)) static int FUNC_3(struct dm_btree_info *VAR_1, dm_block_t VAR_2,
       struct dm_btree_value_type *VAR_3,
       struct dm_block **VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_1->tm, VAR_2, &VAR_0,
          VAR_4, &VAR_6);
 if (!VAR_5 && VAR_6)
  FUNC_2(VAR_1->tm, FUNC_0(*VAR_4), VAR_3);

 return VAR_5;
}
