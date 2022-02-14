
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* qboolean ;
typedef int mapname ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_13__ {TYPE_1__ remoteAddress; } ;
struct TYPE_14__ {scalar_t__ state; int oldServerTime; int lastUsercmd; TYPE_2__ netchan; } ;
typedef TYPE_3__ client_t ;
struct TYPE_19__ {int integer; } ;
struct TYPE_18__ {scalar_t__ serverId; int restartTime; int time; void* restarting; int state; } ;
struct TYPE_17__ {scalar_t__ modified; } ;
struct TYPE_16__ {int integer; scalar_t__ modified; } ;
struct TYPE_15__ {int time; TYPE_3__* clients; int snapFlagServerBit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (char*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,void*) ;
 int FUNC_13 (int ,int ,int,...) ;
 char* FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_11 ;
 TYPE_8__* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 TYPE_7__ VAR_16 ;
 TYPE_6__* VAR_17 ;
 TYPE_5__* VAR_18 ;
 TYPE_4__ VAR_19 ;
 int FUNC_16 (char*,int) ;

__attribute__((used)) static void FUNC_17( void ) {
 int VAR_20;
 client_t *VAR_21;
 char *VAR_22;
 qboolean VAR_23;
 int VAR_24;


 if ( VAR_11 == VAR_16.serverId ) {
  return;
 }


 if ( !VAR_12->integer ) {
  FUNC_2( "Server is not running.\n" );
  return;
 }

 if ( VAR_16.restartTime ) {
  return;
 }

 if (FUNC_0() > 1 ) {
  VAR_24 = FUNC_15( FUNC_1(1) );
 }
 else {
  VAR_24 = 5;
 }
 if( VAR_24 && !FUNC_5("g_doWarmup") ) {
  VAR_16.restartTime = VAR_16.time + VAR_24 * 1000;
  FUNC_11( VAR_3, FUNC_16("%i", VAR_16.restartTime) );
  return;
 }



 if ( VAR_18->modified || VAR_17->modified ) {
  char VAR_25[VAR_6];

  FUNC_2( "variable change -- restarting.\n" );

  FUNC_6( VAR_25, FUNC_4( "mapname" ), sizeof( VAR_25 ) );

  FUNC_12( VAR_25, VAR_14 );
  return;
 }



 VAR_19.snapFlagServerBit ^= VAR_8;



 VAR_16.serverId = VAR_11;
 FUNC_3( "sv_serverid", FUNC_16("%i", VAR_16.serverId ) );




 for (VAR_20=0 ; VAR_20<VAR_18->integer ; VAR_20++) {
  if (VAR_19.clients[VAR_20].state == VAR_2) {
   VAR_19.clients[VAR_20].oldServerTime = VAR_16.restartTime;
  }
 }




 VAR_16.state = VAR_10;
 VAR_16.restarting = VAR_15;

 FUNC_10();


 for (VAR_20 = 0; VAR_20 < 3; VAR_20++)
 {
  FUNC_13 (VAR_13, VAR_5, VAR_16.time);
  VAR_16.time += 100;
  VAR_19.time += 100;
 }

 VAR_16.state = VAR_9;
 VAR_16.restarting = VAR_14;


 for (VAR_20=0 ; VAR_20<VAR_18->integer ; VAR_20++) {
  VAR_21 = &VAR_19.clients[VAR_20];


  if ( VAR_21->state < VAR_1) {
   continue;
  }

  if ( VAR_21->netchan.remoteAddress.type == VAR_7 ) {
   VAR_23 = VAR_15;
  } else {
   VAR_23 = VAR_14;
  }


  FUNC_7( VAR_21, "map_restart\n" );


  VAR_22 = FUNC_14( VAR_13, FUNC_13( VAR_13, VAR_4, VAR_20, VAR_14, VAR_23 ) );
  if ( VAR_22 ) {


   FUNC_9( VAR_21, VAR_22 );
   FUNC_2( "SV_MapRestart_f(%d): dropped client %i - denied!\n", VAR_24, VAR_20 );
   continue;
  }

  if(VAR_21->state == VAR_0)
   FUNC_8(VAR_21, &VAR_21->lastUsercmd);
  else
  {



   FUNC_8(VAR_21, ((void*)0));
  }
 }


 FUNC_13 (VAR_13, VAR_5, VAR_16.time);
 VAR_16.time += 100;
 VAR_19.time += 100;
}
