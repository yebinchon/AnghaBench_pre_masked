
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int aas_vertex_t ;
typedef int aas_reachability_t ;
typedef int aas_portalindex_t ;
typedef int aas_portal_t ;
typedef int aas_plane_t ;
typedef int aas_node_t ;
typedef int aas_faceindex_t ;
typedef int aas_face_t ;
typedef int aas_edgeindex_t ;
typedef int aas_edge_t ;
typedef int aas_cluster_t ;
typedef int aas_bbox_t ;
typedef int aas_areasettings_t ;
typedef int aas_area_t ;
struct TYPE_4__ {int * clusters; scalar_t__ numclusters; int * portalindex; scalar_t__ portalindexsize; int * portals; scalar_t__ numportals; int * nodes; scalar_t__ numnodes; int * reachability; scalar_t__ reachabilitysize; int * areasettings; scalar_t__ numareasettings; int * areas; scalar_t__ numareas; int * faceindex; scalar_t__ faceindexsize; int * faces; scalar_t__ numfaces; int * edgeindex; scalar_t__ edgeindexsize; int * edges; scalar_t__ numedges; int * planes; scalar_t__ numplanes; int * vertexes; scalar_t__ numvertexes; int * bboxes; scalar_t__ numbboxes; } ;
struct TYPE_3__ {int max_bboxes; int max_vertexes; int max_planes; int max_edges; int max_edgeindexsize; int max_faces; int max_faceindexsize; int max_areas; int max_areasettings; int max_reachabilitysize; int max_nodes; int max_portals; int max_portalindexsize; int max_clusters; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;

void FUNC_4(void)
{
 int VAR_12;

 FUNC_0();

 VAR_9.numbboxes = 0;
 VAR_9.bboxes = (aas_bbox_t *) FUNC_1(VAR_11.max_bboxes * sizeof(aas_bbox_t));
 VAR_10 += VAR_11.max_bboxes * sizeof(aas_bbox_t);

 VAR_9.numvertexes = 0;
 VAR_9.vertexes = (aas_vertex_t *) FUNC_1(VAR_11.max_vertexes * sizeof(aas_vertex_t));
 VAR_10 += VAR_11.max_vertexes * sizeof(aas_vertex_t);

 VAR_9.numplanes = 0;
 VAR_9.planes = (aas_plane_t *) FUNC_1(VAR_11.max_planes * sizeof(aas_plane_t));
 VAR_10 += VAR_11.max_planes * sizeof(aas_plane_t);

 VAR_9.numedges = 0;
 VAR_9.edges = (aas_edge_t *) FUNC_1(VAR_11.max_edges * sizeof(aas_edge_t));
 VAR_10 += VAR_11.max_edges * sizeof(aas_edge_t);

 VAR_9.edgeindexsize = 0;
 VAR_9.edgeindex = (aas_edgeindex_t *) FUNC_1(VAR_11.max_edgeindexsize * sizeof(aas_edgeindex_t));
 VAR_10 += VAR_11.max_edgeindexsize * sizeof(aas_edgeindex_t);

 VAR_9.numfaces = 0;
 VAR_9.faces = (aas_face_t *) FUNC_1(VAR_11.max_faces * sizeof(aas_face_t));
 VAR_10 += VAR_11.max_faces * sizeof(aas_face_t);

 VAR_9.faceindexsize = 0;
 VAR_9.faceindex = (aas_faceindex_t *) FUNC_1(VAR_11.max_faceindexsize * sizeof(aas_faceindex_t));
 VAR_10 += VAR_11.max_faceindexsize * sizeof(aas_faceindex_t);

 VAR_9.numareas = 0;
 VAR_9.areas = (aas_area_t *) FUNC_1(VAR_11.max_areas * sizeof(aas_area_t));
 VAR_10 += VAR_11.max_areas * sizeof(aas_area_t);

 VAR_9.numareasettings = 0;
 VAR_9.areasettings = (aas_areasettings_t *) FUNC_1(VAR_11.max_areasettings * sizeof(aas_areasettings_t));
 VAR_10 += VAR_11.max_areasettings * sizeof(aas_areasettings_t);

 VAR_9.reachabilitysize = 0;
 VAR_9.reachability = (aas_reachability_t *) FUNC_1(VAR_11.max_reachabilitysize * sizeof(aas_reachability_t));
 VAR_10 += VAR_11.max_reachabilitysize * sizeof(aas_reachability_t);

 VAR_9.numnodes = 0;
 VAR_9.nodes = (aas_node_t *) FUNC_1(VAR_11.max_nodes * sizeof(aas_node_t));
 VAR_10 += VAR_11.max_nodes * sizeof(aas_node_t);

 VAR_9.numportals = 0;
 VAR_9.portals = (aas_portal_t *) FUNC_1(VAR_11.max_portals * sizeof(aas_portal_t));
 VAR_10 += VAR_11.max_portals * sizeof(aas_portal_t);

 VAR_9.portalindexsize = 0;
 VAR_9.portalindex = (aas_portalindex_t *) FUNC_1(VAR_11.max_portalindexsize * sizeof(aas_portalindex_t));
 VAR_10 += VAR_11.max_portalindexsize * sizeof(aas_portalindex_t);

 VAR_9.numclusters = 0;
 VAR_9.clusters = (aas_cluster_t *) FUNC_1(VAR_11.max_clusters * sizeof(aas_cluster_t));
 VAR_10 += VAR_11.max_clusters * sizeof(aas_cluster_t);

 FUNC_2("allocated ");
 FUNC_3(VAR_10);
 FUNC_2(" of AAS memory\n");

 VAR_8 = (int *) FUNC_1(VAR_11.max_vertexes * sizeof(int));
 VAR_7 = (int *) FUNC_1(VAR_11.max_planes * sizeof(int));
 VAR_3 = (int *) FUNC_1(VAR_11.max_edges * sizeof(int));

 for (VAR_12 = 0; VAR_12 < VAR_11.max_vertexes; VAR_12++) VAR_8[VAR_12] = -1;
 for (VAR_12 = 0; VAR_12 < VAR_2 * VAR_2; VAR_12++) VAR_6[VAR_12] = -1;

 for (VAR_12 = 0; VAR_12 < VAR_11.max_planes; VAR_12++) VAR_7[VAR_12] = -1;
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) VAR_5[VAR_12] = -1;

 for (VAR_12 = 0; VAR_12 < VAR_11.max_edges; VAR_12++) VAR_3[VAR_12] = -1;
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) VAR_4[VAR_12] = -1;
}
