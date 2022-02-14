
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char const*,char const*) ;
 size_t FUNC_1 (char const*) ;

FILE *FUNC_2( const char *VAR_0, const char *VAR_1 ) {
 size_t VAR_2;


 VAR_2 = FUNC_1( VAR_0 );
 if ( VAR_2 == 0 || VAR_0[VAR_2-1] == ' ' || VAR_0[VAR_2-1] == '.' ) {
  return ((void*)0);
 }

 return FUNC_0( VAR_0, VAR_1 );
}
