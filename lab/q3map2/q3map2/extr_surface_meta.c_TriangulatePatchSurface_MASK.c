
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int width; int height; int verts; } ;
typedef TYPE_2__ mesh_t ;
struct TYPE_19__ {int numVerts; scalar_t__ type; int patchWidth; int patchHeight; int* indexes; scalar_t__ numIndexes; int verts; TYPE_1__* shaderInfo; int longestCurve; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_17__ {int compileFlags; } ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_7 (TYPE_2__,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int* FUNC_10 (int) ;

void FUNC_11( mapDrawSurface_t *VAR_7 ){
 int VAR_8, VAR_9, VAR_10, VAR_11[ 5 ], VAR_12;
 mapDrawSurface_t *VAR_13;
 mesh_t VAR_14, *VAR_15, *VAR_16;



 if ( VAR_7->numVerts == 0 || VAR_7->type != VAR_2 || VAR_4 == VAR_6 ) {
  return;
 }


 VAR_14.width = VAR_7->patchWidth;
 VAR_14.height = VAR_7->patchHeight;
 VAR_14.verts = VAR_7->verts;

 VAR_8 = FUNC_4( VAR_7->longestCurve, VAR_5 );
 VAR_15 = FUNC_7( VAR_14, VAR_8 );


 FUNC_5( *VAR_15 );
 VAR_16 = FUNC_6( VAR_15 );
 FUNC_3( VAR_15 );



 VAR_13 = FUNC_0( VAR_1 );
 FUNC_9( VAR_13, VAR_7, sizeof( *VAR_7 ) );


 if ( !( VAR_7->shaderInfo->compileFlags & VAR_0 ) ) {
  FUNC_2( VAR_7 );
 }


 VAR_7 = VAR_13;


 VAR_7->type = VAR_1;
 VAR_7->numIndexes = 0;
 VAR_7->indexes = FUNC_10( VAR_16->width * VAR_16->height * 6 * sizeof( int ) );


 VAR_7->numVerts = ( VAR_16->width * VAR_16->height );
 VAR_7->verts = VAR_16->verts;


 for ( VAR_10 = 0; VAR_10 < ( VAR_16->height - 1 ); VAR_10++ )
 {
  for ( VAR_9 = 0; VAR_9 < ( VAR_16->width - 1 ); VAR_9++ )
  {

   VAR_11[ 0 ] = VAR_9 + ( VAR_10 * VAR_16->width );
   VAR_11[ 1 ] = VAR_9 + ( ( VAR_10 + 1 ) * VAR_16->width );
   VAR_11[ 2 ] = VAR_9 + 1 + ( ( VAR_10 + 1 ) * VAR_16->width );
   VAR_11[ 3 ] = VAR_9 + 1 + ( VAR_10 * VAR_16->width );
   VAR_11[ 4 ] = VAR_9 + ( VAR_10 * VAR_16->width );


   VAR_12 = ( VAR_9 + VAR_10 ) & 1;


   VAR_7->indexes[ VAR_7->numIndexes++ ] = VAR_11[ VAR_12 + 0 ];
   VAR_7->indexes[ VAR_7->numIndexes++ ] = VAR_11[ VAR_12 + 1 ];
   VAR_7->indexes[ VAR_7->numIndexes++ ] = VAR_11[ VAR_12 + 2 ];


   VAR_7->indexes[ VAR_7->numIndexes++ ] = VAR_11[ VAR_12 + 0 ];
   VAR_7->indexes[ VAR_7->numIndexes++ ] = VAR_11[ VAR_12 + 2 ];
   VAR_7->indexes[ VAR_7->numIndexes++ ] = VAR_11[ VAR_12 + 3 ];
  }
 }


 FUNC_8( VAR_16 );


 VAR_3++;


 FUNC_1( 1, VAR_7 );
}
