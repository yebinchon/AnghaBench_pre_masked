
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vec3_t ;
struct TYPE_11__ {int* traveltimes; int* reachabilities; } ;
typedef TYPE_2__ aas_routingcache_t ;
struct TYPE_12__ {int start; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_13__ {int frontcluster; int backcluster; int areanum; } ;
typedef TYPE_4__ aas_portal_t ;
struct TYPE_14__ {int numreachabilityareas; int numportals; int firstportal; } ;
typedef TYPE_5__ aas_cluster_t ;
struct TYPE_16__ {int numareas; int* portalindex; TYPE_3__* reachability; TYPE_1__* areasettings; scalar_t__* portalmaxtraveltimes; TYPE_4__* portals; TYPE_5__* clusters; int initialized; } ;
struct TYPE_15__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_10__ {int cluster; int firstreachablearea; int numreachableareas; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned short FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int,int,int) ;
 TYPE_2__* FUNC_5 (int,int,int) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,int) ;

int FUNC_9(int VAR_7, vec3_t VAR_8, int VAR_9, int VAR_10, int *VAR_11, int *VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned short int VAR_19, VAR_20;
 aas_portal_t *VAR_21;
 aas_cluster_t *VAR_22;
 aas_routingcache_t *VAR_23, *VAR_24;
 aas_reachability_t *VAR_25;

 if (!VAR_2.initialized) return VAR_5;

 if (VAR_7 == VAR_9)
 {
  *VAR_11 = 1;
  *VAR_12 = 0;
  return VAR_6;
 }

 if (VAR_7 <= 0 || VAR_7 >= VAR_2.numareas)
 {
  if (VAR_3)
  {
   VAR_4.Print(VAR_0, "AAS_AreaTravelTimeToGoalArea: areanum %d out of range\n", VAR_7);
  }
  return VAR_5;
 }
 if (VAR_9 <= 0 || VAR_9 >= VAR_2.numareas)
 {
  if (VAR_3)
  {
   VAR_4.Print(VAR_0, "AAS_AreaTravelTimeToGoalArea: goalareanum %d out of range\n", VAR_9);
  }
  return VAR_5;
 }
 if (!VAR_2.areasettings[VAR_7].numreachableareas || !VAR_2.areasettings[VAR_9].numreachableareas)
 {
  return VAR_5;
 }

 while(FUNC_6() < 1 * 1024 * 1024) {
  if (!FUNC_3()) break;
 }

 if (FUNC_0(VAR_7) || FUNC_0(VAR_9))
 {
  VAR_10 |= VAR_1;
 }
 VAR_13 = VAR_2.areasettings[VAR_7].cluster;
 VAR_14 = VAR_2.areasettings[VAR_9].cluster;

 if (VAR_13 < 0 && VAR_14 > 0)
 {
  VAR_21 = &VAR_2.portals[-VAR_13];
  if (VAR_21->frontcluster == VAR_14 ||
    VAR_21->backcluster == VAR_14)
  {
   VAR_13 = VAR_14;
  }
 }

 else if (VAR_13 > 0 && VAR_14 < 0)
 {
  VAR_21 = &VAR_2.portals[-VAR_14];
  if (VAR_21->frontcluster == VAR_13 ||
    VAR_21->backcluster == VAR_13)
  {
   VAR_14 = VAR_13;
  }
 }


 if (VAR_13 > 0 && VAR_14 > 0 && VAR_13 == VAR_14)
 {

  VAR_23 = FUNC_4(VAR_13, VAR_9, VAR_10);

  VAR_17 = FUNC_2(VAR_13, VAR_7);

  VAR_22 = &VAR_2.clusters[VAR_13];

  if (VAR_17 >= VAR_22->numreachabilityareas) return 0;

  if (VAR_23->traveltimes[VAR_17] != 0)
  {
   *VAR_12 = VAR_2.areasettings[VAR_7].firstreachablearea +
       VAR_23->reachabilities[VAR_17];
   if (!VAR_8) {
    *VAR_11 = VAR_23->traveltimes[VAR_17];
    return VAR_6;
   }
   VAR_25 = &VAR_2.reachability[*VAR_12];
   *VAR_11 = VAR_23->traveltimes[VAR_17] +
       FUNC_1(VAR_7, VAR_8, VAR_25->start);

   return VAR_6;
  }
 }

 VAR_13 = VAR_2.areasettings[VAR_7].cluster;
 VAR_14 = VAR_2.areasettings[VAR_9].cluster;

 if (VAR_14 < 0)
 {

  VAR_21 = &VAR_2.portals[-VAR_14];
  VAR_14 = VAR_21->frontcluster;
 }

 VAR_24 = FUNC_5(VAR_14, VAR_9, VAR_10);

 if (VAR_13 < 0)
 {
  *VAR_11 = VAR_24->traveltimes[-VAR_13];
  *VAR_12 = VAR_2.areasettings[VAR_7].firstreachablearea +
      VAR_24->reachabilities[-VAR_13];
  return VAR_6;
 }

 VAR_20 = 0;
 VAR_18 = -1;

 VAR_22 = &VAR_2.clusters[VAR_13];

 for (VAR_16 = 0; VAR_16 < VAR_22->numportals; VAR_16++)
 {
  VAR_15 = VAR_2.portalindex[VAR_22->firstportal + VAR_16];

  if (!VAR_24->traveltimes[VAR_15]) continue;

  VAR_21 = &VAR_2.portals[VAR_15];

  VAR_23 = FUNC_4(VAR_13, VAR_21->areanum, VAR_10);

  VAR_17 = FUNC_2(VAR_13, VAR_7);

  if (VAR_17 >= VAR_22->numreachabilityareas) continue;

  if (!VAR_23->traveltimes[VAR_17]) continue;


  VAR_19 = VAR_24->traveltimes[VAR_15] + VAR_23->traveltimes[VAR_17];





  VAR_19 += VAR_2.portalmaxtraveltimes[VAR_15];

  if (VAR_8)
  {
   *VAR_12 = VAR_2.areasettings[VAR_7].firstreachablearea +
       VAR_23->reachabilities[VAR_17];
   VAR_25 = VAR_2.reachability + *VAR_12;
   VAR_19 += FUNC_1(VAR_7, VAR_8, VAR_25->start);
  }

  if (!VAR_20 || VAR_19 < VAR_20)
  {
   VAR_18 = *VAR_12;
   VAR_20 = VAR_19;
  }
 }
 if (VAR_18 < 0) {
  return VAR_5;
 }
 *VAR_12 = VAR_18;
 *VAR_11 = VAR_20;
 return VAR_6;
}
