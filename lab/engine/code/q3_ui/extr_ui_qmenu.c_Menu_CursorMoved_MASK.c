
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t cursor_prev; size_t cursor; size_t nitems; void** items; } ;
typedef TYPE_1__ menuframework_s ;
struct TYPE_5__ {void (* callback ) (void*,int) ;} ;
typedef TYPE_2__ menucommon_s ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0( menuframework_s *VAR_2 )
{
 void (*VAR_3)( void *VAR_4, int VAR_5 );

 if (VAR_2->cursor_prev == VAR_2->cursor)
  return;

 if (VAR_2->cursor_prev >= 0 && VAR_2->cursor_prev < VAR_2->nitems)
 {
  VAR_3 = ((menucommon_s*)(VAR_2->items[VAR_2->cursor_prev]))->callback;
  if (VAR_3)
   VAR_3(VAR_2->items[VAR_2->cursor_prev],VAR_1);
 }

 if (VAR_2->cursor >= 0 && VAR_2->cursor < VAR_2->nitems)
 {
  VAR_3 = ((menucommon_s*)(VAR_2->items[VAR_2->cursor]))->callback;
  if (VAR_3)
   VAR_3(VAR_2->items[VAR_2->cursor],VAR_0);
 }
}
