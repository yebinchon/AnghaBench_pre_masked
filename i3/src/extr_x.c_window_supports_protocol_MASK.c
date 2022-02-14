
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_4__ {size_t atoms_len; scalar_t__* atoms; } ;
typedef TYPE_1__ xcb_icccm_get_wm_protocols_reply_t ;
typedef int xcb_get_property_cookie_t ;
typedef scalar_t__ xcb_atom_t ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;

bool FUNC_3(xcb_window_t VAR_2, xcb_atom_t VAR_3) {
    xcb_get_property_cookie_t VAR_4;
    xcb_icccm_get_wm_protocols_reply_t VAR_5;
    bool VAR_6 = 0;

    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0);
    if (FUNC_1(VAR_1, VAR_4, &VAR_5, ((void*)0)) != 1)
        return 0;


    for (uint32_t VAR_7 = 0; VAR_7 < VAR_5.atoms_len; VAR_7++)
        if (VAR_5.atoms[VAR_7] == VAR_3)
            VAR_6 = 1;

    FUNC_2(&VAR_5);

    return VAR_6;
}
