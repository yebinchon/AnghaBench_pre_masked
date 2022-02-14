
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int VAR_3 ;
 char* VAR_4 ;

qboolean FUNC_2( char *VAR_5, qboolean VAR_6 ){
 qboolean VAR_7;
 int VAR_8;



 VAR_7 = FUNC_0( VAR_6 );
 if ( VAR_7 == VAR_1 || VAR_5 == ((void*)0) || VAR_4[ 0 ] == '\0' ) {
  return VAR_7;
 }


 if ( VAR_4[ 0 ] == '}' ) {
  VAR_3--;
 }


 if ( VAR_0 != VAR_2 ) {
  FUNC_1( VAR_5, "\n" );
  for ( VAR_8 = 0; VAR_8 < VAR_3; VAR_8++ )
   FUNC_1( VAR_5, "\t" );
 }
 else{
  FUNC_1( VAR_5, " " );
 }
 VAR_0 = VAR_2;
 FUNC_1( VAR_5, VAR_4 );


 if ( VAR_4[ 0 ] == '{' ) {
  VAR_3++;
 }


 return VAR_7;
}
