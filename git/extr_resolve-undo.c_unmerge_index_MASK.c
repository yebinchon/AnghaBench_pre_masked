
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct index_state {int cache_nr; struct cache_entry** cache; int resolve_undo; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct index_state*,struct cache_entry const*,struct pathspec const*,int *) ;
 int FUNC_1 (struct index_state*,int) ;

void FUNC_2(struct index_state *VAR_0, const struct pathspec *VAR_1)
{
 int VAR_2;

 if (!VAR_0->resolve_undo)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->cache_nr; VAR_2++) {
  const struct cache_entry *VAR_3 = VAR_0->cache[VAR_2];
  if (!FUNC_0(VAR_0, VAR_3, VAR_1, ((void*)0)))
   continue;
  VAR_2 = FUNC_1(VAR_0, VAR_2);
 }
}
