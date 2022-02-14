
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cursize; int maxsize; int* data; scalar_t__ readcount; } ;
typedef TYPE_1__ msg_t ;
typedef int byte ;
typedef int bufData ;
struct TYPE_8__ {int lastPacketTime; int demofile; void* serverMessageSequence; } ;
struct TYPE_7__ {int realtime; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int*,int,int ) ;
 void* FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*,int *,int) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_7( void ) {
 int VAR_4;
 msg_t VAR_5;
 byte VAR_6[ VAR_1 ];
 int VAR_7;

 if ( !VAR_2.demofile ) {
  FUNC_0 ();
  return;
 }


 VAR_4 = FUNC_4( &VAR_7, 4, VAR_2.demofile);
 if ( VAR_4 != 4 ) {
  FUNC_0 ();
  return;
 }
 VAR_2.serverMessageSequence = FUNC_5( VAR_7 );


 FUNC_6( &VAR_5, VAR_6, sizeof( VAR_6 ) );


 VAR_4 = FUNC_4 (&VAR_5.cursize, 4, VAR_2.demofile);
 if ( VAR_4 != 4 ) {
  FUNC_0 ();
  return;
 }
 VAR_5.cursize = FUNC_5( VAR_5.cursize );
 if ( VAR_5.cursize == -1 ) {
  FUNC_0 ();
  return;
 }
 if ( VAR_5.cursize > VAR_5.maxsize ) {
  FUNC_2 (VAR_0, "CL_ReadDemoMessage: demoMsglen > MAX_MSGLEN");
 }
 VAR_4 = FUNC_4( VAR_5.data, VAR_5.cursize, VAR_2.demofile );
 if ( VAR_4 != VAR_5.cursize ) {
  FUNC_3( "Demo file was truncated.\n");
  FUNC_0 ();
  return;
 }

 VAR_2.lastPacketTime = VAR_3.realtime;
 VAR_5.readcount = 0;
 FUNC_1( &VAR_5 );
}
