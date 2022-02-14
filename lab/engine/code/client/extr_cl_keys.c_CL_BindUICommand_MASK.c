
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static qboolean FUNC_2( const char *VAR_3 ) {
 if ( FUNC_0( ) & VAR_0 )
  return VAR_1;

 if ( !FUNC_1( VAR_3, "toggleconsole" ) )
  return VAR_2;
 if ( !FUNC_1( VAR_3, "togglemenu" ) )
  return VAR_2;

 return VAR_1;
}
