
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,size_t) ;
 char* FUNC_1 (char*,char const*,int ) ;
 int FUNC_2 () ;
 size_t FUNC_3 (char*) ;

char *FUNC_4( char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3 ) {
 size_t VAR_4 = FUNC_3( VAR_0 );

 if ( VAR_4 > VAR_1 ) {
  FUNC_2();
 }

 return FUNC_1( VAR_0 + VAR_4, VAR_2, FUNC_0( VAR_3, VAR_1 - VAR_4 ) );
}
