
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int remoteAddress; } ;
struct TYPE_9__ {char* userinfo; int rate; int snapshotMsec; int hasVoip; TYPE_1__ netchan; scalar_t__ compat; scalar_t__ lastSnapshotTime; int name; } ;
typedef TYPE_2__ client_t ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int integer; } ;


 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (char*) ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;

void FUNC_10( client_t *VAR_5 ) {
 char *VAR_6;
 char *VAR_7;
 int VAR_8;
 int VAR_9;


 FUNC_5( VAR_5->name, FUNC_1 (VAR_5->userinfo, "name"), sizeof(VAR_5->name) );





 if ( FUNC_7( VAR_5->netchan.remoteAddress ) && VAR_1->integer != 2 && VAR_4->integer == 1) {
  VAR_5->rate = 0;
 } else {
  VAR_6 = FUNC_1 (VAR_5->userinfo, "rate");
  if (FUNC_9(VAR_6)) {
   VAR_8 = FUNC_8(VAR_6);
   VAR_5->rate = VAR_8;
   if (VAR_5->rate < 1000) {
    VAR_5->rate = 1000;
   } else if (VAR_5->rate > 90000) {
    VAR_5->rate = 90000;
   }
  } else {
   VAR_5->rate = 3000;
  }
 }
 VAR_6 = FUNC_1 (VAR_5->userinfo, "handicap");
 if (FUNC_9(VAR_6)) {
  VAR_8 = FUNC_8(VAR_6);
  if (VAR_8<=0 || VAR_8>100 || FUNC_9(VAR_6) > 4) {
   FUNC_0( VAR_5->userinfo, "handicap", "100" );
  }
 }


 VAR_6 = FUNC_1 (VAR_5->userinfo, "snaps");

 if(FUNC_9(VAR_6))
 {
  VAR_8 = FUNC_8(VAR_6);

  if(VAR_8 < 1)
   VAR_8 = 1;
  else if(VAR_8 > VAR_3->integer)
   VAR_8 = VAR_3->integer;

  VAR_8 = 1000 / VAR_8;
 }
 else
  VAR_8 = 50;

 if(VAR_8 != VAR_5->snapshotMsec)
 {

  VAR_5->lastSnapshotTime = 0;
  VAR_5->snapshotMsec = VAR_8;
 }
 if( FUNC_3(VAR_5->netchan.remoteAddress) )
  VAR_7 = "localhost";
 else
  VAR_7 = (char*)FUNC_2( VAR_5->netchan.remoteAddress );

 VAR_6 = FUNC_1( VAR_5->userinfo, "ip" );
 if( VAR_6[0] )
  VAR_9 = FUNC_9( VAR_7 ) - FUNC_9( VAR_6 ) + FUNC_9( VAR_5->userinfo );
 else
  VAR_9 = FUNC_9( VAR_7 ) + 4 + FUNC_9( VAR_5->userinfo );

 if( VAR_9 >= VAR_0 )
  FUNC_6( VAR_5, "userinfo string length exceeded" );
 else
  FUNC_0( VAR_5->userinfo, "ip", VAR_7 );

}
