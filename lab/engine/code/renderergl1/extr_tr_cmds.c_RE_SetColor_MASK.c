
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* color; int commandId; } ;
typedef TYPE_1__ setColorCommand_t ;
struct TYPE_5__ {int registered; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;

void FUNC_1( const float *VAR_2 ) {
 setColorCommand_t *VAR_3;

  if ( !VAR_1.registered ) {
    return;
  }
 VAR_3 = FUNC_0( sizeof( *VAR_3 ) );
 if ( !VAR_3 ) {
  return;
 }
 VAR_3->commandId = VAR_0;
 if ( !VAR_2 ) {
  static float VAR_4[4] = { 1, 1, 1, 1 };

  VAR_2 = VAR_4;
 }

 VAR_3->color[0] = VAR_2[0];
 VAR_3->color[1] = VAR_2[1];
 VAR_3->color[2] = VAR_2[2];
 VAR_3->color[3] = VAR_2[3];
}
