
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dlightBits; int width; float* widthLodError; int height; float* heightLodError; TYPE_2__* verts; int lodRadius; int lodOrigin; } ;
typedef TYPE_1__ srfGridMesh_t ;
typedef scalar_t__ qboolean ;
struct TYPE_7__ {float* xyz; float* st; float* lightmap; float* normal; scalar_t__ color; } ;
typedef TYPE_2__ drawVert_t ;
struct TYPE_9__ {scalar_t__ needsNormal; } ;
struct TYPE_8__ {int dlightBits; int numVertexes; int numIndexes; float** xyz; float** normal; float*** texCoords; int* vertexDlightBits; int* indexes; TYPE_5__* shader; int * vertexColors; int fogNum; } ;


 float FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void FUNC_3( srfGridMesh_t *VAR_4 ) {
 int VAR_5, VAR_6;
 float *VAR_7;
 float *VAR_8;
 float *VAR_9;
 unsigned char *VAR_10;
 drawVert_t *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;
 int VAR_16[VAR_0];
 int VAR_17[VAR_0];
 float VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 int *VAR_23;
 qboolean VAR_24;

 VAR_22 = VAR_4->dlightBits;
 VAR_3.dlightBits |= VAR_22;


 VAR_18 = FUNC_0( VAR_4->lodOrigin, VAR_4->lodRadius );



 VAR_16[0] = 0;
 VAR_19 = 1;
 for ( VAR_5 = 1 ; VAR_5 < VAR_4->width-1 ; VAR_5++ ) {
  if ( VAR_4->widthLodError[VAR_5] <= VAR_18 ) {
   VAR_16[VAR_19] = VAR_5;
   VAR_19++;
  }
 }
 VAR_16[VAR_19] = VAR_4->width-1;
 VAR_19++;

 VAR_17[0] = 0;
 VAR_20 = 1;
 for ( VAR_5 = 1 ; VAR_5 < VAR_4->height-1 ; VAR_5++ ) {
  if ( VAR_4->heightLodError[VAR_5] <= VAR_18 ) {
   VAR_17[VAR_20] = VAR_5;
   VAR_20++;
  }
 }
 VAR_17[VAR_20] = VAR_4->height-1;
 VAR_20++;





 VAR_15 = 0;
 while ( VAR_15 < VAR_20 - 1 ) {

  do {
   VAR_14 = ( VAR_2 - VAR_3.numVertexes ) / VAR_19;
   VAR_13 = ( VAR_1 - VAR_3.numIndexes ) / ( VAR_19 * 6 );


   if ( VAR_14 < 2 || VAR_13 < 1 ) {
    FUNC_2();
    FUNC_1(VAR_3.shader, VAR_3.fogNum );
   } else {
    break;
   }
  } while ( 1 );

  VAR_12 = VAR_13;
  if ( VAR_14 < VAR_13 + 1 ) {
   VAR_12 = VAR_14 - 1;
  }
  if ( VAR_15 + VAR_12 > VAR_20 ) {
   VAR_12 = VAR_20 - VAR_15;
  }

  VAR_21 = VAR_3.numVertexes;

  VAR_7 = VAR_3.xyz[VAR_21];
  VAR_9 = VAR_3.normal[VAR_21];
  VAR_8 = VAR_3.texCoords[VAR_21][0];
  VAR_10 = ( unsigned char * ) &VAR_3.vertexColors[VAR_21];
  VAR_23 = &VAR_3.vertexDlightBits[VAR_21];
  VAR_24 = VAR_3.shader->needsNormal;

  for ( VAR_5 = 0 ; VAR_5 < VAR_12 ; VAR_5++ ) {
   for ( VAR_6 = 0 ; VAR_6 < VAR_19 ; VAR_6++ ) {
    VAR_11 = VAR_4->verts + VAR_17[ VAR_15 + VAR_5 ] * VAR_4->width
     + VAR_16[ VAR_6 ];

    VAR_7[0] = VAR_11->xyz[0];
    VAR_7[1] = VAR_11->xyz[1];
    VAR_7[2] = VAR_11->xyz[2];
    VAR_8[0] = VAR_11->st[0];
    VAR_8[1] = VAR_11->st[1];
    VAR_8[2] = VAR_11->lightmap[0];
    VAR_8[3] = VAR_11->lightmap[1];
    if ( VAR_24 ) {
     VAR_9[0] = VAR_11->normal[0];
     VAR_9[1] = VAR_11->normal[1];
     VAR_9[2] = VAR_11->normal[2];
    }
    * ( unsigned int * ) VAR_10 = * ( unsigned int * ) VAR_11->color;
    *VAR_23++ = VAR_22;
    VAR_7 += 4;
    VAR_9 += 4;
    VAR_8 += 4;
    VAR_10 += 4;
   }
  }



  {
   int VAR_25;
   int VAR_26, VAR_27;

   VAR_27 = VAR_12 - 1;
   VAR_26 = VAR_19 - 1;
   VAR_25 = VAR_3.numIndexes;
   for (VAR_5 = 0 ; VAR_5 < VAR_27 ; VAR_5++) {
    for (VAR_6 = 0 ; VAR_6 < VAR_26 ; VAR_6++) {
     int VAR_28, VAR_29, VAR_30, VAR_31;


     VAR_28 = VAR_21 + VAR_5*VAR_19 + VAR_6 + 1;
     VAR_29 = VAR_28 - 1;
     VAR_30 = VAR_29 + VAR_19;
     VAR_31 = VAR_30 + 1;

     VAR_3.indexes[VAR_25] = VAR_29;
     VAR_3.indexes[VAR_25+1] = VAR_30;
     VAR_3.indexes[VAR_25+2] = VAR_28;

     VAR_3.indexes[VAR_25+3] = VAR_28;
     VAR_3.indexes[VAR_25+4] = VAR_30;
     VAR_3.indexes[VAR_25+5] = VAR_31;
     VAR_25 += 6;
    }
   }

   VAR_3.numIndexes = VAR_25;
  }

  VAR_3.numVertexes += VAR_12 * VAR_19;

  VAR_15 += VAR_12 - 1;
 }
}
