
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {size_t planenum; } ;
typedef TYPE_1__ side_t ;
typedef int qboolean ;
struct TYPE_23__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_24__ {int width; int height; TYPE_4__* verts; } ;
typedef TYPE_3__ mesh_t ;
struct TYPE_25__ {int patchWidth; int patchHeight; int numVerts; struct TYPE_25__* verts; } ;
typedef TYPE_4__ mapDrawSurface_t ;
typedef int entity_t ;
struct TYPE_26__ {TYPE_1__* sides; } ;
typedef TYPE_5__ brush_t ;


 TYPE_4__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,int ,int ,TYPE_3__**,TYPE_3__**) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_8 (TYPE_4__*,TYPE_4__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_9 (int) ;

qboolean FUNC_10( entity_t *VAR_6, mapDrawSurface_t *VAR_7, brush_t *VAR_8 ){
 int VAR_9, VAR_10;
 side_t *VAR_11;
 plane_t *VAR_12;
 mesh_t *VAR_13[VAR_0];
 int VAR_14;
 mesh_t *VAR_15, *VAR_16, *VAR_17;
 mapDrawSurface_t *VAR_18;

 VAR_15 = FUNC_1( VAR_7 );
 VAR_14 = 0;




 for ( VAR_9 = 4 ; VAR_9 <= 5 ; VAR_9++ ) {
  VAR_11 = &VAR_8->sides[ VAR_9 ];
  VAR_12 = &VAR_2[ VAR_11->planenum ];

  FUNC_5( VAR_15, VAR_12->normal, VAR_12->dist, &VAR_16, &VAR_17 );

  if ( !VAR_17 ) {

   for ( VAR_10 = 0 ; VAR_10 < VAR_14 ; VAR_10++ ) {
    FUNC_3( VAR_13[VAR_10] );
   }
   return VAR_4;
  }
  VAR_15 = VAR_17;

  if ( VAR_16 ) {
   if ( VAR_14 == VAR_0 ) {
    FUNC_2( "MAX_BRUSH_SIDES" );
   }
   VAR_13[ VAR_14 ] = VAR_16;
   VAR_14++;
  }
 }


 VAR_3 += VAR_14;
 for ( VAR_9 = 0; VAR_9 < VAR_14; VAR_9++ )
 {

  VAR_13[ VAR_9 ] = FUNC_6( VAR_13[ VAR_9 ] );
  FUNC_4( VAR_13[ VAR_9 ] );


  VAR_18 = FUNC_0( VAR_1 );
  FUNC_8( VAR_18, VAR_7, sizeof( *VAR_7 ) );
  VAR_18->patchWidth = VAR_13[ VAR_9 ]->width;
  VAR_18->patchHeight = VAR_13[ VAR_9 ]->height;
  VAR_18->numVerts = VAR_13[ VAR_9 ]->width * VAR_13[ VAR_9 ]->height;
  VAR_18->verts = FUNC_9( VAR_18->numVerts * sizeof( *VAR_18->verts ) );
  FUNC_8( VAR_18->verts, VAR_13[ VAR_9 ]->verts, VAR_18->numVerts * sizeof( *VAR_18->verts ) );


  FUNC_3( VAR_13[ VAR_9 ] );
 }



 if ( VAR_14 > 0 ) {

  VAR_15 = FUNC_6( VAR_15 );
  FUNC_4( VAR_15 );


  VAR_7->patchWidth = VAR_15->width;
  VAR_7->patchHeight = VAR_15->height;
  VAR_7->numVerts = VAR_15->width * VAR_15->height;
  FUNC_7( VAR_7->verts );
  VAR_7->verts = FUNC_9( VAR_7->numVerts * sizeof( *VAR_7->verts ) );
  FUNC_8( VAR_7->verts, VAR_15->verts, VAR_7->numVerts * sizeof( *VAR_7->verts ) );
 }


 FUNC_3( VAR_15 );
 return VAR_5;
}
