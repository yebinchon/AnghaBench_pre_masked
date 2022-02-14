
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ event; scalar_t__ mode; scalar_t__ detail; } ;
typedef TYPE_2__ xcb_focus_in_event_t ;
struct TYPE_10__ {TYPE_1__* parent; int name; int * window; } ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_3__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(xcb_focus_in_event_t *VAR_9) {
    FUNC_0("focus change in, for window 0x%08x\n", VAR_9->event);

    if (VAR_9->event == VAR_8) {
        FUNC_0("Received focus in for root window, refocusing the focused window.\n");
        FUNC_3(VAR_6);
        VAR_7 = VAR_1;
        FUNC_6(VAR_5);
    }

    Con *VAR_10;
    if ((VAR_10 = FUNC_2(VAR_9->event)) == ((void*)0) || VAR_10->window == ((void*)0))
        return;
    FUNC_0("That is con %p / %s\n", VAR_10, VAR_10->name);

    if (VAR_9->mode == VAR_3 ||
        VAR_9->mode == VAR_4) {
        FUNC_0("FocusIn event for grab/ungrab, ignoring\n");
        return;
    }

    if (VAR_9->detail == VAR_2) {
        FUNC_0("notify detail is pointer, ignoring this event\n");
        return;
    }



    if (VAR_7 == VAR_9->event && !FUNC_4(VAR_10)) {
        FUNC_0("focus matches the currently focused window, not doing anything\n");
        return;
    }


    if (VAR_10->parent->type == VAR_0) {
        FUNC_0("This is a dock client, not focusing.\n");
        return;
    }

    FUNC_0("focus is different / refocusing floating window: updating decorations\n");

    FUNC_1(VAR_10);


    VAR_7 = VAR_9->event;
    FUNC_5();
}
