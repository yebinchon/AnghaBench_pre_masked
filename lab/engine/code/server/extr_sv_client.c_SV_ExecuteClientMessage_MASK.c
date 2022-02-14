
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int msg_t ;
struct TYPE_10__ {scalar_t__ state; scalar_t__ oldServerTime; int name; void* gamestateMessageNum; void* messageAcknowledge; int lastClientCommandString; int * downloadName; void* reliableSequence; void* reliableAcknowledge; } ;
typedef TYPE_1__ client_t ;
struct TYPE_12__ {int serverId; int restartedServerId; } ;
struct TYPE_11__ {TYPE_1__* clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 void* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,int ) ;
 int FUNC_9 (TYPE_1__*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int ,char*) ;
 TYPE_3__ VAR_11 ;
 TYPE_2__ VAR_12 ;

void FUNC_11( client_t *VAR_13, msg_t *VAR_14 ) {
 int VAR_15;
 int VAR_16;

 FUNC_2(VAR_14);

 VAR_16 = FUNC_4( VAR_14 );
 VAR_13->messageAcknowledge = FUNC_4( VAR_14 );

 if (VAR_13->messageAcknowledge < 0) {



  FUNC_6( VAR_13, "DEBUG: illegible client message" );

  return;
 }

 VAR_13->reliableAcknowledge = FUNC_4( VAR_14 );




 if (VAR_13->reliableAcknowledge < VAR_13->reliableSequence - VAR_2) {



  FUNC_6( VAR_13, "DEBUG: illegible client message" );

  VAR_13->reliableAcknowledge = VAR_13->reliableSequence;
  return;
 }
 if ( VAR_16 != VAR_11.serverId && !*VAR_13->downloadName && !FUNC_10(VAR_13->lastClientCommandString, "nextdl") ) {
  if ( VAR_16 >= VAR_11.restartedServerId && VAR_16 < VAR_11.serverId ) {

   FUNC_0("%s : ignoring pre map_restart / outdated client message\n", VAR_13->name);
   return;
  }


  if ( VAR_13->state != VAR_0 && VAR_13->messageAcknowledge > VAR_13->gamestateMessageNum ) {
   FUNC_0( "%s : dropped gamestate, resending\n", VAR_13->name );
   FUNC_7( VAR_13 );
  }
  return;
 }



 if( VAR_13->oldServerTime && VAR_16 == VAR_11.serverId ){
  FUNC_0( "%s acknowledged gamestate\n", VAR_13->name );
  VAR_13->oldServerTime = 0;
 }


 do {
  VAR_15 = FUNC_3( VAR_14 );

  if ( VAR_15 == VAR_3 ) {
   break;
  }

  if ( VAR_15 != VAR_4 ) {
   break;
  }
  if ( !FUNC_5( VAR_13, VAR_14 ) ) {
   return;
  }
  if (VAR_13->state == VAR_1) {
   return;
  }
 } while ( 1 );


 if ( VAR_15 == VAR_8 ) {




 }


 if ( VAR_15 == VAR_7 ) {




 }


 if ( VAR_15 == VAR_5 ) {
  FUNC_8( VAR_13, VAR_14, VAR_10 );
 } else if ( VAR_15 == VAR_6 ) {
  FUNC_8( VAR_13, VAR_14, VAR_9 );
 } else if ( VAR_15 != VAR_3 ) {
  FUNC_1( "WARNING: bad command byte for client %i\n", (int) (VAR_13 - VAR_12.clients) );
 }



}
