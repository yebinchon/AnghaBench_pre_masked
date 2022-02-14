
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
typedef int shaderInfo_t ;
struct TYPE_12__ {int normal; int dist; } ;
struct TYPE_14__ {TYPE_1__ plane; int side; TYPE_4__** nodes; TYPE_2__* winding; struct TYPE_14__** next; } ;
typedef TYPE_3__ portal_t ;
struct TYPE_15__ {scalar_t__ planenum; TYPE_3__* portals; scalar_t__ opaque; struct TYPE_15__** children; } ;
typedef TYPE_4__ node_t ;
struct TYPE_16__ {int** lightmapVecs; int fogNum; int numVerts; TYPE_6__* verts; int planeNum; int sideRef; int planar; int * shaderInfo; } ;
typedef TYPE_5__ mapDrawSurface_t ;
struct TYPE_17__ {int* xyz; int* normal; int** color; scalar_t__* st; } ;
typedef TYPE_6__ bspDrawVert_t ;


 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int*) ;
 int * VAR_3 ;
 int FUNC_6 (TYPE_6__*,int ,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8( node_t *VAR_6, shaderInfo_t *VAR_7 ){
 int VAR_8, VAR_9, VAR_10, VAR_11;
 portal_t *VAR_12;
 winding_t *VAR_13;
 mapDrawSurface_t *VAR_14;
 bspDrawVert_t *VAR_15;



 if ( VAR_6->planenum != VAR_1 ) {
  FUNC_8( VAR_6->children[ 0 ], VAR_7 );
  FUNC_8( VAR_6->children[ 1 ], VAR_7 );
  return;
 }


 if ( VAR_6->opaque ) {
  return;
 }


 for ( VAR_10 = 0, VAR_12 = VAR_6->portals; VAR_12 != ((void*)0); VAR_10++, VAR_12 = VAR_12->next[ VAR_11 ] )
 {

  VAR_13 = VAR_12->winding;
  VAR_11 = ( VAR_12->nodes[ 1 ] == VAR_6 );


  if ( VAR_13 && VAR_12->nodes[ 0 ] == VAR_6 ) {

   if ( FUNC_4( VAR_12 ) == VAR_4 ) {
    continue;
   }


   if ( VAR_13->numpoints > 64 ) {
    FUNC_2( "MakePortalSurfs_r: w->numpoints = %d", VAR_13->numpoints );
   }


   VAR_14 = FUNC_0( VAR_2 );
   VAR_14->shaderInfo = VAR_7;
   VAR_14->planar = VAR_5;
   VAR_14->sideRef = FUNC_1( VAR_12->side, ((void*)0) );
   VAR_14->planeNum = FUNC_3( VAR_12->plane.normal, VAR_12->plane.dist, 0, ((void*)0) );
   FUNC_5( VAR_12->plane.normal, VAR_14->lightmapVecs[ 2 ] );
   VAR_14->fogNum = -1;
   VAR_14->numVerts = VAR_13->numpoints;
   VAR_14->verts = FUNC_7( VAR_14->numVerts * sizeof( *VAR_14->verts ) );
   FUNC_6( VAR_14->verts, 0, VAR_14->numVerts * sizeof( *VAR_14->verts ) );


   for ( VAR_8 = 0; VAR_8 < VAR_14->numVerts; VAR_8++ )
   {

    VAR_15 = VAR_14->verts + VAR_8;


    FUNC_5( VAR_13->p[ VAR_8 ], VAR_15->xyz );
    FUNC_5( VAR_12->plane.normal, VAR_15->normal );
    VAR_15->st[ 0 ] = 0;
    VAR_15->st[ 1 ] = 0;
    for ( VAR_9 = 0; VAR_9 < VAR_0; VAR_9++ )
    {
     FUNC_5( VAR_3[ VAR_10 % 12 ], VAR_15->color[ VAR_9 ] );
     VAR_15->color[ VAR_9 ][ 3 ] = 32;
    }
   }
  }
 }
}
