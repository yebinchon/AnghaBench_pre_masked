
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int input; } ;
typedef TYPE_1__ xcb_icccm_wm_hints_t ;
typedef int xcb_get_property_reply_t ;
struct TYPE_7__ {int doesnt_accept_focus; } ;
typedef TYPE_2__ i3Window ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

void FUNC_7(i3Window *VAR_1, xcb_get_property_reply_t *VAR_2, bool *VAR_3) {
    if (VAR_3 != ((void*)0))
        *VAR_3 = 0;

    if (VAR_2 == ((void*)0) || FUNC_4(VAR_2) == 0) {
        FUNC_0("WM_HINTS not set.\n");
        FUNC_1(VAR_2);
        return;
    }

    xcb_icccm_wm_hints_t VAR_4;

    if (!FUNC_5(&VAR_4, VAR_2)) {
        FUNC_0("Could not get WM_HINTS\n");
        FUNC_3(VAR_2);
        return;
    }

    if (VAR_4.flags & VAR_0) {
        VAR_1->doesnt_accept_focus = !VAR_4.input;
        FUNC_2("WM_HINTS.input changed to \"%d\"\n", VAR_4.input);
    }

    if (VAR_3 != ((void*)0))
        *VAR_3 = (FUNC_6(&VAR_4) != 0);

    FUNC_3(VAR_2);
}
