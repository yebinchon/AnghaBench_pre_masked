
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_reply_t ;
typedef int xcb_connection_t ;
typedef int xcb_atom_t ;
typedef int uint8_t ;
struct TYPE_5__ {int * window; } ;
typedef TYPE_1__ Con ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, xcb_connection_t *VAR_1, uint8_t VAR_2,
                                     xcb_window_t VAR_3, xcb_atom_t VAR_4, xcb_get_property_reply_t *VAR_5) {
    Con *VAR_6;
    if ((VAR_6 = FUNC_0(VAR_3)) == ((void*)0) || VAR_6->window == ((void*)0))
        return 0;

    FUNC_2(VAR_6->window, VAR_5);

    VAR_6 = FUNC_1(VAR_6);

    return 1;
}
