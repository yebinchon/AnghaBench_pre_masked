
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_tree_sub {struct cache_tree* cache_tree; int name; int namelen; } ;
struct cache_tree {scalar_t__ entry_count; int subtree_nr; struct cache_tree_sub** down; int oid; } ;
typedef int path ;


 int VAR_0 ;
 struct cache_tree_sub* FUNC_0 (struct cache_tree*,int ) ;
 int FUNC_1 (struct cache_tree*,char const*,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int,char*,char const*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cache_tree *VAR_1,
      struct cache_tree *VAR_2,
      const char *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 if (!VAR_1 || !VAR_2)

  return 0;

 if (VAR_1->entry_count < 0) {

  FUNC_1(VAR_1, VAR_3, "");
  FUNC_1(VAR_2, VAR_3, "#(ref) ");
 }
 else {
  FUNC_1(VAR_1, VAR_3, "");
  if (!FUNC_2(&VAR_1->oid, &VAR_2->oid) ||
      VAR_2->entry_count != VAR_1->entry_count ||
      VAR_2->subtree_nr != VAR_1->subtree_nr) {

   FUNC_1(VAR_2, VAR_3, "#(ref) ");
   VAR_5 = 1;
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->subtree_nr; VAR_4++) {
  char VAR_6[VAR_0];
  struct cache_tree_sub *VAR_7 = VAR_1->down[VAR_4];
  struct cache_tree_sub *VAR_8;

  VAR_8 = FUNC_0(VAR_2, VAR_7->name);
  FUNC_3(VAR_6, sizeof(VAR_6), "%s%.*s/", VAR_3, VAR_7->namelen, VAR_7->name);
  if (FUNC_4(VAR_7->cache_tree, VAR_8->cache_tree, VAR_6))
   VAR_5 = 1;
 }
 return VAR_5;
}
