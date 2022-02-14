
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;

char *FUNC_2( char *VAR_0, const char *VAR_1 ){
 char *VAR_2;
 int VAR_3 = 0;

 VAR_2 = VAR_0 + ( FUNC_1( VAR_0 ) - 1 );

 if ( VAR_1 == ((void*)0) ) {
  VAR_1 = "";
 }
 if ( FUNC_1( VAR_1 ) < 1 ) {
  VAR_3 = 1;
 }
 if ( FUNC_1( VAR_0 ) < 1 ) {
  return VAR_0;
 }

 while ( ( VAR_2-- ) != VAR_0 )
 {
  if ( *VAR_2 == '/' || *VAR_2 == '\\' ) {
   return VAR_0;
  }

  if ( *VAR_2 == '.' ) {
   if ( VAR_3 ) {
    *VAR_2 = '\0';
    return VAR_0;
   }
   *( ++VAR_2 ) = '\0';
   break;
  }
 }
 FUNC_0( VAR_0,VAR_1 );
 return VAR_0;
}
