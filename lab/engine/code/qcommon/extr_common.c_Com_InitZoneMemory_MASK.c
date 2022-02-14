
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int integer; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* FUNC_1 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_4( void ) {
 cvar_t *VAR_7;
 VAR_7 = FUNC_1( "com_zoneMegs", VAR_3, VAR_1 | VAR_0 );

 if ( VAR_7->integer < VAR_2 ) {
  VAR_6 = 1024 * 1024 * VAR_2;
 } else {
  VAR_6 = VAR_7->integer * 1024 * 1024;
 }

 VAR_5 = FUNC_3( VAR_6, 1 );
 if ( !VAR_5 ) {
  FUNC_0( VAR_4, "Zone data failed to allocate %i megs", VAR_6 / (1024*1024) );
 }
 FUNC_2( VAR_5, VAR_6 );

}
