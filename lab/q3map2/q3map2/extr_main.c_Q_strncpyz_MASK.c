
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,char const*,size_t) ;

char *FUNC_2( char *VAR_0, const char *VAR_1, size_t VAR_2 ) {
 if ( VAR_2 == 0 ) {
  FUNC_0();
 }

 FUNC_1( VAR_0, VAR_1, VAR_2 );
 VAR_0[ VAR_2 - 1 ] = '\0';
 return VAR_0;
}
