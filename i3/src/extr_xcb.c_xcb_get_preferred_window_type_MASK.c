
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int format; } ;
typedef TYPE_1__ xcb_get_property_reply_t ;
typedef scalar_t__ xcb_atom_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

xcb_atom_t FUNC_2(xcb_get_property_reply_t *VAR_11) {
    if (VAR_11 == ((void*)0) || FUNC_1(VAR_11) == 0)
        return VAR_10;

    xcb_atom_t *VAR_12;
    if ((VAR_12 = FUNC_0(VAR_11)) == ((void*)0))
        return VAR_10;

    for (int VAR_13 = 0; VAR_13 < FUNC_1(VAR_11) / (VAR_11->format / 8); VAR_13++) {
        if (VAR_12[VAR_13] == VAR_3 ||
            VAR_12[VAR_13] == VAR_0 ||
            VAR_12[VAR_13] == VAR_9 ||
            VAR_12[VAR_13] == VAR_7 ||
            VAR_12[VAR_13] == VAR_6 ||
            VAR_12[VAR_13] == VAR_2 ||
            VAR_12[VAR_13] == VAR_1 ||
            VAR_12[VAR_13] == VAR_5 ||
            VAR_12[VAR_13] == VAR_8 ||
            VAR_12[VAR_13] == VAR_4) {
            return VAR_12[VAR_13];
        }
    }

    return VAR_10;
}
