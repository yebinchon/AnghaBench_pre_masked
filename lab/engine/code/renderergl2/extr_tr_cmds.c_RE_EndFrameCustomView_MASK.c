
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int vidHeight; int vidWidth; } ;
struct TYPE_8__ {int finishCalled; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_7__ {TYPE_1__ refdef; int registered; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

void FUNC_3( void ) {
 if ( !VAR_4.registered ) {
  return;
 }
 FUNC_1( VAR_3 );
 FUNC_0();
 FUNC_2( &VAR_0 );
 VAR_4.refdef.width = VAR_0.vidWidth;
 VAR_4.refdef.height = VAR_0.vidHeight;
 VAR_1.finishCalled = VAR_2;
}
