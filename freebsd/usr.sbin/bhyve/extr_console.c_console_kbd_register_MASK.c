
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int kbd_event_func_t ;
struct TYPE_2__ {int kbd_priority; void* kbd_arg; int kbd_event_cb; } ;


 TYPE_1__ VAR_0 ;

void
FUNC_0(kbd_event_func_t VAR_1, void *VAR_2, int VAR_3)
{
 if (VAR_3 > VAR_0.kbd_priority) {
  VAR_0.kbd_event_cb = VAR_1;
  VAR_0.kbd_arg = VAR_2;
  VAR_0.kbd_priority = VAR_3;
 }
}
