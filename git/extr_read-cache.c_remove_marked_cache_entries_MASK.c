
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {unsigned int cache_nr; int cache_changed; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct index_state*,int ) ;
 int FUNC_1 (struct index_state*,struct cache_entry*) ;
 int FUNC_2 (struct index_state*,struct cache_entry*) ;
 int FUNC_3 (struct index_state*,int ) ;

void FUNC_4(struct index_state *VAR_2, int VAR_3)
{
 struct cache_entry **VAR_4 = VAR_2->cache;
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_2->cache_nr; VAR_5++) {
  if (VAR_4[VAR_5]->ce_flags & VAR_1) {
   if (VAR_3) {
    FUNC_0(VAR_2,
          VAR_4[VAR_5]->name);
    FUNC_3(VAR_2,
          VAR_4[VAR_5]->name);
   }
   FUNC_1(VAR_2, VAR_4[VAR_5]);
   FUNC_2(VAR_2, VAR_4[VAR_5]);
  }
  else
   VAR_4[VAR_6++] = VAR_4[VAR_5];
 }
 if (VAR_6 == VAR_2->cache_nr)
  return;
 VAR_2->cache_changed |= VAR_0;
 VAR_2->cache_nr = VAR_6;
}
