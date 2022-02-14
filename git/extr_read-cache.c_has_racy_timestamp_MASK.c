
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct index_state*,struct cache_entry*) ;

__attribute__((used)) static int FUNC_1(struct index_state *VAR_0)
{
 int VAR_1 = VAR_0->cache_nr;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct cache_entry *VAR_3 = VAR_0->cache[VAR_2];
  if (FUNC_0(VAR_0, VAR_3))
   return 1;
 }
 return 0;
}
