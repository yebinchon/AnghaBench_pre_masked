
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* time_next; struct TYPE_4__* time_prev; } ;
typedef TYPE_1__ aas_routingcache_t ;
struct TYPE_5__ {TYPE_1__* newestcache; TYPE_1__* oldestcache; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(aas_routingcache_t *VAR_1)
{
 if (VAR_0.newestcache)
 {
  VAR_0.newestcache->time_next = VAR_1;
  VAR_1->time_prev = VAR_0.newestcache;
 }
 else
 {
  VAR_0.oldestcache = VAR_1;
  VAR_1->time_prev = ((void*)0);
 }
 VAR_1->time_next = ((void*)0);
 VAR_0.newestcache = VAR_1;
}
