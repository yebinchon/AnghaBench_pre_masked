
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; int cache_changed; } ;
struct cache_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry**,struct cache_entry**,int) ;
 int FUNC_1 (struct index_state*,struct cache_entry*) ;
 int FUNC_2 (struct index_state*,struct cache_entry*) ;
 int FUNC_3 (struct index_state*,struct cache_entry*) ;

int FUNC_4(struct index_state *VAR_1, int VAR_2)
{
 struct cache_entry *VAR_3 = VAR_1->cache[VAR_2];

 FUNC_1(VAR_1, VAR_3);
 FUNC_2(VAR_1, VAR_3);
 FUNC_3(VAR_1, VAR_3);
 VAR_1->cache_changed |= VAR_0;
 VAR_1->cache_nr--;
 if (VAR_2 >= VAR_1->cache_nr)
  return 0;
 FUNC_0(VAR_1->cache + VAR_2, VAR_1->cache + VAR_2 + 1,
     VAR_1->cache_nr - VAR_2);
 return 1;
}
