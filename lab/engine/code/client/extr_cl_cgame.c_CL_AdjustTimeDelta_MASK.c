
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int serverTime; } ;
struct TYPE_12__ {int serverTimeDelta; int oldServerTime; int serverTime; void* extrapolatedSnapshot; TYPE_1__ snap; void* newSnapshots; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ demoplaying; } ;
struct TYPE_9__ {int realtime; } ;
struct TYPE_8__ {int value; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_6__ VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 void* VAR_6 ;

void FUNC_2( void ) {
 int VAR_7;
 int VAR_8;

 VAR_1.newSnapshots = VAR_6;


 if ( VAR_3.demoplaying ) {
  return;
 }

 VAR_7 = VAR_1.snap.serverTime - VAR_4.realtime;
 VAR_8 = FUNC_1( VAR_7 - VAR_1.serverTimeDelta );

 if ( VAR_8 > VAR_0 ) {
  VAR_1.serverTimeDelta = VAR_7;
  VAR_1.oldServerTime = VAR_1.snap.serverTime;
  VAR_1.serverTime = VAR_1.snap.serverTime;
  if ( VAR_2->integer ) {
   FUNC_0( "<RESET> " );
  }
 } else if ( VAR_8 > 100 ) {

  if ( VAR_2->integer ) {
   FUNC_0( "<FAST> " );
  }
  VAR_1.serverTimeDelta = ( VAR_1.serverTimeDelta + VAR_7 ) >> 1;
 } else {





  if ( VAR_5->value == 0 || VAR_5->value == 1 ) {
   if ( VAR_1.extrapolatedSnapshot ) {
    VAR_1.extrapolatedSnapshot = VAR_6;
    VAR_1.serverTimeDelta -= 2;
   } else {

    VAR_1.serverTimeDelta++;
   }
  }
 }

 if ( VAR_2->integer ) {
  FUNC_0( "%i ", VAR_1.serverTimeDelta );
 }
}
