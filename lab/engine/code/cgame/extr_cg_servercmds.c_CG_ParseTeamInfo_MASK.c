
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* clientinfo; } ;
struct TYPE_3__ {void* powerups; void* curWeapon; void* armor; void* health; void* location; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_5;
 int VAR_6;

 VAR_3 = FUNC_2( FUNC_0( 1 ) );
 if( VAR_3 < 0 || VAR_3 > VAR_1 )
 {
  FUNC_1( "CG_ParseTeamInfo: numSortedTeamPlayers out of range (%d)",
    VAR_3 );
  return;
 }

 for ( VAR_5 = 0 ; VAR_5 < VAR_3 ; VAR_5++ ) {
  VAR_6 = FUNC_2( FUNC_0( VAR_5 * 6 + 2 ) );
  if( VAR_6 < 0 || VAR_6 >= VAR_0 )
  {
    FUNC_1( "CG_ParseTeamInfo: bad client number: %d", VAR_6 );
    return;
  }

  VAR_4[VAR_5] = VAR_6;

  VAR_2.clientinfo[ VAR_6 ].location = FUNC_2( FUNC_0( VAR_5 * 6 + 3 ) );
  VAR_2.clientinfo[ VAR_6 ].health = FUNC_2( FUNC_0( VAR_5 * 6 + 4 ) );
  VAR_2.clientinfo[ VAR_6 ].armor = FUNC_2( FUNC_0( VAR_5 * 6 + 5 ) );
  VAR_2.clientinfo[ VAR_6 ].curWeapon = FUNC_2( FUNC_0( VAR_5 * 6 + 6 ) );
  VAR_2.clientinfo[ VAR_6 ].powerups = FUNC_2( FUNC_0( VAR_5 * 6 + 7 ) );
 }
}
