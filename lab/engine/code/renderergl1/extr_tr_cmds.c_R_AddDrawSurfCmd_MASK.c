
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numDrawSurfs; int viewParms; int refdef; int * drawSurfs; int commandId; } ;
typedef TYPE_1__ drawSurfsCommand_t ;
typedef int drawSurf_t ;
struct TYPE_5__ {int viewParms; int refdef; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;

void FUNC_1( drawSurf_t *VAR_2, int VAR_3 ) {
 drawSurfsCommand_t *VAR_4;

 VAR_4 = FUNC_0( sizeof( *VAR_4 ) );
 if ( !VAR_4 ) {
  return;
 }
 VAR_4->commandId = VAR_0;

 VAR_4->drawSurfs = VAR_2;
 VAR_4->numDrawSurfs = VAR_3;

 VAR_4->refdef = VAR_1.refdef;
 VAR_4->viewParms = VAR_1.viewParms;
}
