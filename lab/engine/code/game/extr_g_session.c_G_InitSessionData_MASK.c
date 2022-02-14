
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


struct TYPE_12__ {scalar_t__ localClient; } ;
struct TYPE_14__ {void* spectatorState; void* sessionTeam; } ;
struct TYPE_13__ {TYPE_1__ pers; TYPE_3__ sess; } ;
typedef TYPE_2__ gclient_t ;
typedef TYPE_3__ clientSession_t ;
struct TYPE_19__ {int integer; } ;
struct TYPE_18__ {char* string; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {int numNonSpectatorClients; TYPE_2__* clients; } ;


 int FUNC_0 (TYPE_2__*) ;


 int VAR_0 ;

 int FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (char*,char*) ;
 void* VAR_1 ;
 int FUNC_3 (int *,char const*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 char FUNC_4 (int,char*) ;
 int * VAR_4 ;
 TYPE_8__ VAR_5 ;
 TYPE_7__ VAR_6 ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_5 (char*,char*) ;

void FUNC_6( gclient_t *VAR_10, char *VAR_11 ) {
 clientSession_t *VAR_12;
 const char *VAR_13;
 char VAR_14[2] = {'\0', '\0'};
 VAR_12 = &VAR_10->sess;


 VAR_13 = FUNC_2( VAR_11, "teampref" );


 if ( !VAR_13[0] && VAR_6.string[0] && VAR_10->pers.localClient ) {
  VAR_13 = VAR_6.string;


  FUNC_5( "g_localTeamPref", "" );
 }

 VAR_14[0] = FUNC_4( VAR_10 - VAR_9.clients, FUNC_2 (VAR_11, "name") );
 if ( VAR_14[0] ){
  VAR_13 = VAR_14;
 }


 if ( VAR_5.integer >= VAR_0 ) {

  VAR_12->sessionTeam = VAR_3;
  VAR_12->spectatorState = VAR_1;

  if ( VAR_13[0] || VAR_8.integer ) {
   FUNC_3( &VAR_4[VAR_10 - VAR_9.clients], VAR_13 );
  }
 } else {
  if ( VAR_13[0] == 's' ) {

   VAR_12->sessionTeam = VAR_3;
  } else {
   switch ( VAR_5.integer ) {
   default:
   case 130:
   case 129:
    if ( VAR_7.integer > 0 &&
     VAR_9.numNonSpectatorClients >= VAR_7.integer ) {
     VAR_12->sessionTeam = VAR_3;
    } else {
     VAR_12->sessionTeam = VAR_2;
    }
    break;
   case 128:

    if ( VAR_9.numNonSpectatorClients >= 2 ) {
     VAR_12->sessionTeam = VAR_3;
    } else {
     VAR_12->sessionTeam = VAR_2;
    }
    break;
   }
  }

  VAR_12->spectatorState = VAR_1;
 }

 FUNC_0(VAR_10);

 FUNC_1( VAR_10 );
}
