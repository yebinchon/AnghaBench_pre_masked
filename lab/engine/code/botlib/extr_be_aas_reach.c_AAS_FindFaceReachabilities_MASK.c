
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_13__ {int dist; int* normal; } ;
typedef TYPE_1__ aas_plane_t ;
struct TYPE_14__ {int areanum; int* start; int* end; struct TYPE_14__* next; scalar_t__ traveltime; scalar_t__ traveltype; scalar_t__ edgenum; scalar_t__ facenum; } ;
typedef TYPE_2__ aas_lreachability_t ;
struct TYPE_15__ {int faceflags; size_t planenum; int numedges; int firstedge; } ;
typedef TYPE_3__ aas_face_t ;
struct TYPE_16__ {size_t* v; } ;
typedef TYPE_4__ aas_edge_t ;
struct TYPE_17__ {int numfaces; int firstface; } ;
typedef TYPE_5__ aas_area_t ;
struct TYPE_19__ {int phys_jumpvel; } ;
struct TYPE_18__ {int numareas; int* faceindex; int* edgeindex; float** vertexes; TYPE_4__* edges; TYPE_1__* planes; TYPE_3__* faces; TYPE_5__* areas; } ;


 TYPE_2__* FUNC_0 () ;
 float FUNC_1 (float*,float*,float*,float*,TYPE_1__*,TYPE_1__*,int*,int*,int*,int*,float) ;
 int FUNC_2 (int ,int*,int*,float*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int,int*,float) ;
 int FUNC_6 (int*,int*) ;
 int VAR_0 ;
 int FUNC_7 (int*,int*) ;
 float FUNC_8 (int*) ;
 int FUNC_9 (int*,int*,int*) ;
 int FUNC_10 (int*,int*,int*) ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 size_t FUNC_11 (int) ;

aas_lreachability_t *FUNC_12(vec3_t *VAR_3, int VAR_4, aas_plane_t *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 float *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 float VAR_18, VAR_19, VAR_20, VAR_21;
 vec3_t VAR_22 = {0}, VAR_23 = {0}, VAR_24 = {0}, VAR_25 = {0}, VAR_26, VAR_27, VAR_28;
 aas_lreachability_t *VAR_29, *VAR_30;
 aas_area_t *VAR_31;
 aas_face_t *VAR_32;
 aas_edge_t *VAR_33;
 aas_plane_t *VAR_34, *VAR_35;


 VAR_30 = ((void*)0);
 VAR_13 = 0;
 VAR_35 = ((void*)0);

 for (VAR_7 = 1; VAR_7 < VAR_2.numareas; VAR_7++)
 {
  VAR_31 = &VAR_2.areas[VAR_7];


  VAR_18 = 999999;
  for (VAR_8 = 0; VAR_8 < VAR_31->numfaces; VAR_8++)
  {
   VAR_11 = VAR_2.faceindex[VAR_31->firstface + VAR_8];
   VAR_32 = &VAR_2.faces[FUNC_11(VAR_11)];

   if (!(VAR_32->faceflags & VAR_0)) continue;

   VAR_34 = &VAR_2.planes[VAR_32->planenum];

   for (VAR_9 = 0; VAR_9 < VAR_32->numedges; VAR_9++)
   {
    VAR_12 = FUNC_11(VAR_2.edgeindex[VAR_32->firstedge + VAR_9]);
    VAR_33 = &VAR_2.edges[VAR_12];

    VAR_14 = VAR_2.vertexes[VAR_33->v[0]];
    VAR_15 = VAR_2.vertexes[VAR_33->v[1]];

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
    {
     VAR_16 = VAR_3[VAR_10];
     VAR_17 = VAR_3[(VAR_10+1) % VAR_4];
     VAR_21 = FUNC_1(VAR_14, VAR_15, VAR_16, VAR_17, VAR_34, VAR_5,
             VAR_22, VAR_24,
             VAR_23, VAR_25, VAR_18);
     if (VAR_21 < VAR_18)
     {
      VAR_13 = VAR_11;
      VAR_35 = VAR_34;
      VAR_18 = VAR_21;
     }
    }
   }
  }

  if (VAR_18 > 192) continue;

  FUNC_9(VAR_22, VAR_23, VAR_22);
  FUNC_9(VAR_24, VAR_25, VAR_24);

  if (!VAR_6)
  {
   FUNC_7(VAR_22, VAR_26);
   FUNC_7(VAR_24, VAR_22);
   FUNC_7(VAR_26, VAR_24);
  }

  FUNC_10(VAR_24, VAR_22, VAR_27);
  VAR_27[2] = 0;
  VAR_20 = FUNC_8(VAR_27);

  if (VAR_20 > 2 * FUNC_3(VAR_1.phys_jumpvel)) continue;

  if (VAR_24[2] - 32 > VAR_22[2]) continue;

  if (VAR_24[2] < VAR_22[2] - 128) continue;

  if (VAR_20 > 32)
  {

   if (!FUNC_2(0, VAR_22, VAR_24, &VAR_19)) continue;
  }

  VAR_22[2] += 1;
  VAR_24[2] += 1;

  if (VAR_6) FUNC_7(VAR_24, VAR_28);
  else FUNC_7(VAR_22, VAR_28);
  if (VAR_35 != ((void*)0))
   VAR_28[2] = (VAR_35->dist - FUNC_6(VAR_35->normal, VAR_28)) / VAR_35->normal[2];
  else
   VAR_28[2] = 0;

  if (!FUNC_5(VAR_13, VAR_28, 0.1f))
  {

   if (VAR_24[2] - 16 > VAR_22[2]) continue;
  }
  VAR_29 = FUNC_0();
  if (!VAR_29) return VAR_30;
  VAR_29->areanum = VAR_7;
  VAR_29->facenum = 0;
  VAR_29->edgenum = 0;
  FUNC_7(VAR_22, VAR_29->start);
  FUNC_7(VAR_24, VAR_29->end);
  VAR_29->traveltype = 0;
  VAR_29->traveltime = 0;
  VAR_29->next = VAR_30;
  VAR_30 = VAR_29;

  if (VAR_6) FUNC_4(VAR_29->start, VAR_29->end, 1);
  else FUNC_4(VAR_29->start, VAR_29->end, 2);

 }
 return VAR_30;
}
