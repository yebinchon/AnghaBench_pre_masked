
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {size_t cursor; size_t nitems; int cursor_prev; scalar_t__ wrapAround; scalar_t__* items; } ;
typedef TYPE_1__ menuframework_s ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_2__ menucommon_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_0( menuframework_s *VAR_5, int VAR_6 ) {
 menucommon_s *VAR_7 = ((void*)0);
 qboolean VAR_8 = VAR_3;

wrap:
 while ( VAR_5->cursor >= 0 && VAR_5->cursor < VAR_5->nitems ) {
  VAR_7 = ( menucommon_s * ) VAR_5->items[VAR_5->cursor];
  if (( VAR_7->flags & (VAR_0|VAR_2|VAR_1) ) ) {
   VAR_5->cursor += VAR_6;
  }
  else {
   break;
  }
 }

 if ( VAR_6 == 1 ) {
  if ( VAR_5->cursor >= VAR_5->nitems ) {
   if ( VAR_5->wrapAround ) {
    if ( VAR_8 ) {
     VAR_5->cursor = VAR_5->cursor_prev;
     return;
    }
    VAR_5->cursor = 0;
    VAR_8 = VAR_4;
    goto wrap;
   }
   VAR_5->cursor = VAR_5->cursor_prev;
  }
 }
 else {
  if ( VAR_5->cursor < 0 ) {
   if ( VAR_5->wrapAround ) {
    if ( VAR_8 ) {
     VAR_5->cursor = VAR_5->cursor_prev;
     return;
    }
    VAR_5->cursor = VAR_5->nitems - 1;
    VAR_8 = VAR_4;
    goto wrap;
   }
   VAR_5->cursor = VAR_5->cursor_prev;
  }
 }
}
