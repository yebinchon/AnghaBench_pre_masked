
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int commandId; } ;
typedef TYPE_2__ swapBuffersCommand_t ;
struct TYPE_6__ {int msec; } ;
struct TYPE_9__ {TYPE_1__ pc; } ;
struct TYPE_8__ {int frontEndMsec; int registered; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;

void FUNC_3( int *VAR_4, int *VAR_5 ) {
 swapBuffersCommand_t *VAR_6;

 if ( !VAR_3.registered ) {
  return;
 }
 VAR_6 = FUNC_0( sizeof( *VAR_6 ), 0 );
 if ( !VAR_6 ) {
  return;
 }
 VAR_6->commandId = VAR_0;

 FUNC_2( VAR_2 );

 FUNC_1();

 if ( VAR_4 ) {
  *VAR_4 = VAR_3.frontEndMsec;
 }
 VAR_3.frontEndMsec = 0;
 if ( VAR_5 ) {
  *VAR_5 = VAR_1.pc.msec;
 }
 VAR_1.pc.msec = 0;
}
