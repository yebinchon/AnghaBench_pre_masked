
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int netadr_t ;
struct TYPE_32__ {int integer; } ;
struct TYPE_31__ {int integer; } ;
struct TYPE_30__ {int integer; } ;
struct TYPE_29__ {int integer; } ;
struct TYPE_28__ {char* string; } ;
struct TYPE_27__ {TYPE_3__* clients; } ;
struct TYPE_24__ {scalar_t__ type; } ;
struct TYPE_25__ {TYPE_1__ remoteAddress; } ;
struct TYPE_26__ {scalar_t__ state; TYPE_2__ netchan; } ;
struct TYPE_23__ {char* string; } ;
struct TYPE_22__ {scalar_t__ integer; } ;
struct TYPE_21__ {int integer; } ;
struct TYPE_20__ {int integer; } ;
struct TYPE_19__ {char* string; } ;
struct TYPE_18__ {char* string; } ;
struct TYPE_17__ {int integer; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*,char*,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,char*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int *,int,int) ;
 scalar_t__ FUNC_9 (int ,int,int) ;
 TYPE_16__* VAR_5 ;
 TYPE_15__* VAR_6 ;
 TYPE_14__* VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (char*) ;
 TYPE_13__* VAR_9 ;
 TYPE_12__* VAR_10 ;
 TYPE_11__* VAR_11 ;
 TYPE_10__* VAR_12 ;
 TYPE_9__* VAR_13 ;
 TYPE_8__* VAR_14 ;
 TYPE_7__* VAR_15 ;
 TYPE_6__* VAR_16 ;
 TYPE_5__* VAR_17 ;
 TYPE_4__ VAR_18 ;
 char* FUNC_11 (char*,int) ;

void FUNC_12( netadr_t VAR_19 ) {
 int VAR_20, VAR_21, VAR_22;
 char *VAR_23;
 char VAR_24[VAR_2];


 if ( FUNC_4( "g_gametype" ) == VAR_1 || FUNC_4("ui_singlePlayerActive")) {
  return;
 }


 if ( FUNC_9( VAR_19, 10, 1000 ) ) {
  FUNC_1( "SVC_Info: rate limit from %s exceeded, dropping request\n",
   FUNC_6( VAR_19 ) );
  return;
 }



 if ( FUNC_8( &VAR_8, 10, 100 ) ) {
  FUNC_1( "SVC_Info: rate limit exceeded, dropping request\n" );
  return;
 }







 if(FUNC_10(FUNC_0(1)) > 128)
  return;


 VAR_21 = VAR_22 = 0;
 for ( VAR_20 = VAR_15->integer ; VAR_20 < VAR_13->integer ; VAR_20++ ) {
  if ( VAR_18.clients[VAR_20].state >= VAR_0 ) {
   VAR_21++;
   if (VAR_18.clients[VAR_20].netchan.remoteAddress.type != VAR_3) {
    VAR_22++;
   }
  }
 }

 VAR_24[0] = 0;



 FUNC_5( VAR_24, "challenge", FUNC_0(1) );

 FUNC_5( VAR_24, "gamename", VAR_5->string );






  FUNC_5(VAR_24, "protocol", FUNC_11("%i", VAR_7->integer));

 FUNC_5( VAR_24, "hostname", VAR_10->string );
 FUNC_5( VAR_24, "mapname", VAR_11->string );
 FUNC_5( VAR_24, "clients", FUNC_11("%i", VAR_21) );
 FUNC_5(VAR_24, "g_humanplayers", FUNC_11("%i", VAR_22));
 FUNC_5( VAR_24, "sv_maxclients",
  FUNC_11("%i", VAR_13->integer - VAR_15->integer ) );
 FUNC_5( VAR_24, "gametype", FUNC_11("%i", VAR_9->integer ) );
 FUNC_5( VAR_24, "pure", FUNC_11("%i", VAR_16->integer ) );
 FUNC_5(VAR_24, "g_needpass", FUNC_11("%d", FUNC_2("g_needpass")));







 if( VAR_14->integer ) {
  FUNC_5( VAR_24, "minPing", FUNC_11("%i", VAR_14->integer) );
 }
 if( VAR_12->integer ) {
  FUNC_5( VAR_24, "maxPing", FUNC_11("%i", VAR_12->integer) );
 }
 VAR_23 = FUNC_3( "fs_game" );
 if( *VAR_23 ) {
  FUNC_5( VAR_24, "game", VAR_23 );
 }

 FUNC_7( VAR_4, VAR_19, "infoResponse\n%s", VAR_24 );
}
