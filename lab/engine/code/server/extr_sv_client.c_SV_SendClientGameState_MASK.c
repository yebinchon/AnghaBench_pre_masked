
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int nullstate ;
typedef int msg_t ;
typedef int msgBuffer ;
struct TYPE_16__ {int number; } ;
typedef TYPE_3__ entityState_t ;
struct TYPE_14__ {int outgoingSequence; } ;
struct TYPE_17__ {struct TYPE_17__* reliableSequence; struct TYPE_17__* lastClientCommand; TYPE_1__ netchan; int gamestateMessageNum; int gotCP; scalar_t__ pureAuthentic; int state; int name; } ;
typedef TYPE_4__ client_t ;
typedef int byte ;
struct TYPE_19__ {TYPE_4__* checksumFeed; TYPE_2__* svEntities; scalar_t__** configstrings; } ;
struct TYPE_18__ {int clients; } ;
struct TYPE_15__ {TYPE_3__ baseline; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_5__ VAR_11 ;

__attribute__((used)) static void FUNC_10( client_t *VAR_12 ) {
 int VAR_13;
 entityState_t *VAR_14, VAR_15;
 msg_t VAR_16;
 byte VAR_17[VAR_3];

  FUNC_0 ("SV_SendClientGameState() for %s\n", VAR_12->name);
 FUNC_0( "Going from CS_CONNECTED to CS_PRIMED for %s\n", VAR_12->name );
 VAR_12->state = VAR_0;
 VAR_12->pureAuthentic = 0;
 VAR_12->gotCP = VAR_4;




 VAR_12->gamestateMessageNum = VAR_12->netchan.outgoingSequence;

 FUNC_2( &VAR_16, VAR_17, sizeof( VAR_17 ) );



 FUNC_6( &VAR_16, VAR_12->lastClientCommand );





 FUNC_9( VAR_12, &VAR_16 );


 FUNC_4( &VAR_16, VAR_10 );
 FUNC_6( &VAR_16, VAR_12->reliableSequence );


 for ( VAR_13 = 0 ; VAR_13 < VAR_1 ; VAR_13++ ) {
  if (VAR_6.configstrings[VAR_13][0]) {
   FUNC_4( &VAR_16, VAR_9 );
   FUNC_7( &VAR_16, VAR_13 );
   FUNC_3( &VAR_16, VAR_6.configstrings[VAR_13] );
  }
 }


 FUNC_1( &VAR_15, 0, sizeof( VAR_15 ) );
 for ( VAR_13 = 0 ; VAR_13 < VAR_2; VAR_13++ ) {
  VAR_14 = &VAR_6.svEntities[VAR_13].baseline;
  if ( !VAR_14->number ) {
   continue;
  }
  FUNC_4( &VAR_16, VAR_8 );
  FUNC_5( &VAR_16, &VAR_15, VAR_14, VAR_5 );
 }

 FUNC_4( &VAR_16, VAR_7 );

 FUNC_6( &VAR_16, VAR_12 - VAR_11.clients);


 FUNC_6( &VAR_16, VAR_6.checksumFeed);


 FUNC_8( &VAR_16, VAR_12 );
}
