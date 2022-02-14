
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct dm_btree_value_type {int context; int (* dec ) (int ,int ) ;} ;
struct dm_array_info {struct dm_btree_value_type value_type; } ;
struct array_block {int nr_entries; int max_entries; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dm_array_info*,struct array_block*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dm_array_info *VAR_0, struct array_block *VAR_1,
   unsigned VAR_2)
{
 unsigned VAR_3;
 uint32_t VAR_4;
 struct dm_btree_value_type *VAR_5 = &VAR_0->value_type;

 FUNC_0(VAR_2 > FUNC_3(VAR_1->max_entries));
 FUNC_0(VAR_2 > FUNC_3(VAR_1->nr_entries));

 VAR_4 = FUNC_3(VAR_1->nr_entries);
 for (VAR_3 = VAR_4; VAR_3 > VAR_2; VAR_3--)
  if (VAR_5->dec)
   VAR_5->dec(VAR_5->context, FUNC_2(VAR_0, VAR_1, VAR_3 - 1));
 VAR_1->nr_entries = FUNC_1(VAR_2);
}
