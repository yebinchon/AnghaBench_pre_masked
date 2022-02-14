
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sessionTeam; scalar_t__ spectatorState; scalar_t__ spectatorClient; scalar_t__ spectatorNum; } ;
struct TYPE_5__ {scalar_t__ connected; } ;
struct TYPE_7__ {TYPE_2__ sess; TYPE_1__ pers; } ;
typedef TYPE_3__ gclient_t ;
struct TYPE_8__ {int numPlayingClients; int maxclients; int warmupTime; TYPE_3__* clients; scalar_t__ intermissiontime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 TYPE_4__ VAR_4 ;

void FUNC_1( void ) {
 int VAR_5;
 gclient_t *VAR_6;
 gclient_t *VAR_7;

 if ( VAR_4.numPlayingClients >= 2 ) {
  return;
 }


 if ( VAR_4.intermissiontime ) {
  return;
 }

 VAR_7 = ((void*)0);

 for ( VAR_5 = 0 ; VAR_5 < VAR_4.maxclients ; VAR_5++ ) {
  VAR_6 = &VAR_4.clients[VAR_5];
  if ( VAR_6->pers.connected != VAR_0 ) {
   continue;
  }
  if ( VAR_6->sess.sessionTeam != VAR_2 ) {
   continue;
  }

  if ( VAR_6->sess.spectatorState == VAR_1 ||
   VAR_6->sess.spectatorClient < 0 ) {
   continue;
  }

  if(!VAR_7 || VAR_6->sess.spectatorNum > VAR_7->sess.spectatorNum)
   VAR_7 = VAR_6;
 }

 if ( !VAR_7 ) {
  return;
 }

 VAR_4.warmupTime = -1;


 FUNC_0( &VAR_3[ VAR_7 - VAR_4.clients ], "f" );
}
