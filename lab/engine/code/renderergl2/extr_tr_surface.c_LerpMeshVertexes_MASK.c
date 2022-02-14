
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {float* normal; float* tangent; int xyz; } ;
typedef TYPE_3__ mdvVertex_t ;
struct TYPE_11__ {int numVerts; TYPE_3__* verts; } ;
typedef TYPE_4__ mdvSurface_t ;
typedef float int16_t ;
struct TYPE_13__ {TYPE_2__* currentEntity; } ;
struct TYPE_12__ {float** xyz; size_t numVertexes; float** normal; float** tangent; } ;
struct TYPE_8__ {int frame; int oldframe; } ;
struct TYPE_9__ {TYPE_1__ e; } ;


 int FUNC_0 (int ,float*) ;
 int FUNC_1 (float*,float*) ;
 int FUNC_2 (int ,int ,float,float*) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static void FUNC_3(mdvSurface_t *VAR_2, float VAR_3)
{
 float *VAR_4;
 int16_t *VAR_5, *VAR_6;
 mdvVertex_t *VAR_7;
 int VAR_8;

 VAR_7 = VAR_2->verts + VAR_0.currentEntity->e.frame * VAR_2->numVerts;

 VAR_4 = VAR_1.xyz[VAR_1.numVertexes];
 VAR_5 = VAR_1.normal[VAR_1.numVertexes];
 VAR_6 = VAR_1.tangent[VAR_1.numVertexes];

 if (VAR_3 == 0)
 {




  for (VAR_8=0 ; VAR_8 < VAR_2->numVerts ; VAR_8++)
  {
   FUNC_0(VAR_7->xyz, VAR_4);
   FUNC_1(VAR_7->normal, VAR_5);
   FUNC_1(VAR_7->tangent, VAR_6);

   VAR_7++;
   VAR_4 += 4;
   VAR_5 += 4;
   VAR_6 += 4;
  }
 }
 else
 {




  mdvVertex_t *VAR_9;

  VAR_9 = VAR_2->verts + VAR_0.currentEntity->e.oldframe * VAR_2->numVerts;

  for (VAR_8=0 ; VAR_8 < VAR_2->numVerts ; VAR_8++)
  {
   FUNC_2(VAR_7->xyz, VAR_9->xyz, VAR_3, VAR_4);

   VAR_5[0] = (int16_t)(VAR_7->normal[0] * (1.0f - VAR_3) + VAR_9->normal[0] * VAR_3);
   VAR_5[1] = (int16_t)(VAR_7->normal[1] * (1.0f - VAR_3) + VAR_9->normal[1] * VAR_3);
   VAR_5[2] = (int16_t)(VAR_7->normal[2] * (1.0f - VAR_3) + VAR_9->normal[2] * VAR_3);
   VAR_5[3] = 0;

   VAR_6[0] = (int16_t)(VAR_7->tangent[0] * (1.0f - VAR_3) + VAR_9->tangent[0] * VAR_3);
   VAR_6[1] = (int16_t)(VAR_7->tangent[1] * (1.0f - VAR_3) + VAR_9->tangent[1] * VAR_3);
   VAR_6[2] = (int16_t)(VAR_7->tangent[2] * (1.0f - VAR_3) + VAR_9->tangent[2] * VAR_3);
   VAR_6[3] = VAR_7->tangent[3];

   VAR_7++;
   VAR_9++;
   VAR_4 += 4;
   VAR_5 += 4;
   VAR_6 += 4;
  }
 }

}
