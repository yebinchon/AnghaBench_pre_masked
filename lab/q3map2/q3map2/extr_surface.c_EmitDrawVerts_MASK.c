
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {float offset; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_12__ {int numVerts; int * verts; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_13__ {int * color; int xyz; int normal; } ;
typedef TYPE_3__ bspDrawVert_t ;
struct TYPE_14__ {int firstVert; int numVerts; } ;
typedef TYPE_4__ bspDrawSurface_t ;
struct TYPE_15__ {int maxs; int mins; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,float,int ,int ) ;
 TYPE_3__* VAR_2 ;
 TYPE_7__* VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_5 (TYPE_3__*,int *,int) ;
 int VAR_7 ;
 size_t VAR_8 ;

void FUNC_6( mapDrawSurface_t *VAR_9, bspDrawSurface_t *VAR_10 ){
 int VAR_11, VAR_12;
 bspDrawVert_t *VAR_13;
 shaderInfo_t *VAR_14;
 float VAR_15;



 VAR_14 = VAR_9->shaderInfo;
 VAR_15 = VAR_14->offset;


 VAR_10->firstVert = VAR_7;
 VAR_10->numVerts = VAR_9->numVerts;
 for ( VAR_11 = 0; VAR_11 < VAR_9->numVerts; VAR_11++ )
 {

  if ( VAR_7 == VAR_1 ) {
   FUNC_1( "MAX_MAP_DRAW_VERTS" );
  }
  FUNC_2();
  VAR_13 = &VAR_2[ VAR_7 - 1 ];


  FUNC_5( VAR_13, &VAR_9->verts[ VAR_11 ], sizeof( *VAR_13 ) );


  if ( VAR_15 != 0.0f ) {
   FUNC_4( VAR_13->xyz, VAR_15, VAR_13->normal, VAR_13->xyz );
  }




  if ( VAR_8 > 0 ) {
   FUNC_0( VAR_13->xyz, VAR_3[ VAR_8 ].mins, VAR_3[ VAR_8 ].maxs );
  }


  if ( VAR_5 ) {
   for ( VAR_12 = 0; VAR_12 < VAR_0; VAR_12++ )
    FUNC_3( VAR_4[ ( VAR_9 - VAR_6 ) % 12 ], VAR_13->color[ VAR_12 ] );
  }
 }
}
