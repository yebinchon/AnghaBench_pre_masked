
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_tree {scalar_t__ entry_count; int subtree_nr; TYPE_1__** down; int oid; } ;
struct TYPE_2__ {struct cache_tree* cache_tree; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct cache_tree *VAR_0)
{
 int VAR_1;
 if (!VAR_0)
  return 0;
 if (VAR_0->entry_count < 0 || !FUNC_0(&VAR_0->oid))
  return 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->subtree_nr; VAR_1++) {
  if (!FUNC_1(VAR_0->down[VAR_1]->cache_tree))
   return 0;
 }
 return 1;
}
