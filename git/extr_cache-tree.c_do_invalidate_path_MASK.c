
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cache_tree_sub {struct cache_tree* cache_tree; } ;
struct cache_tree {int entry_count; int subtree_nr; TYPE_1__** down; } ;
struct TYPE_4__ {int cache_tree; } ;


 int FUNC_0 (TYPE_1__**,TYPE_1__**,int) ;
 int FUNC_1 (int *) ;
 struct cache_tree_sub* FUNC_2 (struct cache_tree*,char const*,int,int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (struct cache_tree*,char const*,int) ;

__attribute__((used)) static int FUNC_7(struct cache_tree *VAR_1, const char *VAR_2)
{







 const char *VAR_3;
 int VAR_4;
 struct cache_tree_sub *VAR_5;





 if (!VAR_1)
  return 0;
 VAR_3 = FUNC_5(VAR_2, '/');
 VAR_4 = VAR_3 - VAR_2;
 VAR_1->entry_count = -1;
 if (!*VAR_3) {
  int VAR_6;
  VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_4);
  if (0 <= VAR_6) {
   FUNC_1(&VAR_1->down[VAR_6]->cache_tree);
   FUNC_4(VAR_1->down[VAR_6]);






   FUNC_0(VAR_1->down + VAR_6, VAR_1->down + VAR_6 + 1,
       VAR_1->subtree_nr - VAR_6 - 1);
   VAR_1->subtree_nr--;
  }
  return 1;
 }
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4, 0);
 if (VAR_5)
  FUNC_7(VAR_5->cache_tree, VAR_3 + 1);
 return 1;
}
