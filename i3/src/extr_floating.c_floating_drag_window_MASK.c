
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_button_press_event_t ;
typedef scalar_t__ drag_result_t ;
struct TYPE_6__ {scalar_t__ scratchpad_state; int rect; } ;
typedef int Rect ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int const*,int ,int ,int,int ,int *) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 () ;

void FUNC_5(Con *VAR_6, const xcb_button_press_event_t *VAR_7, bool VAR_8) {
    FUNC_0("floating_drag_window\n");



    FUNC_4();


    Rect VAR_9 = VAR_6->rect;


    drag_result_t VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_3, VAR_4, VAR_8, VAR_5, ((void*)0));

    if (!FUNC_1(VAR_6)) {
        FUNC_0("The container has been closed in the meantime.\n");
        return;
    }


    if (VAR_10 == VAR_0) {
        FUNC_3(VAR_6, VAR_9);
        return;
    }


    if (VAR_6->scratchpad_state == VAR_2)
        VAR_6->scratchpad_state = VAR_1;

    FUNC_4();
}
