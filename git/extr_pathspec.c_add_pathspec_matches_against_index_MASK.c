
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int nr; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct index_state const*,struct cache_entry const*,struct pathspec const*,char*) ;

void FUNC_1(const struct pathspec *VAR_0,
     const struct index_state *VAR_1,
     char *VAR_2)
{
 int VAR_3 = 0, VAR_4;







 for (VAR_4 = 0; VAR_4 < VAR_0->nr; VAR_4++)
  if (!VAR_2[VAR_4])
   VAR_3++;
 if (!VAR_3)
  return;
 for (VAR_4 = 0; VAR_4 < VAR_1->cache_nr; VAR_4++) {
  const struct cache_entry *VAR_5 = VAR_1->cache[VAR_4];
  FUNC_0(VAR_1, VAR_5, VAR_0, VAR_2);
 }
}
