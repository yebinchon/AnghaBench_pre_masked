
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int status ;
struct TYPE_6__ {int * persistant; } ;
typedef TYPE_1__ playerState_t ;
typedef int player ;
typedef int netadr_t ;
struct TYPE_7__ {scalar_t__ state; int name; int ping; } ;
typedef TYPE_2__ client_t ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {TYPE_2__* clients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,char*,int ,int ,int ) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,char*,char*,char*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_8 (int *,int,int) ;
 scalar_t__ FUNC_9 (int ,int,int) ;
 TYPE_1__* FUNC_10 (int) ;
 int VAR_7 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 TYPE_4__* VAR_8 ;
 TYPE_3__ VAR_9 ;

__attribute__((used)) static void FUNC_13( netadr_t VAR_10 ) {
 char VAR_11[1024];
 char VAR_12[VAR_4];
 int VAR_13;
 client_t *VAR_14;
 playerState_t *VAR_15;
 int VAR_16;
 int VAR_17;
 char VAR_18[VAR_3];


 if ( FUNC_4( "g_gametype" ) == VAR_2 || FUNC_4("ui_singlePlayerActive")) {
  return;
 }


 if ( FUNC_9( VAR_10, 10, 1000 ) ) {
  FUNC_1( "SVC_Status: rate limit from %s exceeded, dropping request\n",
   FUNC_6( VAR_10 ) );
  return;
 }



 if ( FUNC_8( &VAR_7, 10, 100 ) ) {
  FUNC_1( "SVC_Status: rate limit exceeded, dropping request\n" );
  return;
 }


 if(FUNC_12(FUNC_0(1)) > 128)
  return;

 FUNC_11( VAR_18, FUNC_3( VAR_1 ) );



 FUNC_5( VAR_18, "challenge", FUNC_0(1) );

 VAR_12[0] = 0;
 VAR_16 = 0;

 for (VAR_13=0 ; VAR_13 < VAR_8->integer ; VAR_13++) {
  VAR_14 = &VAR_9.clients[VAR_13];
  if ( VAR_14->state >= VAR_0 ) {
   VAR_15 = FUNC_10( VAR_13 );
   FUNC_2 (VAR_11, sizeof(VAR_11), "%i %i \"%s\"\n",
    VAR_15->persistant[VAR_6], VAR_14->ping, VAR_14->name);
   VAR_17 = FUNC_12(VAR_11);
   if (VAR_16 + VAR_17 >= sizeof(VAR_12) ) {
    break;
   }
   FUNC_11 (VAR_12 + VAR_16, VAR_11);
   VAR_16 += VAR_17;
  }
 }

 FUNC_7( VAR_5, VAR_10, "statusResponse\n%s\n%s", VAR_18, VAR_12 );
}
