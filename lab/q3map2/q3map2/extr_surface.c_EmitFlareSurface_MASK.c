
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t type; size_t outputNum; int * lightmapVecs; int lightmapOrigin; void* lightStyle; int fogNum; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_9__ {int* lightmapNum; int * lightmapVecs; int lightmapOrigin; void** vertexStyles; void** lightmapStyles; int fogNum; int shaderNum; int surfaceType; } ;
typedef TYPE_3__ bspDrawSurface_t ;
struct TYPE_7__ {int surfaceFlags; int contentFlags; int shader; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 size_t VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_4( mapDrawSurface_t *VAR_10 ){
 int VAR_11;
 bspDrawSurface_t *VAR_12;



 if ( VAR_6 == VAR_9 && VAR_10->type != VAR_4 ) {
  return;
 }


 if ( VAR_7 == VAR_2 ) {
  FUNC_1( "MAX_MAP_DRAW_SURFS" );
 }


 if ( VAR_7 == VAR_2 ) {
  FUNC_1( "MAX_MAP_DRAW_SURFS" );
 }
 VAR_12 = &VAR_5[ VAR_7 ];
 VAR_10->outputNum = VAR_7;
 VAR_7++;
 FUNC_3( VAR_12, 0, sizeof( *VAR_12 ) );


 VAR_12->surfaceType = VAR_3;
 VAR_12->shaderNum = FUNC_0( VAR_10->shaderInfo->shader, &VAR_10->shaderInfo->contentFlags, &VAR_10->shaderInfo->surfaceFlags );
 VAR_12->fogNum = VAR_10->fogNum;


 for ( VAR_11 = 0; VAR_11 < VAR_1; VAR_11++ )
 {
  VAR_12->lightmapNum[ VAR_11 ] = -3;
  VAR_12->lightmapStyles[ VAR_11 ] = VAR_0;
  VAR_12->vertexStyles[ VAR_11 ] = VAR_0;
 }
 VAR_12->lightmapStyles[ 0 ] = VAR_10->lightStyle;
 VAR_12->vertexStyles[ 0 ] = VAR_10->lightStyle;

 FUNC_2( VAR_10->lightmapOrigin, VAR_12->lightmapOrigin );
 FUNC_2( VAR_10->lightmapVecs[ 0 ], VAR_12->lightmapVecs[ 0 ] );
 FUNC_2( VAR_10->lightmapVecs[ 1 ], VAR_12->lightmapVecs[ 1 ] );
 FUNC_2( VAR_10->lightmapVecs[ 2 ], VAR_12->lightmapVecs[ 2 ] );


 VAR_8[ VAR_10->type ]++;
}
