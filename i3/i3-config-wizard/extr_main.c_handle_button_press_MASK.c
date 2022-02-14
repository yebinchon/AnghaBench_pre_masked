
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ event_x; scalar_t__ event_y; } ;
typedef TYPE_1__ xcb_button_press_event_t ;
struct TYPE_5__ {scalar_t__ height; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(xcb_button_press_event_t *VAR_6) {
    if (VAR_3 != VAR_2)
        return;

    if (VAR_6->event_x < FUNC_0(5) || VAR_6->event_x > FUNC_0(10))
        return;

    if (VAR_6->event_y >= FUNC_2(4) && VAR_6->event_y <= (FUNC_2(4) + VAR_4.height)) {
        VAR_5 = VAR_1;
        FUNC_1();
    }

    if (VAR_6->event_y >= FUNC_2(5) && VAR_6->event_y <= (FUNC_2(5) + VAR_4.height)) {
        VAR_5 = VAR_0;
        FUNC_1();
    }
}
