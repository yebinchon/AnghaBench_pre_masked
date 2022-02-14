
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float x; float y; float w; float h; float s1; float t1; float s2; float t2; int shader; int commandId; } ;
typedef TYPE_1__ stretchPicCommand_t ;
typedef int qhandle_t ;
struct TYPE_5__ {int registered; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_2 ( float VAR_2, float VAR_3, float VAR_4, float VAR_5,
       float VAR_6, float VAR_7, float VAR_8, float VAR_9, qhandle_t VAR_10 ) {
 stretchPicCommand_t *VAR_11;

  if (!VAR_1.registered) {
    return;
  }
 VAR_11 = FUNC_0( sizeof( *VAR_11 ) );
 if ( !VAR_11 ) {
  return;
 }
 VAR_11->commandId = VAR_0;
 VAR_11->shader = FUNC_1( VAR_10 );
 VAR_11->x = VAR_2;
 VAR_11->y = VAR_3;
 VAR_11->w = VAR_4;
 VAR_11->h = VAR_5;
 VAR_11->s1 = VAR_6;
 VAR_11->t1 = VAR_7;
 VAR_11->s2 = VAR_8;
 VAR_11->t2 = VAR_9;
}
