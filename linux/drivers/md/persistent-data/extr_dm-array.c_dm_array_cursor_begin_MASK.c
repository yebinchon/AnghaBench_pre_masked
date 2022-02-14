
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_array_info {int btree_info; } ;
struct dm_array_cursor {int cursor; struct dm_array_info* info; } ;
typedef int dm_block_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int,int *) ;
 int FUNC_2 (struct dm_array_cursor*) ;
 int FUNC_3 (struct dm_array_cursor*,int ,int) ;

int FUNC_4(struct dm_array_info *VAR_0, dm_block_t VAR_1,
     struct dm_array_cursor *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->info = VAR_0;
 VAR_3 = FUNC_1(&VAR_0->btree_info, VAR_1, 1, &VAR_2->cursor);
 if (VAR_3) {
  FUNC_0("couldn't create btree cursor");
  return VAR_3;
 }

 return FUNC_2(VAR_2);
}
