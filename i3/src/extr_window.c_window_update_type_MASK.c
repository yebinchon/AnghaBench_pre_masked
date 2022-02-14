
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_get_property_reply_t ;
typedef scalar_t__ xcb_atom_t ;
struct TYPE_4__ {scalar_t__ window_type; } ;
typedef TYPE_1__ i3Window ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(i3Window *VAR_1, xcb_get_property_reply_t *VAR_2) {
    xcb_atom_t VAR_3 = FUNC_4(VAR_2);
    FUNC_2(VAR_2);
    if (VAR_3 == VAR_0) {
        FUNC_0("cannot read _NET_WM_WINDOW_TYPE from window.\n");
        return;
    }

    VAR_1->window_type = VAR_3;
    FUNC_1("_NET_WM_WINDOW_TYPE changed to %i.\n", VAR_1->window_type);

    FUNC_3(VAR_1);
}
