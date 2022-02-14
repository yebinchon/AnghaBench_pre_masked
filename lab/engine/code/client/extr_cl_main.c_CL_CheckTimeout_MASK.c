
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int timeoutcount; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_8__ {scalar_t__ state; int lastPacketTime; } ;
struct TYPE_7__ {int realtime; } ;
struct TYPE_6__ {int integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

void FUNC_3( void ) {



 if ( ( !FUNC_0() || !VAR_7->integer )
  && VAR_4.state >= VAR_1 && VAR_4.state != VAR_0
     && VAR_5.realtime - VAR_4.lastPacketTime > VAR_3->value*1000) {
  if (++VAR_2.timeoutcount > 5) {
   FUNC_2 ("\nServer connection timed out.\n");
   FUNC_1( VAR_6 );
   return;
  }
 } else {
  VAR_2.timeoutcount = 0;
 }
}
