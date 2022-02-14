
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frontcluster; scalar_t__* clusterareanum; } ;
typedef TYPE_1__ aas_portal_t ;
struct TYPE_5__ {int numportals; int firstportal; int numareas; } ;
typedef TYPE_2__ aas_cluster_t ;
struct TYPE_6__ {int* portalindex; TYPE_1__* portals; TYPE_2__* clusters; } ;


 TYPE_3__ VAR_0 ;

void FUNC_0(int VAR_1)
{
 int VAR_2, VAR_3;
 aas_cluster_t *VAR_4;
 aas_portal_t *VAR_5;

 VAR_4 = &VAR_0.clusters[VAR_1];
 for (VAR_2 = 0; VAR_2 < VAR_4->numportals; VAR_2++)
 {
  VAR_3 = VAR_0.portalindex[VAR_4->firstportal + VAR_2];
  VAR_5 = &VAR_0.portals[VAR_3];
  if (VAR_5->frontcluster == VAR_1)
  {
   VAR_5->clusterareanum[0] = VAR_4->numareas++;
  }
  else
  {
   VAR_5->clusterareanum[1] = VAR_4->numareas++;
  }
 }
}
