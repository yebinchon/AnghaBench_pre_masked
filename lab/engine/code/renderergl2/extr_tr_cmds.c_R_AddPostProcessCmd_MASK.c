
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int viewParms; int refdef; int commandId; } ;
typedef TYPE_1__ postProcessCommand_t ;
struct TYPE_5__ {int viewParms; int refdef; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;

void FUNC_1( void ) {
 postProcessCommand_t *VAR_2;

 VAR_2 = FUNC_0( sizeof( *VAR_2 ) );
 if ( !VAR_2 ) {
  return;
 }
 VAR_2->commandId = VAR_0;

 VAR_2->refdef = VAR_1.refdef;
 VAR_2->viewParms = VAR_1.viewParms;
}
