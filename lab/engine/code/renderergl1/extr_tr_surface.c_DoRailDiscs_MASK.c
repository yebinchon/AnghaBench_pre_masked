
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_10__ {TYPE_2__* currentEntity; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {size_t numVertexes; int*** texCoords; int* indexes; int numIndexes; int ** vertexColors; int * xyz; } ;
struct TYPE_6__ {int * shaderRGBA; } ;
struct TYPE_7__ {TYPE_1__ e; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (float* const,float* const,float*) ;
 int FUNC_3 (float*,int ) ;
 TYPE_5__ VAR_0 ;
 float FUNC_4 (int ) ;
 TYPE_4__* VAR_1 ;
 float FUNC_5 (int ) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_6( int VAR_3, const vec3_t VAR_4, const vec3_t VAR_5, const vec3_t VAR_6, const vec3_t VAR_7 )
{
 int VAR_8;
 vec3_t VAR_9[4];
 vec3_t VAR_10;
 int VAR_11 = VAR_1->integer;
 float VAR_12, VAR_13;
 float VAR_14;

 if ( VAR_3 > 1 )
  VAR_3--;
 if ( !VAR_3 )
  return;

 VAR_14 = 0.25;

 for ( VAR_8 = 0; VAR_8 < 4; VAR_8++ )
 {
  VAR_12 = FUNC_4( FUNC_0( 45 + VAR_8 * 90 ) );
  VAR_13 = FUNC_5( FUNC_0( 45 + VAR_8 * 90 ) );
  VAR_10[0] = ( VAR_6[0] * VAR_12 + VAR_7[0] * VAR_13 ) * VAR_14 * VAR_11;
  VAR_10[1] = ( VAR_6[1] * VAR_12 + VAR_7[1] * VAR_13 ) * VAR_14 * VAR_11;
  VAR_10[2] = ( VAR_6[2] * VAR_12 + VAR_7[2] * VAR_13 ) * VAR_14 * VAR_11;
  FUNC_2( VAR_4, VAR_10, VAR_9[VAR_8] );

  if ( VAR_3 > 1 )
  {

   FUNC_2( VAR_9[VAR_8], VAR_5, VAR_9[VAR_8] );
  }
 }

 for ( VAR_8 = 0; VAR_8 < VAR_3; VAR_8++ )
 {
  int VAR_15;

  FUNC_1( 4, 6 );

  for ( VAR_15 = 0; VAR_15 < 4; VAR_15++ )
  {
   FUNC_3( VAR_9[VAR_15], VAR_2.xyz[VAR_2.numVertexes] );
   VAR_2.texCoords[VAR_2.numVertexes][0][0] = ( VAR_15 < 2 );
   VAR_2.texCoords[VAR_2.numVertexes][0][1] = ( VAR_15 && VAR_15 != 3 );
   VAR_2.vertexColors[VAR_2.numVertexes][0] = VAR_0.currentEntity->e.shaderRGBA[0];
   VAR_2.vertexColors[VAR_2.numVertexes][1] = VAR_0.currentEntity->e.shaderRGBA[1];
   VAR_2.vertexColors[VAR_2.numVertexes][2] = VAR_0.currentEntity->e.shaderRGBA[2];
   VAR_2.numVertexes++;

   FUNC_2( VAR_9[VAR_15], VAR_5, VAR_9[VAR_15] );
  }

  VAR_2.indexes[VAR_2.numIndexes++] = VAR_2.numVertexes - 4 + 0;
  VAR_2.indexes[VAR_2.numIndexes++] = VAR_2.numVertexes - 4 + 1;
  VAR_2.indexes[VAR_2.numIndexes++] = VAR_2.numVertexes - 4 + 3;
  VAR_2.indexes[VAR_2.numIndexes++] = VAR_2.numVertexes - 4 + 3;
  VAR_2.indexes[VAR_2.numIndexes++] = VAR_2.numVertexes - 4 + 1;
  VAR_2.indexes[VAR_2.numIndexes++] = VAR_2.numVertexes - 4 + 2;
 }
}
