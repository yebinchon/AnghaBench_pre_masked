
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SDL_Event ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,int,int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4( void )
{
 SDL_Event VAR_2[ 1 ];
 int VAR_3 = 0;


 FUNC_3( );
 while( ( VAR_3 = FUNC_2( VAR_2, 1, VAR_0,
  VAR_1, VAR_1 ) ) > 0 ) { }

 if ( VAR_3 < 0 )
  FUNC_0( "IN_GobbleMotionEvents failed: %s\n", FUNC_1( ) );
}
