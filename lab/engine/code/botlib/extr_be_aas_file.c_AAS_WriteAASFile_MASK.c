
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
typedef int fileHandle_t ;
typedef int aas_vertex_t ;
typedef int aas_reachability_t ;
typedef int aas_portalindex_t ;
typedef int aas_portal_t ;
typedef int aas_plane_t ;
typedef int aas_node_t ;
struct TYPE_8__ {void* bspchecksum; void* version; void* ident; } ;
typedef TYPE_1__ aas_header_t ;
typedef int aas_faceindex_t ;
typedef int aas_face_t ;
typedef int aas_edgeindex_t ;
typedef int aas_edge_t ;
typedef int aas_cluster_t ;
typedef int aas_bbox_t ;
typedef int aas_areasettings_t ;
typedef int aas_area_t ;
struct TYPE_10__ {int numbboxes; int numvertexes; int numplanes; int numedges; int edgeindexsize; int numfaces; int faceindexsize; int numareas; int numareasettings; int reachabilitysize; int numnodes; int numportals; int portalindexsize; int numclusters; int clusters; int portalindex; int portals; int nodes; int reachability; int areasettings; int areas; int faceindex; int faces; int edgeindex; int edges; int planes; int vertexes; int bboxes; int bspchecksum; } ;
struct TYPE_9__ {int (* FS_FCloseFile ) (int ) ;int (* FS_Write ) (TYPE_1__*,int,int ) ;int (* FS_Seek ) (int ,int ,int ) ;int (* Print ) (int ,char*,char*) ;int (* FS_FOpenFile ) (char*,int *,int ) ;} ;


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
 int FUNC_2 (int ,TYPE_1__*,int ,int ,int) ;
 int VAR_16 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_4 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_5__ VAR_21 ;
 TYPE_4__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*,int *,int ) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_1__*,int,int ) ;
 int FUNC_11 (int ) ;

qboolean FUNC_12(char *VAR_25)
{
 aas_header_t VAR_26;
 fileHandle_t VAR_27;

 VAR_22.Print(VAR_20, "writing %s\n", VAR_25);

 FUNC_1();

 FUNC_3(&VAR_26, 0, sizeof(aas_header_t));
 VAR_26.ident = FUNC_4(VAR_0);
 VAR_26.version = FUNC_4(VAR_15);
 VAR_26.bspchecksum = FUNC_4(VAR_21.bspchecksum);

 VAR_22.FS_FOpenFile( VAR_25, &VAR_27, VAR_18 );
 if (!VAR_27)
 {
  VAR_22.Print(VAR_19, "error opening %s\n", VAR_25);
  return VAR_23;
 }

 VAR_22.FS_Write(&VAR_26, sizeof(aas_header_t), VAR_27);
 VAR_16 = sizeof(aas_header_t);

 if (!FUNC_2(VAR_27, &VAR_26, VAR_3, VAR_21.bboxes,
  VAR_21.numbboxes * sizeof(aas_bbox_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_14, VAR_21.vertexes,
  VAR_21.numvertexes * sizeof(aas_vertex_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_10, VAR_21.planes,
  VAR_21.numplanes * sizeof(aas_plane_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_6, VAR_21.edges,
  VAR_21.numedges * sizeof(aas_edge_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_5, VAR_21.edgeindex,
  VAR_21.edgeindexsize * sizeof(aas_edgeindex_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_8, VAR_21.faces,
  VAR_21.numfaces * sizeof(aas_face_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_7, VAR_21.faceindex,
  VAR_21.faceindexsize * sizeof(aas_faceindex_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_1, VAR_21.areas,
  VAR_21.numareas * sizeof(aas_area_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_2, VAR_21.areasettings,
  VAR_21.numareasettings * sizeof(aas_areasettings_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_13, VAR_21.reachability,
  VAR_21.reachabilitysize * sizeof(aas_reachability_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_9, VAR_21.nodes,
  VAR_21.numnodes * sizeof(aas_node_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_12, VAR_21.portals,
  VAR_21.numportals * sizeof(aas_portal_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_11, VAR_21.portalindex,
  VAR_21.portalindexsize * sizeof(aas_portalindex_t))) return VAR_23;
 if (!FUNC_2(VAR_27, &VAR_26, VAR_4, VAR_21.clusters,
  VAR_21.numclusters * sizeof(aas_cluster_t))) return VAR_23;

 VAR_22.FS_Seek(VAR_27, 0, VAR_17);
 FUNC_0((unsigned char *) &VAR_26 + 8, sizeof(aas_header_t) - 8);
 VAR_22.FS_Write(&VAR_26, sizeof(aas_header_t), VAR_27);

 VAR_22.FS_FCloseFile(VAR_27);
 return VAR_24;
}
