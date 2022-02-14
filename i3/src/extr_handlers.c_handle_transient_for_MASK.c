
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_reply_t ;
typedef int xcb_connection_t ;
typedef int xcb_atom_t ;
typedef int uint8_t ;
struct TYPE_3__ {int * window; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_5(void *VAR_2, xcb_connection_t *VAR_3, uint8_t VAR_4, xcb_window_t VAR_5,
                                 xcb_atom_t VAR_6, xcb_get_property_reply_t *VAR_7) {
    Con *VAR_8;

    if ((VAR_8 = FUNC_1(VAR_5)) == ((void*)0) || VAR_8->window == ((void*)0)) {
        FUNC_0("No such window\n");
        return 0;
    }

    if (VAR_7 == ((void*)0)) {
        VAR_7 = FUNC_3(VAR_3, FUNC_4(VAR_3, 0, VAR_5, VAR_1, VAR_0, 0, 32),
                                      ((void*)0));
        if (VAR_7 == ((void*)0))
            return 0;
    }

    FUNC_2(VAR_8->window, VAR_7);

    return 1;
}
