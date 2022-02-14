
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int netadr_t ;
struct TYPE_10__ {int cursize; int readcount; scalar_t__ data; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_13__ {int remoteAddress; } ;
struct TYPE_12__ {scalar_t__ state; int demowaiting; scalar_t__ demorecording; int lastPacketTime; int serverMessageSequence; TYPE_7__ netchan; } ;
struct TYPE_11__ {int realtime; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_7__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_9( netadr_t VAR_3, msg_t *VAR_4 ) {
 int VAR_5;

 VAR_1.lastPacketTime = VAR_2.realtime;

 if ( VAR_4->cursize >= 4 && *(int *)VAR_4->data == -1 ) {
  FUNC_0( VAR_3, VAR_4 );
  return;
 }

 if ( VAR_1.state < VAR_0 ) {
  return;
 }

 if ( VAR_4->cursize < 4 ) {
  FUNC_5 ("%s: Runt packet\n", FUNC_7( VAR_3 ));
  return;
 }




 if ( !FUNC_8( VAR_3, VAR_1.netchan.remoteAddress ) ) {
  FUNC_4 ("%s:sequenced packet without connection\n"
   , FUNC_7( VAR_3 ) );

  return;
 }

 if (!FUNC_1( &VAR_1.netchan, VAR_4) ) {
  return;
 }


 VAR_5 = VAR_4->readcount;




 VAR_1.serverMessageSequence = FUNC_6( *(int *)VAR_4->data );

 VAR_1.lastPacketTime = VAR_2.realtime;
 FUNC_2( VAR_4 );





 if ( VAR_1.demorecording && !VAR_1.demowaiting ) {
  FUNC_3( VAR_4, VAR_5 );
 }
}
