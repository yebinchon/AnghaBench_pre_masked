
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_btree_cursor {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dm_btree_cursor*) ;
 int FUNC_2 (struct dm_btree_cursor*) ;

int FUNC_3(struct dm_btree_cursor *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1) {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1)
   FUNC_0("find_leaf failed");
 }

 return VAR_1;
}
