
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_tree_sub {int namelen; int name; } ;
struct cache_tree {int subtree_nr; struct cache_tree_sub** down; } ;


 int FUNC_0 (char const*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct cache_tree *VAR_0, const char *VAR_1, int VAR_2)
{
 struct cache_tree_sub **VAR_3 = VAR_0->down;
 int VAR_4, VAR_5;
 VAR_4 = 0;
 VAR_5 = VAR_0->subtree_nr;
 while (VAR_4 < VAR_5) {
  int VAR_6 = VAR_4 + (VAR_5 - VAR_4) / 2;
  struct cache_tree_sub *VAR_7 = VAR_3[VAR_6];
  int VAR_8 = FUNC_0(VAR_1, VAR_2,
        VAR_7->name, VAR_7->namelen);
  if (!VAR_8)
   return VAR_6;
  if (VAR_8 < 0)
   VAR_5 = VAR_6;
  else
   VAR_4 = VAR_6 + 1;
 }
 return -VAR_4-1;
}
