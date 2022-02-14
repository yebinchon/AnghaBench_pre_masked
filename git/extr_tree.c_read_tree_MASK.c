
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct repository {int dummy; } ;
struct pathspec {int dummy; } ;
struct index_state {int cache_nr; struct cache_entry** cache; int cache_tree; } ;
struct cache_entry {int dummy; } ;
typedef scalar_t__ read_tree_fn_t ;


 int FUNC_0 (struct cache_entry**,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cache_entry const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct repository*,struct tree*,char*,int ,int,struct pathspec*,scalar_t__,struct index_state*) ;

int FUNC_4(struct repository *VAR_3, struct tree *VAR_4, int VAR_5,
       struct pathspec *VAR_6, struct index_state *VAR_7)
{
 read_tree_fn_t VAR_8 = ((void*)0);
 int VAR_9, VAR_10;
 for (VAR_9 = 0; !VAR_8 && VAR_9 < VAR_7->cache_nr; VAR_9++) {
  const struct cache_entry *VAR_11 = VAR_7->cache[VAR_9];
  if (FUNC_2(VAR_11) == VAR_5)
   VAR_8 = VAR_1;
 }

 if (!VAR_8)
  VAR_8 = VAR_2;
 VAR_10 = FUNC_3(VAR_3, VAR_4, "", 0, VAR_5, VAR_6, VAR_8, VAR_7);
 if (VAR_8 == VAR_1 || VAR_10)
  return VAR_10;




 FUNC_1(&VAR_7->cache_tree);
 FUNC_0(VAR_7->cache, VAR_7->cache_nr, VAR_0);
 return 0;
}
