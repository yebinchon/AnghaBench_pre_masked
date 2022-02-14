
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* shader; scalar_t__ finished; } ;
typedef TYPE_1__ shaderInfo_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (char*,char const*) ;

shaderInfo_t *FUNC_7( const char *VAR_5 ){
 int VAR_6;
 shaderInfo_t *VAR_7;
 char VAR_8[ VAR_0 ];



 if ( VAR_5 == ((void*)0) || VAR_5[ 0 ] == '\0' ) {
  FUNC_5( VAR_1, "WARNING: Null or empty shader name\n" );
  VAR_5 = "missing";
 }


 FUNC_6( VAR_8, VAR_5 );
 FUNC_4( VAR_8 );


 for ( VAR_6 = 0; VAR_6 < VAR_2; VAR_6++ )
 {
  VAR_7 = &VAR_4[ VAR_6 ];
  if ( !FUNC_3( VAR_8, VAR_7->shader ) ) {

   if ( VAR_7->finished == VAR_3 ) {
    FUNC_2( VAR_7 );
    FUNC_1( VAR_7 );
   }


   return VAR_7;
  }
 }


 VAR_7 = FUNC_0();
 FUNC_6( VAR_7->shader, VAR_8 );
 FUNC_2( VAR_7 );
 FUNC_1( VAR_7 );


 return VAR_7;
}
