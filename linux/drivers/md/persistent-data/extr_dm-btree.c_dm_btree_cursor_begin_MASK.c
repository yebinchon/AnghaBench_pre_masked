
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_btree_info {int dummy; } ;
struct dm_btree_cursor {int prefetch_leaves; scalar_t__ depth; int root; struct dm_btree_info* info; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_btree_cursor*) ;
 int FUNC_1 (struct dm_btree_cursor*,int ) ;

int FUNC_2(struct dm_btree_info *VAR_0, dm_block_t VAR_1,
     bool VAR_2, struct dm_btree_cursor *VAR_3)
{
 int VAR_4;

 VAR_3->info = VAR_0;
 VAR_3->root = VAR_1;
 VAR_3->depth = 0;
 VAR_3->prefetch_leaves = VAR_2;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_3);
}
