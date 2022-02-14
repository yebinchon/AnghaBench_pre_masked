
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_userName ;


 int FUNC_0 (char*,unsigned long*) ;
 int FUNC_1 (char*,char*) ;

char *FUNC_2( void )
{
 static char VAR_0[1024];
 unsigned long VAR_1 = sizeof( VAR_0 );

 if( !FUNC_0( VAR_0, &VAR_1 ) )
  FUNC_1( VAR_0, "player" );

 if( !VAR_0[0] )
 {
  FUNC_1( VAR_0, "player" );
 }

 return VAR_0;
}
