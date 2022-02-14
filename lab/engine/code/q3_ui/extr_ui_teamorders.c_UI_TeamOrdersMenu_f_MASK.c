
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ clientNum; } ;
typedef TYPE_1__ uiClientState_t ;
typedef int info ;
struct TYPE_5__ {scalar_t__ gametype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 void* FUNC_2 (int ) ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,char*,int) ;

void FUNC_5( void ) {
 uiClientState_t VAR_6;
 char VAR_7[VAR_3];
 int VAR_8;


 FUNC_4( VAR_1, VAR_7, sizeof(VAR_7) );
 VAR_5.gametype = FUNC_2( FUNC_0( VAR_7, "g_gametype" ) );
 if( VAR_5.gametype < VAR_2 ) {
  return;
 }


 FUNC_3( &VAR_6 );
 FUNC_4( VAR_0 + VAR_6.clientNum, VAR_7, VAR_3 );
 VAR_8 = FUNC_2( FUNC_0( VAR_7, "t" ) );
 if( VAR_8 == VAR_4 ) {
  return;
 }

 FUNC_1();
}
