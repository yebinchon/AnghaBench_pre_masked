
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int soundInterface_t ;
struct TYPE_3__ {int (* Shutdown ) () ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 () ;

void FUNC_4( void )
{
 if( VAR_0.Shutdown ) {
  VAR_0.Shutdown( );
 }

 FUNC_1( &VAR_0, 0, sizeof( soundInterface_t ) );

 FUNC_0( "play" );
 FUNC_0( "music");
 FUNC_0( "stopmusic");
 FUNC_0( "s_list" );
 FUNC_0( "s_stop" );
 FUNC_0( "s_info" );

 FUNC_2( );
}
