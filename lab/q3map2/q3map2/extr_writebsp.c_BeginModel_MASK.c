
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_10__ {int width; int height; TYPE_1__* verts; } ;
struct TYPE_11__ {TYPE_2__ mesh; struct TYPE_11__* next; } ;
typedef TYPE_3__ parseMesh_t ;
struct TYPE_12__ {TYPE_3__* patches; TYPE_6__* brushes; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_13__ {int firstBSPBrush; int firstBSPSurface; int maxs; int mins; } ;
typedef TYPE_5__ bspModel_t ;
struct TYPE_14__ {scalar_t__ numsides; int compileFlags; int maxs; int mins; struct TYPE_14__* next; } ;
typedef TYPE_6__ brush_t ;
struct TYPE_9__ {int xyz; } ;


 int FUNC_0 (int ,int*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int,int,int,int,int,int) ;
 int FUNC_4 (int*,int ) ;
 TYPE_5__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;

void FUNC_5( void ){
 bspModel_t *VAR_9;
 brush_t *VAR_10;
 entity_t *VAR_11;
 vec3_t VAR_12, VAR_13;
 vec3_t VAR_14, VAR_15;
 parseMesh_t *VAR_16;
 int VAR_17;



 if ( VAR_8 == VAR_1 ) {
  FUNC_2( "MAX_MAP_MODELS" );
 }


 VAR_9 = &VAR_3[ VAR_8 ];
 VAR_11 = &VAR_4[ VAR_5 ];


 FUNC_1( VAR_14, VAR_15 );


 FUNC_1( VAR_12, VAR_13 );
 for ( VAR_10 = VAR_11->brushes; VAR_10; VAR_10 = VAR_10->next )
 {

  if ( VAR_10->numsides == 0 ) {
   continue;
  }
  FUNC_0( VAR_10->mins, VAR_12, VAR_13 );
  FUNC_0( VAR_10->maxs, VAR_12, VAR_13 );


  if ( VAR_10->compileFlags & VAR_0 ) {
   FUNC_0( VAR_10->mins, VAR_14, VAR_15 );
   FUNC_0( VAR_10->maxs, VAR_14, VAR_15 );
  }
 }


 for ( VAR_16 = VAR_11->patches; VAR_16; VAR_16 = VAR_16->next )
 {
  for ( VAR_17 = 0; VAR_17 < ( VAR_16->mesh.width * VAR_16->mesh.height ); VAR_17++ )
   FUNC_0( VAR_16->mesh.verts[VAR_17].xyz, VAR_12, VAR_13 );
 }


 if ( VAR_14[ 0 ] < 99999 ) {

  FUNC_4( VAR_14, VAR_9->mins );
  FUNC_4( VAR_15, VAR_9->maxs );
 }
 else
 {

  FUNC_4( VAR_12, VAR_9->mins );
  FUNC_4( VAR_13, VAR_9->maxs );
 }


 FUNC_3( VAR_2, "BSP bounds: { %f %f %f } { %f %f %f }\n", VAR_12[ 0 ], VAR_12[ 1 ], VAR_12[ 2 ], VAR_13[ 0 ], VAR_13[ 1 ], VAR_13[ 2 ] );
 FUNC_3( VAR_2, "Lightgrid bounds: { %f %f %f } { %f %f %f }\n", VAR_14[ 0 ], VAR_14[ 1 ], VAR_14[ 2 ], VAR_15[ 0 ], VAR_15[ 1 ], VAR_15[ 2 ] );


 VAR_9->firstBSPSurface = VAR_7;
 VAR_9->firstBSPBrush = VAR_6;
}
