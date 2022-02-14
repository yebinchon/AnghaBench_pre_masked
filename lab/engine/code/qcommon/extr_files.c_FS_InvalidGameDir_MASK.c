
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

qboolean FUNC_3( const char *VAR_2 ) {
 if ( !FUNC_1( VAR_2, "." ) || !FUNC_1( VAR_2, ".." )
  || !FUNC_1( VAR_2, "/" ) || !FUNC_1( VAR_2, "\\" )
  || FUNC_2( VAR_2, "/.." ) || FUNC_2( VAR_2, "\\.." )
  || FUNC_0( VAR_2 ) ) {
  return VAR_1;
 }

 return VAR_0;
}
