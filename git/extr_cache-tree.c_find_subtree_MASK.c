
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_tree_sub {int namelen; int * cache_tree; } ;
struct cache_tree {int subtree_nr; struct cache_tree_sub** down; int subtree_alloc; } ;


 int FUNC_0 (struct cache_tree_sub**,int,int ) ;
 int FUNC_1 (struct cache_tree_sub*,int ,char const*,int) ;
 int FUNC_2 (struct cache_tree_sub**,struct cache_tree_sub**,int) ;
 int VAR_0 ;
 int FUNC_3 (struct cache_tree*,char const*,int) ;

__attribute__((used)) static struct cache_tree_sub *FUNC_4(struct cache_tree *VAR_1,
        const char *VAR_2,
        int VAR_3,
        int VAR_4)
{
 struct cache_tree_sub *VAR_5;
 int VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (0 <= VAR_6)
  return VAR_1->down[VAR_6];
 if (!VAR_4)
  return ((void*)0);

 VAR_6 = -VAR_6-1;
 FUNC_0(VAR_1->down, VAR_1->subtree_nr + 1, VAR_1->subtree_alloc);
 VAR_1->subtree_nr++;

 FUNC_1(VAR_5, VAR_0, VAR_2, VAR_3);
 VAR_5->cache_tree = ((void*)0);
 VAR_5->namelen = VAR_3;

 if (VAR_6 < VAR_1->subtree_nr)
  FUNC_2(VAR_1->down + VAR_6 + 1, VAR_1->down + VAR_6,
      VAR_1->subtree_nr - VAR_6 - 1);
 VAR_1->down[VAR_6] = VAR_5;
 return VAR_5;
}
