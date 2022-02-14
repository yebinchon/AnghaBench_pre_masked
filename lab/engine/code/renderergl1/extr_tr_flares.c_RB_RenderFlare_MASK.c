
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_13__ {float eyeZ; float drawIntensity; scalar_t__ fogNum; scalar_t__ windowY; scalar_t__ windowX; int origin; int color; } ;
typedef TYPE_4__ flare_t ;
typedef int byte ;
struct TYPE_11__ {float viewportWidth; } ;
struct TYPE_10__ {int c_flareRenders; } ;
struct TYPE_17__ {TYPE_2__ viewParms; TYPE_1__ pc; } ;
struct TYPE_16__ {float value; } ;
struct TYPE_15__ {int numVertexes; scalar_t__ fogNum; int*** texCoords; int** vertexColors; int* indexes; int numIndexes; scalar_t__** xyz; } ;
struct TYPE_14__ {int flareShader; TYPE_3__* world; } ;
struct TYPE_12__ {scalar_t__ numfogs; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ,float,int*) ;
 TYPE_8__ VAR_0 ;
 float VAR_1 ;
 TYPE_7__* VAR_2 ;
 float FUNC_5 (float) ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;

void FUNC_6( flare_t *VAR_5 ) {
 float VAR_6;
 vec3_t VAR_7;
 int VAR_8[3];
 float VAR_9, VAR_10, VAR_11;
 byte VAR_12[3] = {255, 255, 255};

 VAR_0.pc.c_flareRenders++;


 if(VAR_5->eyeZ > -1.0f)
  VAR_9 = 1.0f;
 else
  VAR_9 = -VAR_5->eyeZ;


 VAR_6 = VAR_0.viewParms.viewportWidth * ( VAR_2->value/640.0f + 8 / VAR_9 );
 VAR_11 = VAR_9 + VAR_6 * FUNC_5(VAR_1);

 VAR_10 = VAR_1 * VAR_6 * VAR_6 / (VAR_11 * VAR_11);

 FUNC_4(VAR_5->color, VAR_5->drawIntensity * VAR_10, VAR_7);


 if(VAR_4.world && VAR_5->fogNum > 0 && VAR_5->fogNum < VAR_4.world->numfogs)
 {
  VAR_3.numVertexes = 1;
  FUNC_3(VAR_5->origin, VAR_3.xyz[0]);
  VAR_3.fogNum = VAR_5->fogNum;

  FUNC_1(VAR_12);


  if(!(VAR_12[0] || VAR_12[1] || VAR_12[2]))
   return;
 }

 VAR_8[0] = VAR_7[0] * VAR_12[0];
 VAR_8[1] = VAR_7[1] * VAR_12[1];
 VAR_8[2] = VAR_7[2] * VAR_12[2];

 FUNC_0( VAR_4.flareShader, VAR_5->fogNum );


 VAR_3.xyz[VAR_3.numVertexes][0] = VAR_5->windowX - VAR_6;
 VAR_3.xyz[VAR_3.numVertexes][1] = VAR_5->windowY - VAR_6;
 VAR_3.texCoords[VAR_3.numVertexes][0][0] = 0;
 VAR_3.texCoords[VAR_3.numVertexes][0][1] = 0;
 VAR_3.vertexColors[VAR_3.numVertexes][0] = VAR_8[0];
 VAR_3.vertexColors[VAR_3.numVertexes][1] = VAR_8[1];
 VAR_3.vertexColors[VAR_3.numVertexes][2] = VAR_8[2];
 VAR_3.vertexColors[VAR_3.numVertexes][3] = 255;
 VAR_3.numVertexes++;

 VAR_3.xyz[VAR_3.numVertexes][0] = VAR_5->windowX - VAR_6;
 VAR_3.xyz[VAR_3.numVertexes][1] = VAR_5->windowY + VAR_6;
 VAR_3.texCoords[VAR_3.numVertexes][0][0] = 0;
 VAR_3.texCoords[VAR_3.numVertexes][0][1] = 1;
 VAR_3.vertexColors[VAR_3.numVertexes][0] = VAR_8[0];
 VAR_3.vertexColors[VAR_3.numVertexes][1] = VAR_8[1];
 VAR_3.vertexColors[VAR_3.numVertexes][2] = VAR_8[2];
 VAR_3.vertexColors[VAR_3.numVertexes][3] = 255;
 VAR_3.numVertexes++;

 VAR_3.xyz[VAR_3.numVertexes][0] = VAR_5->windowX + VAR_6;
 VAR_3.xyz[VAR_3.numVertexes][1] = VAR_5->windowY + VAR_6;
 VAR_3.texCoords[VAR_3.numVertexes][0][0] = 1;
 VAR_3.texCoords[VAR_3.numVertexes][0][1] = 1;
 VAR_3.vertexColors[VAR_3.numVertexes][0] = VAR_8[0];
 VAR_3.vertexColors[VAR_3.numVertexes][1] = VAR_8[1];
 VAR_3.vertexColors[VAR_3.numVertexes][2] = VAR_8[2];
 VAR_3.vertexColors[VAR_3.numVertexes][3] = 255;
 VAR_3.numVertexes++;

 VAR_3.xyz[VAR_3.numVertexes][0] = VAR_5->windowX + VAR_6;
 VAR_3.xyz[VAR_3.numVertexes][1] = VAR_5->windowY - VAR_6;
 VAR_3.texCoords[VAR_3.numVertexes][0][0] = 1;
 VAR_3.texCoords[VAR_3.numVertexes][0][1] = 0;
 VAR_3.vertexColors[VAR_3.numVertexes][0] = VAR_8[0];
 VAR_3.vertexColors[VAR_3.numVertexes][1] = VAR_8[1];
 VAR_3.vertexColors[VAR_3.numVertexes][2] = VAR_8[2];
 VAR_3.vertexColors[VAR_3.numVertexes][3] = 255;
 VAR_3.numVertexes++;

 VAR_3.indexes[VAR_3.numIndexes++] = 0;
 VAR_3.indexes[VAR_3.numIndexes++] = 1;
 VAR_3.indexes[VAR_3.numIndexes++] = 2;
 VAR_3.indexes[VAR_3.numIndexes++] = 0;
 VAR_3.indexes[VAR_3.numIndexes++] = 2;
 VAR_3.indexes[VAR_3.numIndexes++] = 3;

 FUNC_2();
}
