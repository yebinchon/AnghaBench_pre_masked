
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_btree_cursor {int depth; scalar_t__ prefetch_leaves; int info; struct cursor_node* nodes; } ;
struct cursor_node {scalar_t__ index; int b; } ;
typedef int dm_block_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct dm_btree_cursor*) ;
 int FUNC_3 (struct dm_btree_cursor*) ;

__attribute__((used)) static int FUNC_4(struct dm_btree_cursor *VAR_2, dm_block_t VAR_3)
{
 int VAR_4;
 struct cursor_node *VAR_5 = VAR_2->nodes + VAR_2->depth;

 if (VAR_2->depth >= VAR_0 - 1) {
  FUNC_0("couldn't push cursor node, stack depth too high");
  return -VAR_1;
 }

 VAR_4 = FUNC_1(VAR_2->info, VAR_3, &VAR_5->b);
 if (VAR_4)
  return VAR_4;

 VAR_5->index = 0;
 VAR_2->depth++;

 if (VAR_2->prefetch_leaves || !FUNC_2(VAR_2))
  FUNC_3(VAR_2);

 return 0;
}
