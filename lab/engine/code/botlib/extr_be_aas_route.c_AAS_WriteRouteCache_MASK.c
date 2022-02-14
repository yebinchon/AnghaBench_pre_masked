
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int numareas; int numclusters; int numportalcache; int numareacache; int size; struct TYPE_9__* next; void* clustercrc; void* areacrc; int version; int ident; } ;
typedef TYPE_1__ routecacheheader_t ;
typedef int fileHandle_t ;
typedef TYPE_1__ aas_routingcache_t ;
struct TYPE_10__ {int numareas; } ;
typedef TYPE_3__ aas_cluster_t ;
typedef int aas_area_t ;
struct TYPE_12__ {int numareas; int numclusters; TYPE_1__*** clusterareacache; TYPE_3__* clusters; TYPE_1__** portalcache; scalar_t__ areas; int mapname; } ;
struct TYPE_11__ {int (* Print ) (int ,char*,int) ;int (* FS_FCloseFile ) (int ) ;int (* FS_Write ) (TYPE_1__*,int,int ) ;int (* FS_FOpenFile ) (char*,int *,int ) ;} ;


 int FUNC_0 (char*,char*) ;
 void* FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__ VAR_5 ;
 TYPE_7__ VAR_6 ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (int ,char*,int) ;

void FUNC_10(void)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 aas_routingcache_t *VAR_12;
 aas_cluster_t *VAR_13;
 fileHandle_t VAR_14;
 char VAR_15[VAR_1];
 routecacheheader_t VAR_16;

 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5.numareas; VAR_7++)
 {
  for (VAR_12 = VAR_5.portalcache[VAR_7]; VAR_12; VAR_12 = VAR_12->next)
  {
   VAR_9++;
  }
 }
 VAR_10 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5.numclusters; VAR_7++)
 {
  VAR_13 = &VAR_5.clusters[VAR_7];
  for (VAR_8 = 0; VAR_8 < VAR_13->numareas; VAR_8++)
  {
   for (VAR_12 = VAR_5.clusterareacache[VAR_7][VAR_8]; VAR_12; VAR_12 = VAR_12->next)
   {
    VAR_10++;
   }
  }
 }

 FUNC_2(VAR_15, VAR_1, "maps/%s.rcd", VAR_5.mapname);
 VAR_6.FS_FOpenFile( VAR_15, &VAR_14, VAR_0 );
 if (!VAR_14)
 {
  FUNC_0("Unable to open file: %s\n", VAR_15);
  return;
 }

 VAR_16.ident = VAR_3;
 VAR_16.version = VAR_4;
 VAR_16.numareas = VAR_5.numareas;
 VAR_16.numclusters = VAR_5.numclusters;
 VAR_16.areacrc = FUNC_1( (unsigned char *)VAR_5.areas, sizeof(aas_area_t) * VAR_5.numareas );
 VAR_16.clustercrc = FUNC_1( (unsigned char *)VAR_5.clusters, sizeof(aas_cluster_t) * VAR_5.numclusters );
 VAR_16.numportalcache = VAR_9;
 VAR_16.numareacache = VAR_10;

 VAR_6.FS_Write(&VAR_16, sizeof(routecacheheader_t), VAR_14);

 VAR_11 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5.numareas; VAR_7++)
 {
  for (VAR_12 = VAR_5.portalcache[VAR_7]; VAR_12; VAR_12 = VAR_12->next)
  {
   VAR_6.FS_Write(VAR_12, VAR_12->size, VAR_14);
   VAR_11 += VAR_12->size;
  }
 }
 for (VAR_7 = 0; VAR_7 < VAR_5.numclusters; VAR_7++)
 {
  VAR_13 = &VAR_5.clusters[VAR_7];
  for (VAR_8 = 0; VAR_8 < VAR_13->numareas; VAR_8++)
  {
   for (VAR_12 = VAR_5.clusterareacache[VAR_7][VAR_8]; VAR_12; VAR_12 = VAR_12->next)
   {
    VAR_6.FS_Write(VAR_12, VAR_12->size, VAR_14);
    VAR_11 += VAR_12->size;
   }
  }
 }
 VAR_6.FS_FCloseFile(VAR_14);
 VAR_6.Print(VAR_2, "\nroute cache written to %s\n", VAR_15);
 VAR_6.Print(VAR_2, "written %d bytes of routing cache\n", VAR_11);
}
