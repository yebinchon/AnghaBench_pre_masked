
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int surfaceFlags; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_9__ {scalar_t__ numVerts; scalar_t__ type; int lightmapNum; struct TYPE_9__* nextOnShader; TYPE_1__* shaderInfo; int lightmapAxis; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_10__ {int firstDrawSurf; } ;
typedef TYPE_3__ entity_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_2__** VAR_18 ;

void FUNC_4( entity_t *VAR_19 ){
 int VAR_20, VAR_21;
 mapDrawSurface_t *VAR_22;
 shaderInfo_t *VAR_23;



 FUNC_2( VAR_10,"--- AllocateLightmaps ---\n" );




 VAR_17 = 0;
 for ( VAR_20 = VAR_19->firstDrawSurf; VAR_20 < VAR_16; VAR_20++ )
 {

  VAR_22 = &VAR_14[ VAR_20 ];
  VAR_23 = VAR_22->shaderInfo;
  if ( VAR_23->surfaceFlags & VAR_9 ) {
   continue;
  }
  if ( VAR_22->numVerts <= 0 ) {
   continue;
  }


  if ( VAR_22->type != VAR_3 && VAR_22->type != VAR_6 ) {
   continue;
  }





  for ( VAR_21 = 0 ; VAR_21 < VAR_17; VAR_21++ )
  {
   if ( VAR_22->shaderInfo == VAR_18[ VAR_21 ]->shaderInfo ) {
    VAR_22->nextOnShader = VAR_18[ VAR_21 ];
    VAR_18[ VAR_21 ] = VAR_22;
    break;
   }
  }


  if ( VAR_21 == VAR_17 ) {
   if ( VAR_17 >= VAR_2 ) {
    FUNC_1( "MAX_MAP_SHADERS" );
   }
   VAR_18[ VAR_21 ] = VAR_22;
   VAR_22->nextOnShader = ((void*)0);
   VAR_17++;
  }
 }


 for ( VAR_20 = VAR_19->firstDrawSurf; VAR_20 < VAR_16; VAR_20++ )
 {

  VAR_22 = &VAR_14[ VAR_20 ];
  VAR_23 = VAR_22->shaderInfo;
  if ( VAR_23->surfaceFlags & VAR_9 ) {
   continue;
  }
  if ( VAR_22->numVerts <= 0 ) {
   continue;
  }


  if ( VAR_22->type != VAR_8 && VAR_22->type != VAR_4 ) {
   continue;
  }


  if ( FUNC_3( VAR_22->lightmapAxis ) <= 0 ) {
   continue;
  }


  for ( VAR_21 = 0; VAR_21 < VAR_17; VAR_21++ )
  {
   if ( VAR_22->shaderInfo == VAR_18[ VAR_21 ]->shaderInfo ) {
    VAR_22->nextOnShader = VAR_18[ VAR_21 ];
    VAR_18[ VAR_21 ] = VAR_22;
    break;
   }
  }


  if ( VAR_21 == VAR_17 ) {
   if ( VAR_17 >= VAR_2 ) {
    FUNC_1( "MAX_MAP_SHADERS" );
   }
   VAR_18[ VAR_21 ] = VAR_22;
   VAR_22->nextOnShader = ((void*)0);
   VAR_17++;
  }
 }


 FUNC_2( VAR_10, "%9d unique shaders\n", VAR_17 );


 for ( VAR_20 = 0; VAR_20 < VAR_17; VAR_20++ )
 {
  VAR_23 = VAR_18[ VAR_20 ]->shaderInfo;
  for ( VAR_22 = VAR_18[ VAR_20 ]; VAR_22; VAR_22 = VAR_22->nextOnShader )
  {

   if ( VAR_23->surfaceFlags & VAR_7 ) {
    VAR_22->lightmapNum = -3;
   }
   else if ( VAR_23->surfaceFlags & VAR_5 ) {
    VAR_22->lightmapNum = -1;
   }
   else{
    FUNC_0( VAR_22 );
   }
  }
 }


 FUNC_2( VAR_10, "%9d exact lightmap texels\n", VAR_11 );
 FUNC_2( VAR_10, "%9d block lightmap texels\n", VAR_15 * VAR_1 * VAR_0 );
 FUNC_2( VAR_10, "%9d non-planar or terrain lightmap texels\n", VAR_12 );
 FUNC_2( VAR_10, "%9d planar patch lightmaps\n", VAR_13 );
 FUNC_2( VAR_10, "%9d lightmap textures, size: %d Kbytes\n", VAR_15, ( VAR_15 * VAR_1 * VAR_0 * 3 ) / 1024 );
}
