
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct index_state {unsigned int cache_nr; TYPE_2__* untracked; TYPE_1__** cache; int fsmonitor_last_update; int cache_changed; } ;
struct TYPE_4__ {int use_fsmonitor; } ;
struct TYPE_3__ {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct index_state*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct index_state*) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*) ;

void FUNC_4(struct index_state *VAR_3)
{
 unsigned int VAR_4;

 if (!VAR_3->fsmonitor_last_update) {
  FUNC_3(&VAR_2, "add fsmonitor");
  VAR_3->cache_changed |= VAR_1;
  VAR_3->fsmonitor_last_update = FUNC_1();


  for (VAR_4 = 0; VAR_4 < VAR_3->cache_nr; VAR_4++)
   VAR_3->cache[VAR_4]->ce_flags &= ~VAR_0;


  if (VAR_3->untracked) {
   FUNC_0(VAR_3);
   VAR_3->untracked->use_fsmonitor = 1;
  }


  FUNC_2(VAR_3);
 }
}
