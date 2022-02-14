
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_list {int dummy; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (struct index_state*,int,int,struct pattern_list*) ;

__attribute__((used)) static void FUNC_2(struct pattern_list *VAR_1,
       struct index_state *VAR_2,
       int VAR_3, int VAR_4)
{
 int VAR_5;





 for (VAR_5 = 0; VAR_5 < VAR_2->cache_nr; VAR_5++) {
  struct cache_entry *VAR_6 = VAR_2->cache[VAR_5];

  if (VAR_3 && !(VAR_6->ce_flags & VAR_3))
   continue;

  if (!FUNC_0(VAR_6) && !(VAR_6->ce_flags & VAR_0))
   VAR_6->ce_flags |= VAR_4;
  else
   VAR_6->ce_flags &= ~VAR_4;
 }





 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1);
}
