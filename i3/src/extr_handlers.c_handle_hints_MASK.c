
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_reply_t ;
typedef int xcb_connection_t ;
typedef int xcb_atom_t ;
typedef int uint8_t ;
struct TYPE_4__ {int window; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int*) ;
 int * FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static bool FUNC_7(void *VAR_0, xcb_connection_t *VAR_1, uint8_t VAR_2, xcb_window_t VAR_3,
                         xcb_atom_t VAR_4, xcb_get_property_reply_t *VAR_5) {
    Con *VAR_6 = FUNC_1(VAR_3);
    if (VAR_6 == ((void*)0)) {
        FUNC_0("Received WM_HINTS for unknown client\n");
        return 0;
    }

    bool VAR_7;
    if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_5(VAR_1, FUNC_6(VAR_1, VAR_3), ((void*)0));
    FUNC_4(VAR_6->window, VAR_5, &VAR_7);
    FUNC_2(VAR_6, VAR_7);
    FUNC_3();

    return 1;
}
