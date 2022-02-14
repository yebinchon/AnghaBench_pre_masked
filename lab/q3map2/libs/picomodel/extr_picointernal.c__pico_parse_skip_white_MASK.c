
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cursor; int* buffer; int* max; int curLine; } ;
typedef TYPE_1__ picoParser_t ;



void FUNC_0( picoParser_t *VAR_0, int *VAR_1 ){

 if ( VAR_0 == ((void*)0) || VAR_0->cursor == ((void*)0) ) {
  return;
 }


 while ( 1 )
 {

  if ( VAR_0->cursor < VAR_0->buffer ||
    VAR_0->cursor >= VAR_0->max ) {
   return;
  }

  if ( *VAR_0->cursor > 0x20 ) {
   break;
  }
  if ( *VAR_0->cursor == 0x00 ) {
   return;
  }


  if ( *VAR_0->cursor == '\n' ) {
   *VAR_1 = 1;
   VAR_0->curLine++;
  }

  VAR_0->cursor++;
 }
}
