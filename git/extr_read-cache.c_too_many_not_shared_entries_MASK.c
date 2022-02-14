
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int index; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct index_state *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 int VAR_4 = FUNC_0();

 switch (VAR_4) {
 case -1:

  VAR_4 = VAR_0;
  break;
 case 0:
  return 1;
 case 100:
  return 0;
 default:
  break;
 }


 for (VAR_2 = 0; VAR_2 < VAR_1->cache_nr; VAR_2++) {
  struct cache_entry *VAR_5 = VAR_1->cache[VAR_2];
  if (!VAR_5->index)
   VAR_3++;
 }

 return (int64_t)VAR_1->cache_nr * VAR_4 < (int64_t)VAR_3 * 100;
}
