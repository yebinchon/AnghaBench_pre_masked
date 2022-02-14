
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_connection_t ;
struct TYPE_3__ {int event_x; int event_y; } ;
typedef TYPE_1__ xcb_button_press_event_t ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1(xcb_connection_t *VAR_0, xcb_button_press_event_t *VAR_1) {
    FUNC_0("button pressed on x = %d, y = %d\n",
           VAR_1->event_x, VAR_1->event_y);

}
