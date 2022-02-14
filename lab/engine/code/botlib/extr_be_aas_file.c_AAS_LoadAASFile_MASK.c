
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fileHandle_t ;
typedef int aas_vertex_t ;
typedef int aas_reachability_t ;
typedef int aas_portalindex_t ;
typedef int aas_portal_t ;
typedef int aas_plane_t ;
typedef int aas_node_t ;
struct TYPE_7__ {scalar_t__ ident; scalar_t__ version; scalar_t__ bspchecksum; TYPE_1__* lumps; } ;
typedef TYPE_2__ aas_header_t ;
typedef int aas_faceindex_t ;
typedef int aas_face_t ;
typedef int aas_edgeindex_t ;
typedef int aas_edge_t ;
typedef int aas_cluster_t ;
typedef int aas_bbox_t ;
typedef int aas_areasettings_t ;
typedef int aas_area_t ;
struct TYPE_9__ {scalar_t__ bspchecksum; int numbboxes; int numvertexes; int numplanes; int numedges; int edgeindexsize; int numfaces; int faceindexsize; int numareas; int numareasettings; int reachabilitysize; int numnodes; int numportals; int portalindexsize; int numclusters; int loaded; int * clusters; int * portalindex; int * portals; int * nodes; int * reachability; int * areasettings; int * areas; int * faceindex; int * faces; int * edgeindex; int * edges; int * planes; int * vertexes; int * bboxes; } ;
struct TYPE_8__ {int (* FS_FCloseFile ) (int ) ;int (* FS_Read ) (TYPE_2__*,int,int ) ;int (* FS_FOpenFile ) (char*,int *,int ) ;int (* Print ) (int ,char*,char*) ;} ;
struct TYPE_6__ {scalar_t__ fileofs; scalar_t__ filelen; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int,int,int*,int) ;
 int FUNC_5 () ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_23 ;
 TYPE_5__ VAR_24 ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_4__ VAR_25 ;
 int VAR_26 ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (char*,int *,int ) ;
 int FUNC_11 (TYPE_2__*,int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

int FUNC_16(char *VAR_27)
{
 fileHandle_t VAR_28;
 aas_header_t VAR_29;
 int VAR_30, VAR_31, VAR_32;

 VAR_25.Print(VAR_23, "trying to load %s\n", VAR_27);

 FUNC_1();

 VAR_25.FS_FOpenFile( VAR_27, &VAR_28, VAR_22 );
 if (!VAR_28)
 {
  FUNC_2("can't open %s\n", VAR_27);
  return VAR_17;
 }

 VAR_25.FS_Read(&VAR_29, sizeof(aas_header_t), VAR_28 );
 VAR_32 = sizeof(aas_header_t);

 VAR_29.ident = FUNC_7(VAR_29.ident);
 if (VAR_29.ident != VAR_0)
 {
  FUNC_2("%s is not an AAS file\n", VAR_27);
  VAR_25.FS_FCloseFile(VAR_28);
  return VAR_20;
 }

 VAR_29.version = FUNC_7(VAR_29.version);

 if (VAR_29.version != VAR_16 && VAR_29.version != VAR_15)
 {
  FUNC_2("aas file %s is version %i, not %i\n", VAR_27, VAR_29.version, VAR_15);
  VAR_25.FS_FCloseFile(VAR_28);
  return VAR_21;
 }

 if (VAR_29.version == VAR_15)
 {
  FUNC_0((unsigned char *) &VAR_29 + 8, sizeof(aas_header_t) - 8);
 }

 VAR_24.bspchecksum = FUNC_8(FUNC_6( "sv_mapChecksum"));
 if (FUNC_7(VAR_29.bspchecksum) != VAR_24.bspchecksum)
 {
  FUNC_2("aas file %s is out of date\n", VAR_27);
  VAR_25.FS_FCloseFile(VAR_28);
  return VAR_21;
 }


 VAR_30 = FUNC_7(VAR_29.lumps[VAR_3].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_3].filelen);
 VAR_24.bboxes = (aas_bbox_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_bbox_t));
 VAR_24.numbboxes = VAR_31 / sizeof(aas_bbox_t);
 if (VAR_24.numbboxes && !VAR_24.bboxes) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_14].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_14].filelen);
 VAR_24.vertexes = (aas_vertex_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_vertex_t));
 VAR_24.numvertexes = VAR_31 / sizeof(aas_vertex_t);
 if (VAR_24.numvertexes && !VAR_24.vertexes) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_10].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_10].filelen);
 VAR_24.planes = (aas_plane_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_plane_t));
 VAR_24.numplanes = VAR_31 / sizeof(aas_plane_t);
 if (VAR_24.numplanes && !VAR_24.planes) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_6].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_6].filelen);
 VAR_24.edges = (aas_edge_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_edge_t));
 VAR_24.numedges = VAR_31 / sizeof(aas_edge_t);
 if (VAR_24.numedges && !VAR_24.edges) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_5].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_5].filelen);
 VAR_24.edgeindex = (aas_edgeindex_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_edgeindex_t));
 VAR_24.edgeindexsize = VAR_31 / sizeof(aas_edgeindex_t);
 if (VAR_24.edgeindexsize && !VAR_24.edgeindex) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_8].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_8].filelen);
 VAR_24.faces = (aas_face_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_face_t));
 VAR_24.numfaces = VAR_31 / sizeof(aas_face_t);
 if (VAR_24.numfaces && !VAR_24.faces) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_7].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_7].filelen);
 VAR_24.faceindex = (aas_faceindex_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_faceindex_t));
 VAR_24.faceindexsize = VAR_31 / sizeof(aas_faceindex_t);
 if (VAR_24.faceindexsize && !VAR_24.faceindex) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_1].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_1].filelen);
 VAR_24.areas = (aas_area_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_area_t));
 VAR_24.numareas = VAR_31 / sizeof(aas_area_t);
 if (VAR_24.numareas && !VAR_24.areas) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_2].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_2].filelen);
 VAR_24.areasettings = (aas_areasettings_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_areasettings_t));
 VAR_24.numareasettings = VAR_31 / sizeof(aas_areasettings_t);
 if (VAR_24.numareasettings && !VAR_24.areasettings) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_13].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_13].filelen);
 VAR_24.reachability = (aas_reachability_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_reachability_t));
 VAR_24.reachabilitysize = VAR_31 / sizeof(aas_reachability_t);
 if (VAR_24.reachabilitysize && !VAR_24.reachability) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_9].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_9].filelen);
 VAR_24.nodes = (aas_node_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_node_t));
 VAR_24.numnodes = VAR_31 / sizeof(aas_node_t);
 if (VAR_24.numnodes && !VAR_24.nodes) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_12].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_12].filelen);
 VAR_24.portals = (aas_portal_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_portal_t));
 VAR_24.numportals = VAR_31 / sizeof(aas_portal_t);
 if (VAR_24.numportals && !VAR_24.portals) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_11].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_11].filelen);
 VAR_24.portalindex = (aas_portalindex_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_portalindex_t));
 VAR_24.portalindexsize = VAR_31 / sizeof(aas_portalindex_t);
 if (VAR_24.portalindexsize && !VAR_24.portalindex) return VAR_18;

 VAR_30 = FUNC_7(VAR_29.lumps[VAR_4].fileofs);
 VAR_31 = FUNC_7(VAR_29.lumps[VAR_4].filelen);
 VAR_24.clusters = (aas_cluster_t *) FUNC_4(VAR_28, VAR_30, VAR_31, &VAR_32, sizeof(aas_cluster_t));
 VAR_24.numclusters = VAR_31 / sizeof(aas_cluster_t);
 if (VAR_24.numclusters && !VAR_24.clusters) return VAR_18;

 FUNC_5();

 VAR_24.loaded = VAR_26;

 VAR_25.FS_FCloseFile(VAR_28);





 return VAR_19;
}
