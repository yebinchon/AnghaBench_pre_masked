
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int netadr_t ;
struct TYPE_5__ {int challenge; int adr; int clientChallenge; int pingTime; } ;
typedef TYPE_1__ challenge_t ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {int time; TYPE_1__* challenges; int authorizeAddress; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_7( netadr_t VAR_4 ) {
 int VAR_5;
 int VAR_6;
 char *VAR_7;
 char *VAR_8;
 challenge_t *VAR_9;

 if ( !FUNC_3( VAR_4, VAR_3.authorizeAddress ) ) {
  FUNC_2( "SV_AuthorizeIpPacket: not from authorize server\n" );
  return;
 }

 VAR_5 = FUNC_6( FUNC_0( 1 ) );

 for (VAR_6 = 0 ; VAR_6 < VAR_0 ; VAR_6++) {
  if ( VAR_3.challenges[VAR_6].challenge == VAR_5 ) {
   break;
  }
 }
 if ( VAR_6 == VAR_0 ) {
  FUNC_2( "SV_AuthorizeIpPacket: challenge not found\n" );
  return;
 }

 VAR_9 = &VAR_3.challenges[VAR_6];


 VAR_9->pingTime = VAR_3.time;
 VAR_7 = FUNC_0( 2 );
 VAR_8 = FUNC_0( 3 );

 if ( !FUNC_5( VAR_7, "demo" ) ) {

  FUNC_4( VAR_1, VAR_9->adr, "print\nServer is not a demo server\n" );

  FUNC_1( VAR_9, 0, sizeof( *VAR_9 ) );
  return;
 }
 if ( !FUNC_5( VAR_7, "accept" ) ) {
  FUNC_4(VAR_1, VAR_9->adr,
   "challengeResponse %d %d %d", VAR_9->challenge, VAR_9->clientChallenge, VAR_2->integer);
  return;
 }
 if ( !FUNC_5( VAR_7, "unknown" ) ) {
  if (!VAR_8) {
   FUNC_4( VAR_1, VAR_9->adr, "print\nAwaiting CD key authorization\n" );
  } else {
   FUNC_4( VAR_1, VAR_9->adr, "print\n%s\n", VAR_8);
  }

  FUNC_1( VAR_9, 0, sizeof( *VAR_9 ) );
  return;
 }


 if (!VAR_8) {
  FUNC_4( VAR_1, VAR_9->adr, "print\nSomeone is using this CD Key\n" );
 } else {
  FUNC_4( VAR_1, VAR_9->adr, "print\n%s\n", VAR_8 );
 }


 FUNC_1( VAR_9, 0, sizeof(*VAR_9) );
}
