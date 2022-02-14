
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {float* normal; } ;
struct TYPE_8__ {int numPoints; int numIndices; int dlightBits; int ofsIndices; float** points; TYPE_2__ plane; } ;
typedef TYPE_3__ srfSurfaceFace_t ;
typedef unsigned int glIndex_t ;
struct TYPE_9__ {int dlightBits; int numVertexes; unsigned int* indexes; int numIndexes; float*** texCoords; int* vertexDlightBits; int * vertexColors; int * xyz; int * normal; TYPE_1__* shader; } ;
struct TYPE_6__ {scalar_t__ needsNormal; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (float*,int ) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void FUNC_2( srfSurfaceFace_t *VAR_2 ) {
 int VAR_3;
 unsigned *VAR_4;
 glIndex_t *VAR_5;
 float *VAR_6;
 float *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_0( VAR_2->numPoints, VAR_2->numIndices );

 VAR_11 = VAR_2->dlightBits;
 VAR_1.dlightBits |= VAR_11;

 VAR_4 = ( unsigned * ) ( ( ( char * ) VAR_2 ) + VAR_2->ofsIndices );

 VAR_9 = VAR_1.numVertexes;
 VAR_5 = VAR_1.indexes + VAR_1.numIndexes;
 for ( VAR_3 = VAR_2->numIndices-1 ; VAR_3 >= 0 ; VAR_3-- ) {
  VAR_5[VAR_3] = VAR_4[VAR_3] + VAR_9;
 }

 VAR_1.numIndexes += VAR_2->numIndices;

 VAR_10 = VAR_2->numPoints;

 if ( VAR_1.shader->needsNormal ) {
  VAR_7 = VAR_2->plane.normal;
  for ( VAR_3 = 0, VAR_8 = VAR_1.numVertexes; VAR_3 < VAR_10; VAR_3++, VAR_8++ ) {
   FUNC_1( VAR_7, VAR_1.normal[VAR_8] );
  }
 }

 for ( VAR_3 = 0, VAR_6 = VAR_2->points[0], VAR_8 = VAR_1.numVertexes; VAR_3 < VAR_10; VAR_3++, VAR_6 += VAR_0, VAR_8++ ) {
  FUNC_1( VAR_6, VAR_1.xyz[VAR_8]);
  VAR_1.texCoords[VAR_8][0][0] = VAR_6[3];
  VAR_1.texCoords[VAR_8][0][1] = VAR_6[4];
  VAR_1.texCoords[VAR_8][1][0] = VAR_6[5];
  VAR_1.texCoords[VAR_8][1][1] = VAR_6[6];
  * ( unsigned int * ) &VAR_1.vertexColors[VAR_8] = * ( unsigned int * ) &VAR_6[7];
  VAR_1.vertexDlightBits[VAR_8] = VAR_11;
 }


 VAR_1.numVertexes += VAR_2->numPoints;
}
