
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int surfaceInfo_t ;
typedef int shaderInfo_t ;
typedef int rawLightmap_t ;
struct TYPE_9__ {int numVerts; TYPE_4__* verts; } ;
typedef TYPE_1__ radWinding_t ;
typedef int clipWork_t ;
typedef int bspDrawVert_t ;
struct TYPE_10__ {int numIndexes; int firstVert; int firstIndex; } ;
typedef TYPE_2__ bspDrawSurface_t ;
struct TYPE_12__ {int ** color; } ;
struct TYPE_11__ {int ** color; } ;


 int VAR_0 ;
 float* FUNC_0 (int,int) ;
 int FUNC_1 (int,TYPE_2__*,int *,int *,float,float,int ,TYPE_1__*,int *) ;
 int FUNC_2 (float*,int *) ;
 int* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_3__* VAR_5 ;

void FUNC_4( int VAR_6, int VAR_7, rawLightmap_t *VAR_8, shaderInfo_t *VAR_9, float VAR_10, float VAR_11, clipWork_t *VAR_12 ){
 int VAR_13, VAR_14, VAR_15, VAR_16;
 bspDrawSurface_t *VAR_17;
 surfaceInfo_t *VAR_18;
 float *VAR_19;
 radWinding_t VAR_20;



 VAR_17 = &VAR_2[ VAR_6 ];
 VAR_18 = &VAR_4[ VAR_6 ];


 VAR_20.numVerts = 3;
 for ( VAR_13 = 0; VAR_13 < VAR_17->numIndexes; VAR_13 += 3 )
 {

  for ( VAR_14 = 0; VAR_14 < 3; VAR_14++ )
  {

   VAR_16 = VAR_17->firstVert + VAR_1[ VAR_17->firstIndex + VAR_13 + VAR_14 ];


   FUNC_3( &VAR_20.verts[ VAR_14 ], &VAR_5[ VAR_16 ], sizeof( bspDrawVert_t ) );


   for ( VAR_15 = 0; VAR_15 < VAR_0; VAR_15++ )
   {
    VAR_19 = FUNC_0( VAR_15, VAR_17->firstVert + VAR_1[ VAR_17->firstIndex + VAR_13 + VAR_14 ] );
    FUNC_2( VAR_19, VAR_20.verts[ VAR_14 ].color[ VAR_15 ] );
    VAR_20.verts[ VAR_14 ].color[ VAR_15 ][ 3 ] = VAR_5[ VAR_16 ].color[ VAR_15 ][ 3 ];
   }
  }


  FUNC_1( VAR_7, VAR_17, VAR_8, VAR_9, VAR_10, VAR_11, VAR_3, &VAR_20, VAR_12 );
 }
}
