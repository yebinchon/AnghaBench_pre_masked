
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,int) ;
 char FUNC_4 (char const) ;

void FUNC_5( const char *VAR_0 ){
 const char *VAR_1;
 char VAR_2;
 char VAR_3[1024];
 if ( VAR_0[1] == ':' ) {
  VAR_0 += 2;
 }

 for ( VAR_1 = VAR_0 + 1 ; *VAR_1 ; VAR_1++ )
 {
  VAR_2 = *VAR_1;
  if ( VAR_2 == '/' || VAR_2 == '\\' ) {
   FUNC_3( VAR_3, VAR_0, VAR_1 - VAR_0 );
   VAR_3[ VAR_1 - VAR_0 ] = 0;
   FUNC_0( VAR_3 );
  }
 }






}
