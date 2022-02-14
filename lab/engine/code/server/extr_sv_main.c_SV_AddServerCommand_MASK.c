
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; int reliableSequence; int reliableAcknowledge; char const** reliableCommands; } ;
typedef TYPE_1__ client_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;

void FUNC_3( client_t *VAR_2, const char *VAR_3 ) {
 int VAR_4, VAR_5;
 if( VAR_2->state < VAR_0 )
  return;

 VAR_2->reliableSequence++;




 if ( VAR_2->reliableSequence - VAR_2->reliableAcknowledge == VAR_1 + 1 ) {
  FUNC_0( "===== pending server commands =====\n" );
  for ( VAR_5 = VAR_2->reliableAcknowledge + 1 ; VAR_5 <= VAR_2->reliableSequence ; VAR_5++ ) {
   FUNC_0( "cmd %5d: %s\n", VAR_5, VAR_2->reliableCommands[ VAR_5 & (VAR_1-1) ] );
  }
  FUNC_0( "cmd %5d: %s\n", VAR_5, VAR_3 );
  FUNC_2( VAR_2, "Server command overflow" );
  return;
 }
 VAR_4 = VAR_2->reliableSequence & ( VAR_1 - 1 );
 FUNC_1( VAR_2->reliableCommands[ VAR_4 ], VAR_3, sizeof( VAR_2->reliableCommands[ VAR_4 ] ) );
}
