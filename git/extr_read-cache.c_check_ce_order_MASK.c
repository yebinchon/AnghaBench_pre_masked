
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {unsigned int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct index_state *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_0)
  return;

 for (VAR_2 = 1; VAR_2 < VAR_1->cache_nr; VAR_2++) {
  struct cache_entry *VAR_3 = VAR_1->cache[VAR_2 - 1];
  struct cache_entry *VAR_4 = VAR_1->cache[VAR_2];
  int VAR_5 = FUNC_3(VAR_3->name, VAR_4->name);

  if (0 < VAR_5)
   FUNC_2(FUNC_0("unordered stage entries in index"));
  if (!VAR_5) {
   if (!FUNC_1(VAR_3))
    FUNC_2(FUNC_0("multiple stage entries for merged file '%s'"),
        VAR_3->name);
   if (FUNC_1(VAR_3) > FUNC_1(VAR_4))
    FUNC_2(FUNC_0("unordered stage entries for '%s'"),
        VAR_3->name);
  }
 }
}
