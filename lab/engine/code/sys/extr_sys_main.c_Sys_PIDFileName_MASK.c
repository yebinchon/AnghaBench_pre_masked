
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char const*,char const*,int ) ;

__attribute__((used)) static char *FUNC_2( const char *VAR_1 )
{
 const char *VAR_2 = FUNC_0( "fs_homepath" );

 if( *VAR_2 != '\0' )
  return FUNC_1( "%s/%s/%s", VAR_2, VAR_1, VAR_0 );

 return ((void*)0);
}
