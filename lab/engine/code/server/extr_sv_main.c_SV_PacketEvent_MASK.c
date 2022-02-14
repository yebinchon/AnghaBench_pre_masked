
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;


struct TYPE_22__ {scalar_t__ port; } ;
typedef TYPE_2__ netadr_t ;
struct TYPE_23__ {int cursize; scalar_t__ data; } ;
typedef TYPE_3__ msg_t ;
struct TYPE_20__ {scalar_t__ port; } ;
struct TYPE_21__ {int qport; TYPE_16__ remoteAddress; } ;
struct TYPE_24__ {scalar_t__ state; int lastPacketTime; TYPE_1__ netchan; } ;
typedef TYPE_4__ client_t ;
struct TYPE_26__ {int integer; } ;
struct TYPE_25__ {int time; TYPE_4__* clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__,TYPE_16__) ;
 int FUNC_5 (TYPE_2__,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 TYPE_6__* VAR_2 ;
 TYPE_5__ VAR_3 ;

void FUNC_8( netadr_t VAR_4, msg_t *VAR_5 ) {
 int VAR_6;
 client_t *VAR_7;
 int VAR_8;


 if ( VAR_5->cursize >= 4 && *(int *)VAR_5->data == -1) {
  FUNC_5( VAR_4, VAR_5 );
  return;
 }



 FUNC_1( VAR_5 );
 FUNC_2( VAR_5 );
 VAR_8 = FUNC_3( VAR_5 ) & 0xffff;


 for (VAR_6=0, VAR_7=VAR_3.clients ; VAR_6 < VAR_2->integer ; VAR_6++,VAR_7++) {
  if (VAR_7->state == VAR_0) {
   continue;
  }
  if ( !FUNC_4( VAR_4, VAR_7->netchan.remoteAddress ) ) {
   continue;
  }


  if (VAR_7->netchan.qport != VAR_8) {
   continue;
  }




  if (VAR_7->netchan.remoteAddress.port != VAR_4.port) {
   FUNC_0( "SV_PacketEvent: fixing up a translated port\n" );
   VAR_7->netchan.remoteAddress.port = VAR_4.port;
  }


  if (FUNC_7(VAR_7, VAR_5)) {



   if (VAR_7->state != VAR_1) {
    VAR_7->lastPacketTime = VAR_3.time;
    FUNC_6( VAR_7, VAR_5 );
   }
  }
  return;
 }
}
