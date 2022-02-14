
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_22__ {void** clusterareanum; void* backcluster; void* frontcluster; void* areanum; } ;
struct TYPE_21__ {void** children; void* planenum; } ;
struct TYPE_20__ {int traveltime; void* traveltype; void** end; void** start; void* edgenum; void* facenum; void* areanum; } ;
struct TYPE_19__ {void* firstreachablearea; void* numreachableareas; void* clusterareanum; void* cluster; void* presencetype; void* areaflags; void* contents; } ;
struct TYPE_18__ {void** center; void** maxs; void** mins; void* firstface; void* numfaces; void* areanum; } ;
struct TYPE_17__ {void* backarea; void* frontarea; void* firstedge; void* numedges; void* faceflags; void* planenum; } ;
struct TYPE_16__ {void** v; } ;
struct TYPE_15__ {void* type; void* dist; void** normal; } ;
struct TYPE_14__ {void** maxs; void** mins; void* flags; void* presencetype; } ;
struct TYPE_13__ {int numbboxes; int numvertexes; int numplanes; int numedges; int edgeindexsize; int numfaces; int faceindexsize; int numareas; int numareasettings; int reachabilitysize; int numnodes; int numportals; int portalindexsize; int numclusters; TYPE_10__* clusters; void** portalindex; TYPE_9__* portals; TYPE_8__* nodes; TYPE_7__* reachability; TYPE_6__* areasettings; TYPE_5__* areas; void** faceindex; TYPE_4__* faces; void** edgeindex; TYPE_3__* edges; TYPE_2__* planes; void*** vertexes; TYPE_1__* bboxes; } ;
struct TYPE_12__ {void* firstportal; void* numportals; void* numreachabilityareas; void* numareas; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 TYPE_11__ VAR_0 ;

void FUNC_3(void)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0.numbboxes; VAR_1++)
 {
  VAR_0.bboxes[VAR_1].presencetype = FUNC_1(VAR_0.bboxes[VAR_1].presencetype);
  VAR_0.bboxes[VAR_1].flags = FUNC_1(VAR_0.bboxes[VAR_1].flags);
  for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  {
   VAR_0.bboxes[VAR_1].mins[VAR_2] = FUNC_0(VAR_0.bboxes[VAR_1].mins[VAR_2]);
   VAR_0.bboxes[VAR_1].maxs[VAR_2] = FUNC_0(VAR_0.bboxes[VAR_1].maxs[VAR_2]);
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.numvertexes; VAR_1++)
 {
  for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
   VAR_0.vertexes[VAR_1][VAR_2] = FUNC_0(VAR_0.vertexes[VAR_1][VAR_2]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.numplanes; VAR_1++)
 {
  for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
   VAR_0.planes[VAR_1].normal[VAR_2] = FUNC_0(VAR_0.planes[VAR_1].normal[VAR_2]);
  VAR_0.planes[VAR_1].dist = FUNC_0(VAR_0.planes[VAR_1].dist);
  VAR_0.planes[VAR_1].type = FUNC_1(VAR_0.planes[VAR_1].type);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.numedges; VAR_1++)
 {
  VAR_0.edges[VAR_1].v[0] = FUNC_1(VAR_0.edges[VAR_1].v[0]);
  VAR_0.edges[VAR_1].v[1] = FUNC_1(VAR_0.edges[VAR_1].v[1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.edgeindexsize; VAR_1++)
 {
  VAR_0.edgeindex[VAR_1] = FUNC_1(VAR_0.edgeindex[VAR_1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.numfaces; VAR_1++)
 {
  VAR_0.faces[VAR_1].planenum = FUNC_1(VAR_0.faces[VAR_1].planenum);
  VAR_0.faces[VAR_1].faceflags = FUNC_1(VAR_0.faces[VAR_1].faceflags);
  VAR_0.faces[VAR_1].numedges = FUNC_1(VAR_0.faces[VAR_1].numedges);
  VAR_0.faces[VAR_1].firstedge = FUNC_1(VAR_0.faces[VAR_1].firstedge);
  VAR_0.faces[VAR_1].frontarea = FUNC_1(VAR_0.faces[VAR_1].frontarea);
  VAR_0.faces[VAR_1].backarea = FUNC_1(VAR_0.faces[VAR_1].backarea);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.faceindexsize; VAR_1++)
 {
  VAR_0.faceindex[VAR_1] = FUNC_1(VAR_0.faceindex[VAR_1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.numareas; VAR_1++)
 {
  VAR_0.areas[VAR_1].areanum = FUNC_1(VAR_0.areas[VAR_1].areanum);
  VAR_0.areas[VAR_1].numfaces = FUNC_1(VAR_0.areas[VAR_1].numfaces);
  VAR_0.areas[VAR_1].firstface = FUNC_1(VAR_0.areas[VAR_1].firstface);
  for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  {
   VAR_0.areas[VAR_1].mins[VAR_2] = FUNC_0(VAR_0.areas[VAR_1].mins[VAR_2]);
   VAR_0.areas[VAR_1].maxs[VAR_2] = FUNC_0(VAR_0.areas[VAR_1].maxs[VAR_2]);
   VAR_0.areas[VAR_1].center[VAR_2] = FUNC_0(VAR_0.areas[VAR_1].center[VAR_2]);
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.numareasettings; VAR_1++)
 {
  VAR_0.areasettings[VAR_1].contents = FUNC_1(VAR_0.areasettings[VAR_1].contents);
  VAR_0.areasettings[VAR_1].areaflags = FUNC_1(VAR_0.areasettings[VAR_1].areaflags);
  VAR_0.areasettings[VAR_1].presencetype = FUNC_1(VAR_0.areasettings[VAR_1].presencetype);
  VAR_0.areasettings[VAR_1].cluster = FUNC_1(VAR_0.areasettings[VAR_1].cluster);
  VAR_0.areasettings[VAR_1].clusterareanum = FUNC_1(VAR_0.areasettings[VAR_1].clusterareanum);
  VAR_0.areasettings[VAR_1].numreachableareas = FUNC_1(VAR_0.areasettings[VAR_1].numreachableareas);
  VAR_0.areasettings[VAR_1].firstreachablearea = FUNC_1(VAR_0.areasettings[VAR_1].firstreachablearea);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.reachabilitysize; VAR_1++)
 {
  VAR_0.reachability[VAR_1].areanum = FUNC_1(VAR_0.reachability[VAR_1].areanum);
  VAR_0.reachability[VAR_1].facenum = FUNC_1(VAR_0.reachability[VAR_1].facenum);
  VAR_0.reachability[VAR_1].edgenum = FUNC_1(VAR_0.reachability[VAR_1].edgenum);
  for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  {
   VAR_0.reachability[VAR_1].start[VAR_2] = FUNC_0(VAR_0.reachability[VAR_1].start[VAR_2]);
   VAR_0.reachability[VAR_1].end[VAR_2] = FUNC_0(VAR_0.reachability[VAR_1].end[VAR_2]);
  }
  VAR_0.reachability[VAR_1].traveltype = FUNC_1(VAR_0.reachability[VAR_1].traveltype);
  VAR_0.reachability[VAR_1].traveltime = FUNC_2(VAR_0.reachability[VAR_1].traveltime);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.numnodes; VAR_1++)
 {
  VAR_0.nodes[VAR_1].planenum = FUNC_1(VAR_0.nodes[VAR_1].planenum);
  VAR_0.nodes[VAR_1].children[0] = FUNC_1(VAR_0.nodes[VAR_1].children[0]);
  VAR_0.nodes[VAR_1].children[1] = FUNC_1(VAR_0.nodes[VAR_1].children[1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.numportals; VAR_1++)
 {
  VAR_0.portals[VAR_1].areanum = FUNC_1(VAR_0.portals[VAR_1].areanum);
  VAR_0.portals[VAR_1].frontcluster = FUNC_1(VAR_0.portals[VAR_1].frontcluster);
  VAR_0.portals[VAR_1].backcluster = FUNC_1(VAR_0.portals[VAR_1].backcluster);
  VAR_0.portals[VAR_1].clusterareanum[0] = FUNC_1(VAR_0.portals[VAR_1].clusterareanum[0]);
  VAR_0.portals[VAR_1].clusterareanum[1] = FUNC_1(VAR_0.portals[VAR_1].clusterareanum[1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.portalindexsize; VAR_1++)
 {
  VAR_0.portalindex[VAR_1] = FUNC_1(VAR_0.portalindex[VAR_1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.numclusters; VAR_1++)
 {
  VAR_0.clusters[VAR_1].numareas = FUNC_1(VAR_0.clusters[VAR_1].numareas);
  VAR_0.clusters[VAR_1].numreachabilityareas = FUNC_1(VAR_0.clusters[VAR_1].numreachabilityareas);
  VAR_0.clusters[VAR_1].numportals = FUNC_1(VAR_0.clusters[VAR_1].numportals);
  VAR_0.clusters[VAR_1].firstportal = FUNC_1(VAR_0.clusters[VAR_1].firstportal);
 }
}
