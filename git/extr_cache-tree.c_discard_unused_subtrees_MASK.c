
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_tree_sub {int cache_tree; scalar_t__ used; } ;
struct cache_tree {int subtree_nr; struct cache_tree_sub** down; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cache_tree_sub*) ;

__attribute__((used)) static void FUNC_2(struct cache_tree *VAR_0)
{
 struct cache_tree_sub **VAR_1 = VAR_0->down;
 int VAR_2 = VAR_0->subtree_nr;
 int VAR_3, VAR_4;
 for (VAR_3 = VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct cache_tree_sub *VAR_5 = VAR_1[VAR_4];
  if (VAR_5->used)
   VAR_1[VAR_3++] = VAR_5;
  else {
   FUNC_0(&VAR_5->cache_tree);
   FUNC_1(VAR_5);
   VAR_0->subtree_nr--;
  }
 }
}
