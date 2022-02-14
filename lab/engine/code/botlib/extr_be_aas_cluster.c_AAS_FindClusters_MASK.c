
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ numportals; int firstportal; scalar_t__ numreachabilityareas; scalar_t__ numareas; } ;
typedef TYPE_2__ aas_cluster_t ;
struct TYPE_6__ {int numareas; size_t numclusters; int portalindexsize; TYPE_2__* clusters; TYPE_1__* areasettings; } ;
struct TYPE_4__ {int contents; int numreachableareas; scalar_t__ cluster; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int,size_t) ;
 size_t VAR_0 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 () ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_5(void)
{
 int VAR_6;
 aas_cluster_t *VAR_7;

 FUNC_4();

 for (VAR_6 = 1; VAR_6 < VAR_2.numareas; VAR_6++)
 {

  if (VAR_2.areasettings[VAR_6].cluster)
   continue;

  if (VAR_3)
  {
   if (!VAR_2.areasettings[VAR_6].numreachableareas)
    continue;
  }

  if (VAR_2.areasettings[VAR_6].contents & VAR_1)
   continue;
  if (VAR_2.numclusters >= VAR_0)
  {
   FUNC_0("AAS_MAX_CLUSTERS\n");
   return VAR_4;
  }
  VAR_7 = &VAR_2.clusters[VAR_2.numclusters];
  VAR_7->numareas = 0;
  VAR_7->numreachabilityareas = 0;
  VAR_7->firstportal = VAR_2.portalindexsize;
  VAR_7->numportals = 0;

  if (!FUNC_2(VAR_6, VAR_2.numclusters))
   return VAR_4;
  if (!FUNC_1(VAR_2.numclusters))
   return VAR_4;


  FUNC_3(VAR_2.numclusters);

  VAR_2.numclusters++;
 }
 return VAR_5;
}
