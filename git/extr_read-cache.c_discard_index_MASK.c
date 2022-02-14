
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nsec; scalar_t__ sec; } ;
struct index_state {int * ce_mem_pool; int * untracked; scalar_t__ cache_alloc; int cache; scalar_t__ fsmonitor_has_run_once; scalar_t__ initialized; int cache_tree; TYPE_1__ timestamp; scalar_t__ cache_changed; scalar_t__ cache_nr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct index_state*) ;
 int FUNC_3 (struct index_state*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct index_state*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct index_state*) ;

int FUNC_9(struct index_state *VAR_0)
{







 FUNC_8(VAR_0);

 FUNC_6(VAR_0);
 VAR_0->cache_nr = 0;
 VAR_0->cache_changed = 0;
 VAR_0->timestamp.sec = 0;
 VAR_0->timestamp.nsec = 0;
 FUNC_3(VAR_0);
 FUNC_1(&(VAR_0->cache_tree));
 VAR_0->initialized = 0;
 VAR_0->fsmonitor_has_run_once = 0;
 FUNC_0(VAR_0->cache);
 VAR_0->cache_alloc = 0;
 FUNC_2(VAR_0);
 FUNC_4(VAR_0->untracked);
 VAR_0->untracked = ((void*)0);

 if (VAR_0->ce_mem_pool) {
  FUNC_5(VAR_0->ce_mem_pool, FUNC_7());
  VAR_0->ce_mem_pool = ((void*)0);
 }

 return 0;
}
