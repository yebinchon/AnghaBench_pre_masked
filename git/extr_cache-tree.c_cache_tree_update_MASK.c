
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; int cache_changed; struct cache_entry** cache; struct cache_tree* cache_tree; } ;
struct cache_tree {int dummy; } ;
struct cache_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cache_tree*,struct cache_entry**,int,char*,int ,int*,int) ;
 int FUNC_3 (struct cache_entry**,int,int) ;

int FUNC_4(struct index_state *VAR_1, int VAR_2)
{
 struct cache_tree *VAR_3 = VAR_1->cache_tree;
 struct cache_entry **VAR_4 = VAR_1->cache;
 int VAR_5 = VAR_1->cache_nr;
 int VAR_6, VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_2);

 if (VAR_7)
  return VAR_7;
 FUNC_0();
 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, "", 0, &VAR_6, VAR_2);
 FUNC_1("cache_tree_update");
 if (VAR_7 < 0)
  return VAR_7;
 VAR_1->cache_changed |= VAR_0;
 return 0;
}
