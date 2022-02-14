
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; int resolve_undo; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct index_state*,int) ;

void FUNC_1(struct index_state *VAR_1)
{
 int VAR_2;

 if (!VAR_1->resolve_undo)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->cache_nr; VAR_2++) {
  const struct cache_entry *VAR_3 = VAR_1->cache[VAR_2];
  if (VAR_3->ce_flags & VAR_0)
   VAR_2 = FUNC_0(VAR_1, VAR_2);
 }
}
