
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int surfaceFlags; int contentFlags; char* damageShader; int shader; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_5__ {int surfaceFlags; int contentFlags; int shader; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,int ,char*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char const*) ;

int FUNC_5( const char *VAR_4, int *VAR_5, int *VAR_6 ){
 int VAR_7;
 shaderInfo_t *VAR_8;



 if ( VAR_4 == ((void*)0) ) {
  VAR_4 = "noshader";
 }


 for ( VAR_7 = 0; VAR_7 < VAR_3; VAR_7++ )
 {

  if ( VAR_6 != ((void*)0) && VAR_2[ VAR_7 ].surfaceFlags != *VAR_6 ) {
   continue;
  }
  if ( VAR_5 != ((void*)0) && VAR_2[ VAR_7 ].contentFlags != *VAR_5 ) {
   continue;
  }


  if ( !FUNC_1( VAR_4, VAR_2[ VAR_7 ].shader ) ) {
   return VAR_7;
  }
 }


 VAR_8 = FUNC_2( VAR_4 );


 if ( VAR_7 == VAR_0 ) {
  FUNC_0( "MAX_MAP_SHADERS" );
 }
 VAR_3++;
 FUNC_4( VAR_2[ VAR_7 ].shader, VAR_4 );
 VAR_2[ VAR_7 ].surfaceFlags = VAR_8->surfaceFlags;
 VAR_2[ VAR_7 ].contentFlags = VAR_8->contentFlags;


 if ( VAR_6 != ((void*)0) ) {
  VAR_2[ VAR_7 ].surfaceFlags = *VAR_6;
 }
 if ( VAR_5 != ((void*)0) ) {
  VAR_2[ VAR_7 ].contentFlags = *VAR_5;
 }


 if ( VAR_8->damageShader != ((void*)0) && VAR_8->damageShader[ 0 ] != '\0' ) {
  FUNC_3( VAR_1, "Shader %s has damage shader %s\n", VAR_8->shader, VAR_8->damageShader );
  FUNC_5( VAR_8->damageShader, ((void*)0), ((void*)0) );
 }


 return VAR_7;
}
