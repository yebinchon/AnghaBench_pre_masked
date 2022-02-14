
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {scalar_t__ fsmonitor_last_update; int cache_changed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

void FUNC_1(struct index_state *VAR_2)
{
 if (VAR_2->fsmonitor_last_update) {
  FUNC_0(&VAR_1, "remove fsmonitor");
  VAR_2->cache_changed |= VAR_0;
  VAR_2->fsmonitor_last_update = 0;
 }
}
