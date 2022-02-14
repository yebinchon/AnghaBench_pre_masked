
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_4__ {int isFullscreen; } ;
struct TYPE_5__ {TYPE_1__ glconfig; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 () ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_9( void )
{
 qboolean VAR_9;

 FUNC_4( );


 VAR_9 = ( VAR_5.state != VAR_1 && VAR_5.state != VAR_0 );


 VAR_6.glconfig.isFullscreen = FUNC_1( "r_fullscreen" ) != 0;

 if( !VAR_6.glconfig.isFullscreen && ( FUNC_6( ) & VAR_2 ) )
 {

  FUNC_3( VAR_6.glconfig.isFullscreen );
 }
 else if( !VAR_6.glconfig.isFullscreen && VAR_9 )
 {

  FUNC_3( VAR_6.glconfig.isFullscreen );
 }
 else if( !( FUNC_7( VAR_4 ) & VAR_3 ) )
 {

  FUNC_3( VAR_6.glconfig.isFullscreen );
 }
 else
  FUNC_2( VAR_6.glconfig.isFullscreen );

 FUNC_5( );


 VAR_7 = FUNC_8( );


 if( ( VAR_8 != 0 ) && ( VAR_8 < FUNC_8( ) ) )
 {
  VAR_8 = 0;
  FUNC_0( "vid_restart\n" );
 }
}
