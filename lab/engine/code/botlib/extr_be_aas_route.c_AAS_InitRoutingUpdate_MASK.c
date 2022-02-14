
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int aas_routingupdate_t ;
struct TYPE_4__ {int numclusters; int numportals; int * portalupdate; int * areaupdate; TYPE_1__* clusters; } ;
struct TYPE_3__ {int numreachabilityareas; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__ VAR_0 ;

void FUNC_2(void)
{
 int VAR_1, VAR_2;


 if (VAR_0.areaupdate) FUNC_0(VAR_0.areaupdate);

 VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0.numclusters; VAR_1++)
 {
  if (VAR_0.clusters[VAR_1].numreachabilityareas > VAR_2)
  {
   VAR_2 = VAR_0.clusters[VAR_1].numreachabilityareas;
  }
 }

 VAR_0.areaupdate = (aas_routingupdate_t *) FUNC_1(
         VAR_2 * sizeof(aas_routingupdate_t));

 if (VAR_0.portalupdate) FUNC_0(VAR_0.portalupdate);

 VAR_0.portalupdate = (aas_routingupdate_t *) FUNC_1(
         (VAR_0.numportals+1) * sizeof(aas_routingupdate_t));
}
