
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int lightdir; int color; int lightmap; int st; int tangent; int normal; int xyz; } ;
typedef TYPE_1__ srfVert_t ;
struct TYPE_8__ {int dlightBits; int pshadowBits; int width; float* widthLodError; int height; float* heightLodError; TYPE_1__* verts; int lodRadius; int lodOrigin; int indexes; int numIndexes; int numVerts; } ;
typedef TYPE_2__ srfBspSurface_t ;
typedef int int16_t ;
struct TYPE_10__ {int vertexAttribs; } ;
struct TYPE_9__ {int dlightBits; int pshadowBits; int numVertexes; int numIndexes; float** xyz; float** texCoords; float** lightCoords; int* indexes; TYPE_6__* shader; int ** lightdir; int ** color; int ** tangent; int ** normal; int cubemapIndex; int fogNum; int vao; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 float FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_6__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int ,int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,float*) ;
 int FUNC_6 (int ,float*) ;
 int FUNC_7 (int ,int *) ;
 TYPE_3__ VAR_10 ;

__attribute__((used)) static void FUNC_8( srfBspSurface_t *VAR_11 ) {
 int VAR_12, VAR_13;
 float *VAR_14;
 float *VAR_15, *VAR_16;
 int16_t *VAR_17;
 int16_t *VAR_18;
 uint16_t *VAR_19;
 int16_t *VAR_20;
 srfVert_t *VAR_21;
 int VAR_22, VAR_23, VAR_24;
 int VAR_25;
 int VAR_26[VAR_7];
 int VAR_27[VAR_7];
 float VAR_28;
 int VAR_29, VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;


 if (FUNC_4(VAR_11->numVerts, VAR_11->verts, VAR_11->numIndexes,
  VAR_11->indexes, VAR_11->dlightBits, VAR_11->pshadowBits))
 {
  return;
 }

 FUNC_2(VAR_10.vao);

 VAR_32 = VAR_11->dlightBits;
 VAR_10.dlightBits |= VAR_32;

 VAR_33 = VAR_11->pshadowBits;
 VAR_10.pshadowBits |= VAR_33;


 VAR_28 = FUNC_0( VAR_11->lodOrigin, VAR_11->lodRadius );



 VAR_26[0] = 0;
 VAR_29 = 1;
 for ( VAR_12 = 1 ; VAR_12 < VAR_11->width-1 ; VAR_12++ ) {
  if ( VAR_11->widthLodError[VAR_12] <= VAR_28 ) {
   VAR_26[VAR_29] = VAR_12;
   VAR_29++;
  }
 }
 VAR_26[VAR_29] = VAR_11->width-1;
 VAR_29++;

 VAR_27[0] = 0;
 VAR_30 = 1;
 for ( VAR_12 = 1 ; VAR_12 < VAR_11->height-1 ; VAR_12++ ) {
  if ( VAR_11->heightLodError[VAR_12] <= VAR_28 ) {
   VAR_27[VAR_30] = VAR_12;
   VAR_30++;
  }
 }
 VAR_27[VAR_30] = VAR_11->height-1;
 VAR_30++;





 VAR_25 = 0;
 while ( VAR_25 < VAR_30 - 1 ) {

  do {
   VAR_24 = ( VAR_9 - VAR_10.numVertexes ) / VAR_29;
   VAR_23 = ( VAR_8 - VAR_10.numIndexes ) / ( VAR_29 * 6 );


   if ( VAR_24 < 2 || VAR_23 < 1 ) {
    FUNC_3();
    FUNC_1(VAR_10.shader, VAR_10.fogNum, VAR_10.cubemapIndex );
   } else {
    break;
   }
  } while ( 1 );

  VAR_22 = VAR_23;
  if ( VAR_24 < VAR_23 + 1 ) {
   VAR_22 = VAR_24 - 1;
  }
  if ( VAR_25 + VAR_22 > VAR_30 ) {
   VAR_22 = VAR_30 - VAR_25;
  }

  VAR_31 = VAR_10.numVertexes;

  VAR_14 = VAR_10.xyz[VAR_31];
  VAR_17 = VAR_10.normal[VAR_31];
  VAR_18 = VAR_10.tangent[VAR_31];
  VAR_15 = VAR_10.texCoords[VAR_31];
  VAR_16 = VAR_10.lightCoords[VAR_31];
  VAR_19 = VAR_10.color[VAR_31];
  VAR_20 = VAR_10.lightdir[VAR_31];


  for ( VAR_12 = 0 ; VAR_12 < VAR_22 ; VAR_12++ ) {
   for ( VAR_13 = 0 ; VAR_13 < VAR_29 ; VAR_13++ ) {
    VAR_21 = VAR_11->verts + VAR_27[ VAR_25 + VAR_12 ] * VAR_11->width
     + VAR_26[ VAR_13 ];

    if ( VAR_10.shader->vertexAttribs & VAR_4 )
    {
     FUNC_5(VAR_21->xyz, VAR_14);
     VAR_14 += 4;
    }

    if ( VAR_10.shader->vertexAttribs & VAR_3 )
    {
     FUNC_7(VAR_21->normal, VAR_17);
     VAR_17 += 4;
    }

    if ( VAR_10.shader->vertexAttribs & VAR_5 )
    {
     FUNC_7(VAR_21->tangent, VAR_18);
     VAR_18 += 4;
    }

    if ( VAR_10.shader->vertexAttribs & VAR_6 )
    {
     FUNC_6(VAR_21->st, VAR_15);
     VAR_15 += 2;
    }

    if ( VAR_10.shader->vertexAttribs & VAR_1 )
    {
     FUNC_6(VAR_21->lightmap, VAR_16);
     VAR_16 += 2;
    }

    if ( VAR_10.shader->vertexAttribs & VAR_0 )
    {
     FUNC_7(VAR_21->color, VAR_19);
     VAR_19 += 4;
    }

    if ( VAR_10.shader->vertexAttribs & VAR_2 )
    {
     FUNC_7(VAR_21->lightdir, VAR_20);
     VAR_20 += 4;
    }


   }
  }



  {
   int VAR_34;
   int VAR_35, VAR_36;

   VAR_36 = VAR_22 - 1;
   VAR_35 = VAR_29 - 1;
   VAR_34 = VAR_10.numIndexes;
   for (VAR_12 = 0 ; VAR_12 < VAR_36 ; VAR_12++) {
    for (VAR_13 = 0 ; VAR_13 < VAR_35 ; VAR_13++) {
     int VAR_37, VAR_38, VAR_39, VAR_40;


     VAR_37 = VAR_31 + VAR_12*VAR_29 + VAR_13 + 1;
     VAR_38 = VAR_37 - 1;
     VAR_39 = VAR_38 + VAR_29;
     VAR_40 = VAR_39 + 1;

     VAR_10.indexes[VAR_34] = VAR_38;
     VAR_10.indexes[VAR_34+1] = VAR_39;
     VAR_10.indexes[VAR_34+2] = VAR_37;

     VAR_10.indexes[VAR_34+3] = VAR_37;
     VAR_10.indexes[VAR_34+4] = VAR_39;
     VAR_10.indexes[VAR_34+5] = VAR_40;
     VAR_34 += 6;
    }
   }

   VAR_10.numIndexes = VAR_34;
  }

  VAR_10.numVertexes += VAR_22 * VAR_29;

  VAR_25 += VAR_22 - 1;
 }
}
