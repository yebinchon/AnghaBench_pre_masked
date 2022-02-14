
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_21__ {int patchIterations; } ;
typedef TYPE_1__ surfaceInfo_t ;
typedef int shaderInfo_t ;
typedef int rawLightmap_t ;
struct TYPE_22__ {int numVerts; TYPE_4__* verts; } ;
typedef TYPE_2__ radWinding_t ;
typedef scalar_t__ qboolean ;
struct TYPE_23__ {int width; int height; TYPE_4__* verts; } ;
typedef TYPE_3__ mesh_t ;
typedef int clipWork_t ;
struct TYPE_24__ {int** color; int xyz; } ;
typedef TYPE_4__ bspDrawVert_t ;
struct TYPE_25__ {int numVerts; size_t firstVert; int patchWidth; int patchHeight; } ;
typedef TYPE_5__ bspDrawSurface_t ;


 float FUNC_0 (int ,float*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (float*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__) ;
 float* FUNC_4 (int,size_t) ;
 int FUNC_5 (int,TYPE_5__*,int *,int *,float,float,int ,TYPE_2__*,int *) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_3__,int ) ;
 int FUNC_8 (float*,size_t*) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_9 (float) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_4__*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_12 (int) ;
 TYPE_1__* VAR_5 ;
 TYPE_4__* VAR_6 ;

void FUNC_13( int VAR_7, int VAR_8, rawLightmap_t *VAR_9, shaderInfo_t *VAR_10, float VAR_11, float VAR_12, clipWork_t *VAR_13 ){
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19[ 5 ], VAR_20;
 bspDrawSurface_t *VAR_21;
 surfaceInfo_t *VAR_22;
 bspDrawVert_t *VAR_23;
 bspDrawVert_t *VAR_24[ 4 ];
 mesh_t VAR_25, *VAR_26, *VAR_27;
 float *VAR_28;
 float VAR_29;
 vec4_t VAR_30;
 qboolean VAR_31;
 radWinding_t VAR_32;



 VAR_21 = &VAR_2[ VAR_7 ];
 VAR_22 = &VAR_5[ VAR_7 ];


 VAR_23 = FUNC_12( VAR_21->numVerts * sizeof( bspDrawVert_t ) );
 FUNC_11( VAR_23, &VAR_6[ VAR_21->firstVert ], VAR_21->numVerts * sizeof( bspDrawVert_t ) );
 for ( VAR_14 = 0; VAR_14 < VAR_21->numVerts; VAR_14++ )
  VAR_23[ VAR_14 ].color[ 0 ][ 0 ] = VAR_14;



 VAR_25.width = VAR_21->patchWidth;
 VAR_25.height = VAR_21->patchHeight;
 VAR_25.verts = VAR_23;

 VAR_26 = FUNC_7( VAR_25, VAR_22->patchIterations );
 FUNC_3( *VAR_26 );

 VAR_27 = FUNC_6( VAR_26 );
 FUNC_1( VAR_26 );
 FUNC_10( VAR_23 );




 for ( VAR_14 = 0; VAR_14 < ( VAR_27->width * VAR_27->height ); VAR_14++ )
 {
  VAR_24[ 0 ] = &VAR_27->verts[ VAR_14 ];
  if ( VAR_24[ 0 ]->color[ 0 ][ 0 ] >= VAR_21->numVerts ) {
   VAR_24[ 0 ]->color[ 0 ][ 0 ] = VAR_21->numVerts - 1;
  }
 }


 for ( VAR_16 = 0; VAR_16 < ( VAR_27->height - 1 ); VAR_16++ )
 {
  for ( VAR_15 = 0; VAR_15 < ( VAR_27->width - 1 ); VAR_15++ )
  {

   VAR_19[ 0 ] = VAR_15 + ( VAR_16 * VAR_27->width );
   VAR_19[ 1 ] = VAR_15 + ( ( VAR_16 + 1 ) * VAR_27->width );
   VAR_19[ 2 ] = VAR_15 + 1 + ( ( VAR_16 + 1 ) * VAR_27->width );
   VAR_19[ 3 ] = VAR_15 + 1 + ( VAR_16 * VAR_27->width );
   VAR_19[ 4 ] = VAR_15 + ( VAR_16 * VAR_27->width );


   VAR_20 = ( VAR_15 + VAR_16 ) & 1;


   VAR_24[ 0 ] = &VAR_27->verts[ VAR_19[ VAR_20 + 0 ] ];
   VAR_24[ 1 ] = &VAR_27->verts[ VAR_19[ VAR_20 + 1 ] ];
   VAR_24[ 2 ] = &VAR_27->verts[ VAR_19[ VAR_20 + 2 ] ];
   VAR_24[ 3 ] = &VAR_27->verts[ VAR_19[ VAR_20 + 3 ] ];


   VAR_31 = FUNC_2( VAR_30, VAR_24[ 0 ]->xyz, VAR_24[ 1 ]->xyz, VAR_24[ 2 ]->xyz );
   if ( VAR_31 ) {
    VAR_29 = FUNC_0( VAR_24[ 1 ]->xyz, VAR_30 ) - VAR_30[ 3 ];
    if ( FUNC_9( VAR_29 ) > VAR_1 ) {
     VAR_31 = VAR_3;
    }
   }


   if ( VAR_31 ) {
    VAR_32.numVerts = 4;
    for ( VAR_17 = 0; VAR_17 < 4; VAR_17++ )
    {

     FUNC_11( &VAR_32.verts[ VAR_17 ], VAR_24[ VAR_17 ], sizeof( bspDrawVert_t ) );


     for ( VAR_14 = 0; VAR_14 < VAR_0; VAR_14++ )
     {
      VAR_28 = FUNC_4( VAR_14, VAR_21->firstVert + VAR_24[ VAR_17 ]->color[ 0 ][ 0 ] );
      FUNC_8( VAR_28, VAR_32.verts[ VAR_17 ].color[ VAR_14 ] );
      VAR_32.verts[ VAR_17 ].color[ VAR_14 ][ 3 ] = VAR_24[ VAR_17 ]->color[ VAR_14 ][ 3 ];
     }
    }


    FUNC_5( VAR_8, VAR_21, VAR_9, VAR_10, VAR_11, VAR_12, VAR_4, &VAR_32, VAR_13 );
   }


   else
   {
    VAR_32.numVerts = 3;
    for ( VAR_18 = 0; VAR_18 < 2; VAR_18++ )
    {
     for ( VAR_17 = 0; VAR_17 < 3 + VAR_18; VAR_17++ )
     {

      if ( VAR_17 == 1 && VAR_18 == 1 ) {
       VAR_17++;
      }


      FUNC_11( &VAR_32.verts[ VAR_17 ], VAR_24[ VAR_17 ], sizeof( bspDrawVert_t ) );


      for ( VAR_14 = 0; VAR_14 < VAR_0; VAR_14++ )
      {
       VAR_28 = FUNC_4( VAR_14, VAR_21->firstVert + VAR_24[ VAR_17 ]->color[ 0 ][ 0 ] );
       FUNC_8( VAR_28, VAR_32.verts[ VAR_17 ].color[ VAR_14 ] );
       VAR_32.verts[ VAR_17 ].color[ VAR_14 ][ 3 ] = VAR_24[ VAR_17 ]->color[ VAR_14 ][ 3 ];
      }
     }


     FUNC_5( VAR_8, VAR_21, VAR_9, VAR_10, VAR_11, VAR_12, VAR_4, &VAR_32, VAR_13 );
    }
   }
  }
 }


 FUNC_1( VAR_27 );
}
