
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int tree_t ;
typedef int shaderInfo_t ;
struct TYPE_5__ {int fogNum; int numVerts; int numIndexes; TYPE_2__* indexes; TYPE_2__* verts; int * shaderInfo; } ;
typedef TYPE_1__ mapDrawSurface_t ;
typedef int entity_t ;
struct TYPE_6__ {int xyz; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,int*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 void* FUNC_7 (int) ;

void FUNC_8( entity_t *VAR_4, tree_t *VAR_5, char *VAR_6 ){
 shaderInfo_t *VAR_7;
 mapDrawSurface_t *VAR_8;
 vec3_t VAR_9, VAR_10;
 int VAR_11, VAR_12[] =
 {
  0, 1, 2, 0, 2, 3,
  4, 7, 5, 5, 7, 6,
  1, 5, 6, 1, 6, 2,
  0, 4, 5, 0, 5, 1,
  2, 6, 7, 2, 7, 3,
  3, 7, 4, 3, 4, 0
 };



 if ( VAR_6 == ((void*)0) || VAR_6[ 0 ] == '\0' ) {
  return;
 }


 FUNC_2( VAR_1, "--- MakeFogHullSurfs ---\n" );


 FUNC_3( VAR_3, VAR_9 );
 FUNC_3( VAR_2, VAR_10 );
 for ( VAR_11 = 0; VAR_11 < 3; VAR_11++ )
 {
  VAR_9[ VAR_11 ] -= 128;
  VAR_10[ VAR_11 ] += 128;
 }


 VAR_7 = FUNC_1( VAR_6 );


 VAR_8 = FUNC_0( VAR_0 );
 VAR_8->shaderInfo = VAR_7;
 VAR_8->fogNum = -1;
 VAR_8->numVerts = 8;
 VAR_8->verts = FUNC_7( VAR_8->numVerts * sizeof( *VAR_8->verts ) );
 FUNC_6( VAR_8->verts, 0, VAR_8->numVerts * sizeof( *VAR_8->verts ) );
 VAR_8->numIndexes = 36;
 VAR_8->indexes = FUNC_7( VAR_8->numIndexes * sizeof( *VAR_8->indexes ) );
 FUNC_6( VAR_8->indexes, 0, VAR_8->numIndexes * sizeof( *VAR_8->indexes ) );


 FUNC_4( VAR_8->verts[ 0 ].xyz, VAR_9[ 0 ], VAR_9[ 1 ], VAR_9[ 2 ] );
 FUNC_4( VAR_8->verts[ 1 ].xyz, VAR_9[ 0 ], VAR_10[ 1 ], VAR_9[ 2 ] );
 FUNC_4( VAR_8->verts[ 2 ].xyz, VAR_10[ 0 ], VAR_10[ 1 ], VAR_9[ 2 ] );
 FUNC_4( VAR_8->verts[ 3 ].xyz, VAR_10[ 0 ], VAR_9[ 1 ], VAR_9[ 2 ] );

 FUNC_4( VAR_8->verts[ 4 ].xyz, VAR_9[ 0 ], VAR_9[ 1 ], VAR_10[ 2 ] );
 FUNC_4( VAR_8->verts[ 5 ].xyz, VAR_9[ 0 ], VAR_10[ 1 ], VAR_10[ 2 ] );
 FUNC_4( VAR_8->verts[ 6 ].xyz, VAR_10[ 0 ], VAR_10[ 1 ], VAR_10[ 2 ] );
 FUNC_4( VAR_8->verts[ 7 ].xyz, VAR_10[ 0 ], VAR_9[ 1 ], VAR_10[ 2 ] );


 FUNC_5( VAR_8->indexes, VAR_12, VAR_8->numIndexes * sizeof( *VAR_8->indexes ) );
}
