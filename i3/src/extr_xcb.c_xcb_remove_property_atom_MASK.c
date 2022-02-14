
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_6__ {int format; } ;
typedef TYPE_1__ xcb_get_property_reply_t ;
typedef int xcb_connection_t ;
typedef scalar_t__ xcb_atom_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,scalar_t__,int ,int,int,scalar_t__*) ;
 int FUNC_2 (int *,int,int ,scalar_t__,int ,int ,int) ;
 TYPE_1__* FUNC_3 (int *,int ,int *) ;
 scalar_t__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(xcb_connection_t *VAR_3, xcb_window_t VAR_4, xcb_atom_t VAR_5, xcb_atom_t VAR_6) {
    FUNC_6(VAR_3);

    xcb_get_property_reply_t *VAR_7 =
        FUNC_3(VAR_3,
                               FUNC_2(VAR_3, 0, VAR_4, VAR_5, VAR_1, 0, 4096), ((void*)0));
    if (VAR_7 == ((void*)0) || FUNC_5(VAR_7) == 0)
        goto release_grab;
    xcb_atom_t *VAR_8 = FUNC_4(VAR_7);
    if (VAR_8 == ((void*)0)) {
        goto release_grab;
    }

    {
        int VAR_9 = 0;
        const int VAR_10 = FUNC_5(VAR_7) / (VAR_7->format / 8);
        xcb_atom_t VAR_11[VAR_10];
        for (int VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
            if (VAR_8[VAR_12] != VAR_6)
                VAR_11[VAR_9++] = VAR_8[VAR_12];
        }

        FUNC_1(VAR_3, VAR_2, VAR_4, VAR_5, VAR_0, 32, VAR_9, VAR_11);
    }

release_grab:
    FUNC_0(VAR_7);
    FUNC_7(VAR_3);
}
