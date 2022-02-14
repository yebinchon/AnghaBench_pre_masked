
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* value_fn ) (unsigned int,int ,void*) ;
struct dm_btree_value_type {int context; int (* inc ) (int ,int ) ;} ;
struct dm_array_info {struct dm_btree_value_type value_type; } ;
struct array_block {int nr_entries; int max_entries; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dm_array_info*,struct array_block*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dm_array_info *VAR_0, struct array_block *VAR_1,
           value_fn VAR_2, void *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 int VAR_6;
 unsigned VAR_7;
 struct dm_btree_value_type *VAR_8 = &VAR_0->value_type;

 FUNC_0(FUNC_3(VAR_1->nr_entries));
 FUNC_0(VAR_5 > FUNC_3(VAR_1->max_entries));

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = VAR_2(VAR_4 + VAR_7, FUNC_2(VAR_0, VAR_1, VAR_7), VAR_3);
  if (VAR_6)
   return VAR_6;

  if (VAR_8->inc)
   VAR_8->inc(VAR_8->context, FUNC_2(VAR_0, VAR_1, VAR_7));
 }

 VAR_1->nr_entries = FUNC_1(VAR_5);
 return 0;
}
