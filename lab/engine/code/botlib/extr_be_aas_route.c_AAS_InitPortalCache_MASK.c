
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int aas_routingcache_t ;
struct TYPE_2__ {int numareas; int ** portalcache; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void)
{

 VAR_0.portalcache = (aas_routingcache_t **) FUNC_0(
        VAR_0.numareas * sizeof(aas_routingcache_t *));
}
