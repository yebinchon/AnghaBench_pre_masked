
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * crosshairShader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char) ;

void FUNC_2( void ) {
 int VAR_6;

 FUNC_0( VAR_2 );
 FUNC_0( VAR_3 );
 FUNC_0( VAR_0 );
 FUNC_0( VAR_1 );
 for( VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ ) {
  VAR_5.crosshairShader[VAR_6] = FUNC_0( FUNC_1("gfx/2d/crosshair%c", 'a' + VAR_6 ) );
 }
}
