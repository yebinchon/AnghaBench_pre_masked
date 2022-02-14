
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int map; int cubeSide; int commandId; } ;
typedef TYPE_1__ capShadowmapCommand_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

void FUNC_1( int VAR_1, int VAR_2 ) {
 capShadowmapCommand_t *VAR_3;

 VAR_3 = FUNC_0( sizeof( *VAR_3 ) );
 if ( !VAR_3 ) {
  return;
 }
 VAR_3->commandId = VAR_0;

 VAR_3->map = VAR_1;
 VAR_3->cubeSide = VAR_2;
}
