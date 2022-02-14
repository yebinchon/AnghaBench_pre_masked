
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ident; int numareas; int numclusters; scalar_t__ areacrc; scalar_t__ clustercrc; int numportalcache; int numareacache; int version; } ;
typedef TYPE_1__ routecacheheader_t ;
typedef int fileHandle_t ;
struct TYPE_8__ {size_t areanum; size_t cluster; struct TYPE_8__* prev; struct TYPE_8__* next; } ;
typedef TYPE_2__ aas_routingcache_t ;
typedef int aas_cluster_t ;
typedef int aas_area_t ;
struct TYPE_10__ {int numareas; int numclusters; TYPE_2__*** clusterareacache; TYPE_2__** portalcache; scalar_t__ clusters; scalar_t__ areas; int mapname; } ;
struct TYPE_9__ {int (* FS_FCloseFile ) (int ) ;int (* FS_Read ) (TYPE_1__*,int,int ) ;int (* FS_FOpenFile ) (char*,int *,int ) ;} ;


 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char*,char*,...) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,int *,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(void)
{
 int VAR_8, VAR_9;
 fileHandle_t VAR_10;
 char VAR_11[VAR_1];
 routecacheheader_t VAR_12;
 aas_routingcache_t *VAR_13;

 FUNC_4(VAR_11, VAR_1, "maps/%s.rcd", VAR_4.mapname);
 VAR_5.FS_FOpenFile( VAR_11, &VAR_10, VAR_0 );
 if (!VAR_10)
 {
  return VAR_6;
 }
 VAR_5.FS_Read(&VAR_12, sizeof(routecacheheader_t), VAR_10 );
 if (VAR_12.ident != VAR_2)
 {
  FUNC_1("%s is not a route cache dump\n", VAR_11);
  return VAR_6;
 }
 if (VAR_12.version != VAR_3)
 {
  FUNC_1("route cache dump has wrong version %d, should be %d\n", VAR_12.version, VAR_3);
  return VAR_6;
 }
 if (VAR_12.numareas != VAR_4.numareas)
 {

  return VAR_6;
 }
 if (VAR_12.numclusters != VAR_4.numclusters)
 {

  return VAR_6;
 }
 if (VAR_12.areacrc !=
  FUNC_3( (unsigned char *)VAR_4.areas, sizeof(aas_area_t) * VAR_4.numareas ))
 {

  return VAR_6;
 }
 if (VAR_12.clustercrc !=
  FUNC_3( (unsigned char *)VAR_4.clusters, sizeof(aas_cluster_t) * VAR_4.numclusters ))
 {

  return VAR_6;
 }

 for (VAR_8 = 0; VAR_8 < VAR_12.numportalcache; VAR_8++)
 {
  VAR_13 = FUNC_2(VAR_10);
  VAR_13->next = VAR_4.portalcache[VAR_13->areanum];
  VAR_13->prev = ((void*)0);
  if (VAR_4.portalcache[VAR_13->areanum])
   VAR_4.portalcache[VAR_13->areanum]->prev = VAR_13;
  VAR_4.portalcache[VAR_13->areanum] = VAR_13;
 }

 for (VAR_8 = 0; VAR_8 < VAR_12.numareacache; VAR_8++)
 {
  VAR_13 = FUNC_2(VAR_10);
  VAR_9 = FUNC_0(VAR_13->cluster, VAR_13->areanum);
  VAR_13->next = VAR_4.clusterareacache[VAR_13->cluster][VAR_9];
  VAR_13->prev = ((void*)0);
  if (VAR_4.clusterareacache[VAR_13->cluster][VAR_9])
   VAR_4.clusterareacache[VAR_13->cluster][VAR_9]->prev = VAR_13;
  VAR_4.clusterareacache[VAR_13->cluster][VAR_9] = VAR_13;
 }
 VAR_5.FS_FCloseFile(VAR_10);
 return VAR_7;
}
