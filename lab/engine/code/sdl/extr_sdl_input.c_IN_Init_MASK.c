
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
typedef int SDL_Window ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int * VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 TYPE_1__* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;

void FUNC_10( void *VAR_13 )
{
 int VAR_14;

 if( !FUNC_9( VAR_3 ) )
 {
  FUNC_1( VAR_2, "IN_Init called before SDL_Init( SDL_INIT_VIDEO )" );
  return;
 }

 VAR_6 = (SDL_Window *)VAR_13;

 FUNC_0( "\n------- Input Initialization -------\n" );

 VAR_9 = FUNC_2( "in_keyboardDebug", "0", VAR_0 );


 VAR_10 = FUNC_2( "in_mouse", "1", VAR_0 );
 VAR_11 = FUNC_2( "in_nograb", "0", VAR_0 );

 VAR_7 = FUNC_2( "in_joystick", "0", VAR_0|VAR_1 );
 VAR_8 = FUNC_2( "joy_threshold", "0.15", VAR_0 );

 FUNC_8( );

 VAR_12 = ( VAR_10->value != 0 );
 FUNC_5( FUNC_4( "r_fullscreen" ) != 0 );

 VAR_14 = FUNC_7( VAR_6 );
 FUNC_3( "com_unfocused", !( VAR_14 & VAR_4 ) );
 FUNC_3( "com_minimized", VAR_14 & VAR_5 );

 FUNC_6( );
 FUNC_0( "------------------------------------\n" );
}
