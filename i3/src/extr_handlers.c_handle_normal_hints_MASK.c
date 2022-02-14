
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_reply_t ;
typedef int xcb_connection_t ;
typedef int xcb_atom_t ;
typedef int uint8_t ;
struct TYPE_6__ {int window; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *,int *) ;

__attribute__((used)) static bool FUNC_7(void *VAR_0, xcb_connection_t *VAR_1, uint8_t VAR_2, xcb_window_t VAR_3,
                                xcb_atom_t VAR_4, xcb_get_property_reply_t *VAR_5) {
    Con *VAR_6 = FUNC_2(VAR_3);
    if (VAR_6 == ((void*)0)) {
        FUNC_0("Received WM_NORMAL_HINTS for unknown client\n");
        return 0;
    }

    bool VAR_7 = FUNC_6(VAR_6->window, VAR_5, ((void*)0));

    if (VAR_7) {
        Con *VAR_8 = FUNC_3(VAR_6);
        if (VAR_8) {
            FUNC_4(VAR_6, 0);
            FUNC_5();
        }
    }

    FUNC_1(VAR_5);
    return 1;
}
