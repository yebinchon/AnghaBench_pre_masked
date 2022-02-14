
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int integer; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_5( void ) {
 cvar_t *VAR_5;

 extern int VAR_6;

 VAR_5 = FUNC_1( "bot_enable", "1", VAR_0 );
 if ( VAR_5 ) {
  VAR_6 = VAR_5->integer;
 }
 else {
  VAR_6 = 0;
 }


 VAR_3 = FUNC_4( "qagame", VAR_2, FUNC_2( "vm_game" ) );
 if ( !VAR_3 ) {
  FUNC_0( VAR_1, "VM_Create on game failed" );
 }

 FUNC_3( VAR_4 );
}
