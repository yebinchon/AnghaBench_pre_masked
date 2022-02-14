
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int qboolean ;
struct TYPE_10__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_11__ {int firstedge; int numedges; scalar_t__ backarea; scalar_t__ frontarea; scalar_t__ faceflags; int planenum; } ;
typedef TYPE_3__ aas_face_t ;
struct TYPE_13__ {int numfaces; int edgeindexsize; int* edgeindex; TYPE_3__* faces; } ;
struct TYPE_12__ {int max_faces; int max_edgeindexsize; } ;


 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,size_t,...) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_2 ;

qboolean FUNC_5(winding_t *VAR_3, plane_t *VAR_4, int VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 aas_face_t *VAR_10;


 if (VAR_0.numfaces == 0) VAR_0.numfaces = 1;

 if (VAR_0.numfaces >= VAR_1.max_faces)
 {
  FUNC_2("AAS_MAX_FACES = %d", VAR_1.max_faces);
 }
 VAR_10 = &VAR_0.faces[VAR_0.numfaces];
 FUNC_1(VAR_4->normal, VAR_4->dist, &VAR_10->planenum);
 VAR_10->faceflags = 0;
 VAR_10->firstedge = VAR_0.edgeindexsize;
 VAR_10->frontarea = 0;
 VAR_10->backarea = 0;
 VAR_10->numedges = 0;
 for (VAR_8 = 0; VAR_8 < VAR_3->numpoints; VAR_8++)
 {
  if (VAR_0.edgeindexsize >= VAR_1.max_edgeindexsize)
  {
   FUNC_2("AAS_MAX_EDGEINDEXSIZE = %d", VAR_1.max_edgeindexsize);
  }
  VAR_9 = (VAR_8+1) % VAR_3->numpoints;
  FUNC_0(VAR_3->p[VAR_8], VAR_3->p[VAR_9], &VAR_7);

  if (VAR_7)
  {
   VAR_0.edgeindex[VAR_0.edgeindexsize++] = VAR_7;
   VAR_10->numedges++;
  }
  else if (VAR_2)
  {
   FUNC_3("AAS_GetFace: face %d had degenerate edge %d-%d\r\n",
              VAR_0.numfaces, VAR_8, VAR_9);
  }
 }
 if (VAR_10->numedges < 1



  )
 {
  FUNC_4(&VAR_0.faces[VAR_0.numfaces], 0, sizeof(aas_face_t));
  FUNC_3("AAS_GetFace: face %d was tiny\r\n", VAR_0.numfaces);
  return 0;
 }
 *VAR_6 = VAR_0.numfaces;
 VAR_0.numfaces++;
 return 1;
}
