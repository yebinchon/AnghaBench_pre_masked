
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_btree_value_type {scalar_t__ dec; } ;
struct dm_array_info {struct dm_btree_value_type value_type; } ;
struct array_block {int dummy; } ;


 int FUNC_0 (struct dm_array_info*,struct array_block*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct dm_array_info *VAR_0, struct array_block *VAR_1)
{
 struct dm_btree_value_type *VAR_2 = &VAR_0->value_type;

 if (VAR_2->dec)
  FUNC_0(VAR_0, VAR_1, VAR_2->dec);
}
