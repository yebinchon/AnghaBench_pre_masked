
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {unsigned int cache_nr; int fsmonitor_dirty; TYPE_1__** cache; } ;
struct TYPE_2__ {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned int) ;

void FUNC_2(struct index_state *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;
 VAR_2->fsmonitor_dirty = FUNC_0();
 for (VAR_3 = 0; VAR_3 < VAR_2->cache_nr; VAR_3++) {
  if (VAR_2->cache[VAR_3]->ce_flags & VAR_1)
   VAR_4++;
  else if (!(VAR_2->cache[VAR_3]->ce_flags & VAR_0))
   FUNC_1(VAR_2->fsmonitor_dirty, VAR_3 - VAR_4);
 }
}
