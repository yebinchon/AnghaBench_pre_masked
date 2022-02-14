
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {int numclusters; TYPE_3__* clusters; TYPE_2__* portals; TYPE_1__* areasettings; int initialized; } ;
struct TYPE_7__ {scalar_t__ numreachabilityareas; } ;
struct TYPE_6__ {int frontcluster; int* clusterareanum; } ;
struct TYPE_5__ {int cluster; int clusterareanum; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_4__ VAR_0 ;

int FUNC_2( vec3_t VAR_1 )
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 if (!VAR_0.initialized)
  return 0;

 if ( !VAR_1 )
 {
  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_0.numclusters; VAR_4++)
  {
   VAR_5 += VAR_0.clusters[VAR_4].numreachabilityareas;
  }
  return VAR_5;
 }

 VAR_2 = FUNC_1( VAR_1 );
 if ( !VAR_2 || !FUNC_0(VAR_2) )
  return 0;
 VAR_3 = VAR_0.areasettings[VAR_2].cluster;
 VAR_2 = VAR_0.areasettings[VAR_2].clusterareanum;
 if (VAR_3 < 0)
 {
  VAR_3 = VAR_0.portals[-VAR_3].frontcluster;
  VAR_2 = VAR_0.portals[-VAR_3].clusterareanum[0];
 }

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  VAR_5 += VAR_0.clusters[VAR_4].numreachabilityareas;
 }
 VAR_5 += VAR_2;
 return VAR_5;
}
