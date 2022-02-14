
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char const*,char*) ;

void FUNC_4( void )
{
 const char* VAR_2 = FUNC_1( "TERM" );

 FUNC_0();

 VAR_1 = FUNC_2( VAR_0 ) &&
  !( VAR_2 && ( !FUNC_3( VAR_2, "raw" ) || !FUNC_3( VAR_2, "dumb" ) ) );
}
