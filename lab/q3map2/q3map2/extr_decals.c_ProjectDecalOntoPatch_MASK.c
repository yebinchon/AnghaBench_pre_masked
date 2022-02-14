
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int numpoints; scalar_t__** p; } ;
typedef TYPE_2__ winding_t ;
typedef scalar_t__* vec4_t ;
struct TYPE_22__ {int width; int height; TYPE_1__* verts; } ;
typedef TYPE_3__ mesh_t ;
struct TYPE_23__ {size_t planeNum; int patchWidth; int patchHeight; int longestCurve; TYPE_1__* verts; scalar_t__ planar; } ;
typedef TYPE_4__ mapDrawSurface_t ;
struct TYPE_24__ {scalar_t__** planes; } ;
typedef TYPE_5__ decalProjector_t ;
struct TYPE_25__ {scalar_t__ dist; int normal; } ;
struct TYPE_20__ {int xyz; } ;


 TYPE_2__* FUNC_0 (int) ;
 float FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_3__,int) ;
 int FUNC_8 (int ,scalar_t__*) ;
 scalar_t__* VAR_0 ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_10( decalProjector_t *VAR_3, mapDrawSurface_t *VAR_4 ){
 int VAR_5, VAR_6, VAR_7[ 5 ], VAR_8, VAR_9;
 vec4_t VAR_10;
 float VAR_11;
 mesh_t VAR_12, *VAR_13, *VAR_14;
 winding_t *VAR_15;



 if ( VAR_4->planar ) {
  FUNC_8( VAR_1[ VAR_4->planeNum ].normal, VAR_10 );
  VAR_10[ 3 ] = VAR_1[ VAR_4->planeNum ].dist + FUNC_1( VAR_10, VAR_0 );
  VAR_11 = FUNC_1( VAR_3->planes[ 0 ], VAR_10 );
  if ( VAR_11 < -0.0001f ) {
   return;
  }
 }


 VAR_12.width = VAR_4->patchWidth;
 VAR_12.height = VAR_4->patchHeight;
 VAR_12.verts = VAR_4->verts;
 VAR_9 = FUNC_3( VAR_4->longestCurve, VAR_2 );
 VAR_14 = FUNC_7( VAR_12, VAR_9 );


 FUNC_5( *VAR_14 );
 VAR_13 = FUNC_6( VAR_14 );
 FUNC_2( VAR_14 );


 for ( VAR_6 = 0; VAR_6 < ( VAR_13->height - 1 ); VAR_6++ )
 {
  for ( VAR_5 = 0; VAR_5 < ( VAR_13->width - 1 ); VAR_5++ )
  {

   VAR_7[ 0 ] = VAR_5 + ( VAR_6 * VAR_13->width );
   VAR_7[ 1 ] = VAR_5 + ( ( VAR_6 + 1 ) * VAR_13->width );
   VAR_7[ 2 ] = VAR_5 + 1 + ( ( VAR_6 + 1 ) * VAR_13->width );
   VAR_7[ 3 ] = VAR_5 + 1 + ( VAR_6 * VAR_13->width );
   VAR_7[ 4 ] = VAR_5 + ( VAR_6 * VAR_13->width );


   VAR_8 = ( VAR_5 + VAR_6 ) & 1;


   VAR_15 = FUNC_0( 3 );
   VAR_15->numpoints = 3;
   FUNC_8( VAR_13->verts[ VAR_7[ VAR_8 + 0 ] ].xyz, VAR_15->p[ 0 ] );
   FUNC_8( VAR_13->verts[ VAR_7[ VAR_8 + 1 ] ].xyz, VAR_15->p[ 1 ] );
   FUNC_8( VAR_13->verts[ VAR_7[ VAR_8 + 2 ] ].xyz, VAR_15->p[ 2 ] );
   FUNC_4( VAR_3, VAR_4, VAR_15 );


   VAR_15 = FUNC_0( 3 );
   VAR_15->numpoints = 3;
   FUNC_8( VAR_13->verts[ VAR_7[ VAR_8 + 0 ] ].xyz, VAR_15->p[ 0 ] );
   FUNC_8( VAR_13->verts[ VAR_7[ VAR_8 + 2 ] ].xyz, VAR_15->p[ 1 ] );
   FUNC_8( VAR_13->verts[ VAR_7[ VAR_8 + 3 ] ].xyz, VAR_15->p[ 2 ] );
   FUNC_4( VAR_3, VAR_4, VAR_15 );
  }
 }


 FUNC_9( VAR_13 );
}
