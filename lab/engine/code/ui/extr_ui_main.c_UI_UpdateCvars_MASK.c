
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vmCvar; } ;
typedef TYPE_1__ cvarTable_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1( void ) {
 int VAR_2;
 cvarTable_t *VAR_3;

 for ( VAR_2 = 0, VAR_3 = VAR_0 ; VAR_2 < VAR_1 ; VAR_2++, VAR_3++ ) {
  if ( !VAR_3->vmCvar ) {
   continue;
  }

  FUNC_0( VAR_3->vmCvar );
 }
}
