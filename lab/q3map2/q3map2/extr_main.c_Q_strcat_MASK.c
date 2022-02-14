
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 () ;
 size_t FUNC_2 (char*) ;

char *FUNC_3( char *VAR_0, size_t VAR_1, const char *VAR_2 ) {
 size_t VAR_3 = FUNC_2( VAR_0 );

 if ( VAR_3 > VAR_1 ) {
  FUNC_1();
 }

 return FUNC_0( VAR_0 + VAR_3, VAR_2, VAR_1 - VAR_3 );
}
