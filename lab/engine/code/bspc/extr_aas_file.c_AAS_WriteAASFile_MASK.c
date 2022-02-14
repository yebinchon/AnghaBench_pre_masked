
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
typedef int aas_vertex_t ;
typedef int aas_reachability_t ;
typedef int aas_portalindex_t ;
typedef int aas_portal_t ;
typedef int aas_plane_t ;
typedef int aas_node_t ;
struct TYPE_6__ {void* bspchecksum; void* version; void* ident; } ;
typedef TYPE_1__ aas_header_t ;
typedef int aas_faceindex_t ;
typedef int aas_face_t ;
typedef int aas_edgeindex_t ;
typedef int aas_edge_t ;
typedef int aas_cluster_t ;
typedef int aas_bbox_t ;
typedef int aas_areasettings_t ;
typedef int aas_area_t ;
struct TYPE_7__ {int numbboxes; int numvertexes; int numplanes; int numedges; int edgeindexsize; int numfaces; int faceindexsize; int numareas; int numareasettings; int reachabilitysize; int numnodes; int numportals; int portalindexsize; int numclusters; int clusters; int portalindex; int portals; int nodes; int reachability; int areasettings; int areas; int faceindex; int faces; int edgeindex; int edges; int planes; int vertexes; int bboxes; int bspchecksum; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_1__*,int ,int ,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int VAR_16 ;
 TYPE_4__ VAR_17 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int,int,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

qboolean FUNC_11(char *VAR_18)
{
 aas_header_t VAR_19;
 FILE *VAR_20;

 FUNC_5("writing %s\n", VAR_18);
 FUNC_1();

 FUNC_2();

 FUNC_10(&VAR_19, 0, sizeof(aas_header_t));
 VAR_19.ident = FUNC_4(VAR_0);
 VAR_19.version = FUNC_4(VAR_15);
 VAR_19.bspchecksum = FUNC_4(VAR_17.bspchecksum);

 VAR_20 = FUNC_7(VAR_18, "wb");
 if (!VAR_20)
 {
  FUNC_5("error opening %s\n", VAR_18);
  return 0;
 }

 if (FUNC_9(&VAR_19, sizeof(aas_header_t), 1, VAR_20) < 1)
 {
  FUNC_6(VAR_20);
  return 0;
 }

 if (!FUNC_3(VAR_20, &VAR_19, VAR_3, VAR_17.bboxes,
  VAR_17.numbboxes * sizeof(aas_bbox_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_14, VAR_17.vertexes,
  VAR_17.numvertexes * sizeof(aas_vertex_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_10, VAR_17.planes,
  VAR_17.numplanes * sizeof(aas_plane_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_6, VAR_17.edges,
  VAR_17.numedges * sizeof(aas_edge_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_5, VAR_17.edgeindex,
  VAR_17.edgeindexsize * sizeof(aas_edgeindex_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_8, VAR_17.faces,
  VAR_17.numfaces * sizeof(aas_face_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_7, VAR_17.faceindex,
  VAR_17.faceindexsize * sizeof(aas_faceindex_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_1, VAR_17.areas,
  VAR_17.numareas * sizeof(aas_area_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_2, VAR_17.areasettings,
  VAR_17.numareasettings * sizeof(aas_areasettings_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_13, VAR_17.reachability,
  VAR_17.reachabilitysize * sizeof(aas_reachability_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_9, VAR_17.nodes,
  VAR_17.numnodes * sizeof(aas_node_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_12, VAR_17.portals,
  VAR_17.numportals * sizeof(aas_portal_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_11, VAR_17.portalindex,
  VAR_17.portalindexsize * sizeof(aas_portalindex_t))) return 0;
 if (!FUNC_3(VAR_20, &VAR_19, VAR_4, VAR_17.clusters,
  VAR_17.numclusters * sizeof(aas_cluster_t))) return 0;

 FUNC_8(VAR_20, 0, VAR_16);
 FUNC_0((unsigned char *) &VAR_19 + 8, sizeof(aas_header_t) - 8);
 if (FUNC_9(&VAR_19, sizeof(aas_header_t), 1, VAR_20) < 1)
 {
  FUNC_6(VAR_20);
  return 0;
 }

 FUNC_6(VAR_20);
 return 1;
}
