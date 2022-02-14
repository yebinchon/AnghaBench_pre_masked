
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_tree_sub {struct cache_tree* cache_tree; } ;
struct cache_tree {scalar_t__ entry_count; int subtree_alloc; int subtree_nr; int down; int oid; } ;
struct TYPE_2__ {unsigned int rawsz; } ;


 struct cache_tree* FUNC_0 () ;
 int FUNC_1 (struct cache_tree**) ;
 struct cache_tree_sub* FUNC_2 (struct cache_tree*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,char const*,int,...) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char const*) ;
 int VAR_0 ;
 void* FUNC_7 (char const*,char**,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static struct cache_tree *FUNC_9(const char **VAR_2, unsigned long *VAR_3)
{
 const char *VAR_4 = *VAR_2;
 unsigned long VAR_5 = *VAR_3;
 const char *VAR_6;
 char *VAR_7;
 struct cache_tree *VAR_8;
 int VAR_9, VAR_10;
 const unsigned VAR_11 = VAR_1->rawsz;

 VAR_8 = ((void*)0);

 while (VAR_5 && *VAR_4) {
  VAR_5--;
  VAR_4++;
 }
 if (!VAR_5)
  goto free_return;
 VAR_4++; VAR_5--;
 VAR_8 = FUNC_0();

 VAR_6 = VAR_4;
 VAR_8->entry_count = FUNC_7(VAR_6, &VAR_7, 10);
 if (VAR_6 == VAR_7)
  goto free_return;
 VAR_6 = VAR_7;
 VAR_10 = FUNC_7(VAR_6, &VAR_7, 10);
 if (VAR_6 == VAR_7)
  goto free_return;
 while (VAR_5 && *VAR_4 && *VAR_4 != '\n') {
  VAR_5--;
  VAR_4++;
 }
 if (!VAR_5)
  goto free_return;
 VAR_4++; VAR_5--;
 if (0 <= VAR_8->entry_count) {
  if (VAR_5 < VAR_11)
   goto free_return;
  FUNC_6(&VAR_8->oid, (const unsigned char *)VAR_4);
  VAR_4 += VAR_11;
  VAR_5 -= VAR_11;
 }
 VAR_8->subtree_alloc = VAR_10 + 2;
 VAR_8->down = FUNC_8(VAR_8->subtree_alloc, sizeof(struct cache_tree_sub *));
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {

  struct cache_tree *VAR_12;
  struct cache_tree_sub *VAR_13;
  const char *VAR_14 = VAR_4;

  VAR_12 = FUNC_9(&VAR_4, &VAR_5);
  if (!VAR_12)
   goto free_return;
  VAR_13 = FUNC_2(VAR_8, VAR_14);
  VAR_13->cache_tree = VAR_12;
 }
 if (VAR_10 != VAR_8->subtree_nr)
  FUNC_3("cache-tree: internal error");
 *VAR_2 = VAR_4;
 *VAR_3 = VAR_5;
 return VAR_8;

 free_return:
 FUNC_1(&VAR_8);
 return ((void*)0);
}
