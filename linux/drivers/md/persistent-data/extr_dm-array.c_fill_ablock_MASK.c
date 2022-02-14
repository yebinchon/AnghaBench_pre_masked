
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct dm_btree_value_type {int size; int context; int (* inc ) (int ,void const*) ;} ;
struct dm_array_info {struct dm_btree_value_type value_type; } ;
struct array_block {int nr_entries; int max_entries; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dm_array_info*,struct array_block*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,void const*,int ) ;
 int FUNC_5 (int ,void const*) ;

__attribute__((used)) static void FUNC_6(struct dm_array_info *VAR_0, struct array_block *VAR_1,
   const void *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;
 uint32_t VAR_5;
 struct dm_btree_value_type *VAR_6 = &VAR_0->value_type;

 FUNC_0(VAR_3 > FUNC_3(VAR_1->max_entries));
 FUNC_0(VAR_3 < FUNC_3(VAR_1->nr_entries));

 VAR_5 = FUNC_3(VAR_1->nr_entries);
 for (VAR_4 = VAR_5; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_6->inc)
   VAR_6->inc(VAR_6->context, VAR_2);
  FUNC_4(FUNC_2(VAR_0, VAR_1, VAR_4), VAR_2, VAR_6->size);
 }
 VAR_1->nr_entries = FUNC_1(VAR_3);
}
