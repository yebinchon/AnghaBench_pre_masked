
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int surfaceType_t ;
struct TYPE_12__ {TYPE_4__* iqmData; int numVerts; int numIndexes; int vao; scalar_t__ iqmSurface; } ;
typedef TYPE_3__ srfVaoIQModel_t ;
struct TYPE_13__ {int num_poses; int num_frames; } ;
typedef TYPE_4__ iqmData_t ;
struct TYPE_16__ {TYPE_2__* currentEntity; } ;
struct TYPE_15__ {int boneAnimation; float** boneMatrix; } ;
struct TYPE_14__ {int numVertexes; int numIndexes; int useInternalVao; int cubemapIndex; int fogNum; int shader; } ;
struct TYPE_10__ {int frame; int oldframe; float backlerp; } ;
struct TYPE_11__ {TYPE_1__ e; } ;


 int FUNC_0 (TYPE_4__*,int,int,float,float*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;

void FUNC_6(srfVaoIQModel_t * VAR_5)
{
 iqmData_t *VAR_6 = VAR_5->iqmData;

 if (FUNC_5(VAR_4.shader))
 {
  FUNC_3((surfaceType_t*)VAR_5->iqmSurface);
  return;
 }

 if(!VAR_5->vao)
  return;


 FUNC_2();
 FUNC_1(VAR_4.shader, VAR_4.fogNum, VAR_4.cubemapIndex);

 FUNC_4(VAR_5->vao);

 VAR_4.useInternalVao = VAR_3;

 VAR_4.numIndexes = VAR_5->numIndexes;
 VAR_4.numVertexes = VAR_5->numVerts;

 VAR_2.boneAnimation = VAR_6->num_poses;

 if ( VAR_2.boneAnimation ) {
  float VAR_7[VAR_0 * 12];
  int VAR_8 = VAR_6->num_frames ? VAR_1.currentEntity->e.frame % VAR_6->num_frames : 0;
  int VAR_9 = VAR_6->num_frames ? VAR_1.currentEntity->e.oldframe % VAR_6->num_frames : 0;
  float VAR_10 = VAR_1.currentEntity->e.backlerp;
  int VAR_11;


  FUNC_0( VAR_5->iqmData, VAR_8, VAR_9, VAR_10, VAR_7 );


  for ( VAR_11 = 0; VAR_11 < VAR_6->num_poses; VAR_11++ ) {
   VAR_2.boneMatrix[VAR_11][0] = VAR_7[VAR_11*12+0];
   VAR_2.boneMatrix[VAR_11][1] = VAR_7[VAR_11*12+4];
   VAR_2.boneMatrix[VAR_11][2] = VAR_7[VAR_11*12+8];
   VAR_2.boneMatrix[VAR_11][3] = 0.0f;
   VAR_2.boneMatrix[VAR_11][4] = VAR_7[VAR_11*12+1];
   VAR_2.boneMatrix[VAR_11][5] = VAR_7[VAR_11*12+5];
   VAR_2.boneMatrix[VAR_11][6] = VAR_7[VAR_11*12+9];
   VAR_2.boneMatrix[VAR_11][7] = 0.0f;
   VAR_2.boneMatrix[VAR_11][8] = VAR_7[VAR_11*12+2];
   VAR_2.boneMatrix[VAR_11][9] = VAR_7[VAR_11*12+6];
   VAR_2.boneMatrix[VAR_11][10] = VAR_7[VAR_11*12+10];
   VAR_2.boneMatrix[VAR_11][11] = 0.0f;
   VAR_2.boneMatrix[VAR_11][12] = VAR_7[VAR_11*12+3];
   VAR_2.boneMatrix[VAR_11][13] = VAR_7[VAR_11*12+7];
   VAR_2.boneMatrix[VAR_11][14] = VAR_7[VAR_11*12+11];
   VAR_2.boneMatrix[VAR_11][15] = 1.0f;
  }
 }

 FUNC_2();

 VAR_2.boneAnimation = 0;
}
