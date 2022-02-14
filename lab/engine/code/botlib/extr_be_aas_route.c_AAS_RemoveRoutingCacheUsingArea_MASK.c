
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_3__ aas_routingcache_t ;
struct TYPE_9__ {int numareas; TYPE_3__** portalcache; TYPE_1__* portals; TYPE_2__* areasettings; } ;
struct TYPE_7__ {int cluster; } ;
struct TYPE_6__ {int frontcluster; int backcluster; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 TYPE_4__ VAR_0 ;

void FUNC_2( int VAR_1 )
{
 int VAR_2, VAR_3;
 aas_routingcache_t *VAR_4, *VAR_5;

 VAR_3 = VAR_0.areasettings[VAR_1].cluster;
 if (VAR_3 > 0)
 {

  FUNC_1( VAR_3 );
 }
 else
 {

  FUNC_1( VAR_0.portals[-VAR_3].frontcluster );
  FUNC_1( VAR_0.portals[-VAR_3].backcluster );
 }

 for (VAR_2 = 0; VAR_2 < VAR_0.numareas; VAR_2++)
 {

  for (VAR_4 = VAR_0.portalcache[VAR_2]; VAR_4; VAR_4 = VAR_5)
  {
   VAR_5 = VAR_4->next;
   FUNC_0(VAR_4);
  }
  VAR_0.portalcache[VAR_2] = ((void*)0);
 }
}
