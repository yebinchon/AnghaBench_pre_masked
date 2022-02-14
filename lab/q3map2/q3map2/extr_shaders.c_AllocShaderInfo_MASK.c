
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float shadeAngleDegrees; double vertexScale; void* lmCustomHeight; void* lmCustomWidth; int mod; void* notjunc; void* forceSunlight; int vertexShadows; void* patchShadows; int lightmapSampleOffset; scalar_t__ lightmapSampleSize; void* polygonOffset; int lightStyle; int bounceScale; int backsplashDistance; int backsplashFraction; int compileFlags; int surfaceFlags; int contentFlags; } ;
typedef TYPE_1__ shaderInfo_t ;


 int FUNC_0 (char*,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 void* VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_4 (int) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static shaderInfo_t *FUNC_5( void ){
 shaderInfo_t *VAR_11;



 if ( VAR_10 == ((void*)0) ) {
  VAR_10 = FUNC_4( sizeof( shaderInfo_t ) * VAR_5 );
  VAR_7 = 0;
 }


 if ( VAR_7 == VAR_5 ) {
  FUNC_1( "MAX_SHADER_INFO exceeded. Remove some PK3 files or shader scripts from shaderlist.txt and try again." );
 }
 VAR_11 = &VAR_10[ VAR_7 ];
 VAR_7++;


 FUNC_3( VAR_11, 0, sizeof( shaderInfo_t ) );


 FUNC_0( "default", &VAR_11->contentFlags, &VAR_11->surfaceFlags, &VAR_11->compileFlags );

 VAR_11->backsplashFraction = VAR_2;
 VAR_11->backsplashDistance = VAR_1;

 VAR_11->bounceScale = VAR_3;

 VAR_11->lightStyle = VAR_4;

 VAR_11->polygonOffset = VAR_8;

 VAR_11->shadeAngleDegrees = 0.0f;
 VAR_11->lightmapSampleSize = 0;
 VAR_11->lightmapSampleOffset = VAR_0;
 VAR_11->patchShadows = VAR_8;
 VAR_11->vertexShadows = VAR_9;
 VAR_11->forceSunlight = VAR_8;
 VAR_11->vertexScale = 1.0;
 VAR_11->notjunc = VAR_8;


 FUNC_2( VAR_11->mod );


 VAR_11->lmCustomWidth = VAR_6;
 VAR_11->lmCustomHeight = VAR_6;


 return VAR_11;
}
