
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_5__ {int entityNum; int lightStyle; int * lightmapVecs; int lightmapOrigin; void* shaderInfo; } ;
typedef TYPE_1__ mapDrawSurface_t ;
struct TYPE_6__ {char* flareShader; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;

mapDrawSurface_t *FUNC_3( int VAR_6, vec3_t VAR_7, vec3_t VAR_8, vec3_t VAR_9, char *VAR_10, int VAR_11 ){
 mapDrawSurface_t *VAR_12;



 if ( VAR_3 == VAR_5 ) {
  return ((void*)0);
 }


 VAR_12 = FUNC_0( VAR_2 );
 VAR_12->entityNum = VAR_6;


 if ( VAR_10 != ((void*)0) && VAR_10[ 0 ] != '\0' ) {
  VAR_12->shaderInfo = FUNC_1( VAR_10 );
 }
 else{
  VAR_12->shaderInfo = FUNC_1( VAR_4->flareShader );
 }
 if ( VAR_7 != ((void*)0) ) {
  FUNC_2( VAR_7, VAR_12->lightmapOrigin );
 }
 if ( VAR_8 != ((void*)0) ) {
  FUNC_2( VAR_8, VAR_12->lightmapVecs[ 2 ] );
 }
 if ( VAR_9 != ((void*)0) ) {
  FUNC_2( VAR_9, VAR_12->lightmapVecs[ 0 ] );
 }


 VAR_12->lightStyle = VAR_11;
 if ( VAR_12->lightStyle < 0 || VAR_12->lightStyle >= VAR_0 ) {
  VAR_12->lightStyle = VAR_1;
 }




 return VAR_12;
}
