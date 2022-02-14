
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ response_type; int state; int detail; int time; } ;
typedef TYPE_1__ xcb_key_press_event_t ;
typedef int xcb_generic_event_t ;
typedef int CommandResult ;
typedef int Binding ;


 int FUNC_0 (char*,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int * FUNC_3 (int *,int *) ;

void FUNC_4(xcb_key_press_event_t *VAR_2) {
    const bool VAR_3 = (VAR_2->response_type == VAR_0);

    VAR_1 = VAR_2->time;

    FUNC_0("%s %d, state raw = 0x%x\n", (VAR_3 ? "KeyRelease" : "KeyPress"), VAR_2->detail, VAR_2->state);

    Binding *VAR_4 = FUNC_2((xcb_generic_event_t *)VAR_2);


    if (VAR_4 == ((void*)0))
        return;

    CommandResult *VAR_5 = FUNC_3(VAR_4, ((void*)0));
    FUNC_1(VAR_5);
}
