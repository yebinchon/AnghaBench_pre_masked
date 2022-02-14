
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_6__ {void* uiStarted; void* soundRegistered; void* soundStarted; void* rendererStarted; } ;
struct TYPE_5__ {int integer; } ;
struct TYPE_4__ {scalar_t__ integer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 void* VAR_3 ;

void FUNC_4( qboolean VAR_4 ) {
 if (!VAR_1) {
  return;
 }

 if ( !VAR_1->integer ) {
  return;
 }

 if ( !VAR_0.rendererStarted ) {
  VAR_0.rendererStarted = VAR_3;
  FUNC_0();
 }

 if ( VAR_4 ) {
  return;
 }

 if ( !VAR_0.soundStarted ) {
  VAR_0.soundStarted = VAR_3;
  FUNC_3();
 }

 if ( !VAR_0.soundRegistered ) {
  VAR_0.soundRegistered = VAR_3;
  FUNC_2();
 }

 if( VAR_2->integer ) {
  return;
 }

 if ( !VAR_0.uiStarted ) {
  VAR_0.uiStarted = VAR_3;
  FUNC_1();
 }
}
