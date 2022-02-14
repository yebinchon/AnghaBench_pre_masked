
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int format; } ;
typedef TYPE_1__ xcb_get_property_reply_t ;
typedef scalar_t__ xcb_atom_t ;


 scalar_t__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

bool FUNC_2(xcb_get_property_reply_t *VAR_0, xcb_atom_t VAR_1) {
    if (VAR_0 == ((void*)0) || FUNC_1(VAR_0) == 0)
        return 0;

    xcb_atom_t *VAR_2;
    if ((VAR_2 = FUNC_0(VAR_0)) == ((void*)0))
        return 0;

    for (int VAR_3 = 0; VAR_3 < FUNC_1(VAR_0) / (VAR_0->format / 8); VAR_3++)
        if (VAR_2[VAR_3] == VAR_1)
            return 1;

    return 0;
}
