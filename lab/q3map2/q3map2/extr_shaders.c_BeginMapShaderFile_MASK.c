
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* shaderPath; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 TYPE_1__* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*,char*,char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;

void FUNC_6( const char *VAR_6 ){
 char VAR_7[ 1024 ];
 int VAR_8;



 VAR_2[ 0 ] = '\0';
 VAR_3[ 0 ] = '\0';
 if ( VAR_6 == ((void*)0) || VAR_6[ 0 ] == '\0' ) {
  return;
 }


 FUNC_4( VAR_7, VAR_6 );
 FUNC_0( VAR_7 );


 VAR_8 = FUNC_5( VAR_7 ) - 1;
 while ( VAR_8 > 0 && VAR_7[ VAR_8 ] != '/' && VAR_7[ VAR_8 ] != '\\' )
  VAR_8--;
 FUNC_4( VAR_2, &VAR_7[ VAR_8 + 1 ] );
 VAR_7[ VAR_8 ] = '\0';
 if ( VAR_8 <= 0 ) {
  return;
 }


 FUNC_3( VAR_3, "%s/../%s/q3map2_%s.shader", VAR_7, VAR_1->shaderPath, VAR_2 );
 FUNC_1( VAR_0, "Map has shader script %s\n", VAR_3 );


 FUNC_2( VAR_3 );


 VAR_5 = VAR_4;
}
