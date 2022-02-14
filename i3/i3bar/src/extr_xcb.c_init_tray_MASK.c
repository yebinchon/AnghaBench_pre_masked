
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xcb_intern_atom_cookie_t ;
struct TYPE_8__ {scalar_t__ owner; } ;
typedef TYPE_1__ xcb_get_selection_owner_reply_t ;
typedef int xcb_get_selection_owner_cookie_t ;
typedef int uint32_t ;
struct TYPE_11__ {int black_pixel; } ;
struct TYPE_10__ {int visual_id; } ;
struct TYPE_9__ {int atom; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 TYPE_6__* VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,char*,int) ;
 int FUNC_7 (char*) ;
 TYPE_2__* VAR_19 ;
 TYPE_4__* VAR_20 ;
 int FUNC_8 (int ,int ,scalar_t__,int ,int ,int,int,int*) ;
 int VAR_21 ;
 int FUNC_9 (int ,int ,scalar_t__,int ,int,int,int,int,int ,int ,int,int,int*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 TYPE_1__* FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ,int ,int ,char*) ;
 TYPE_2__* FUNC_14 (int ,int ,int *) ;
 int VAR_22 ;
 int FUNC_15 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_16(void) {
    FUNC_0("Initializing system tray functionality\n");

    char VAR_23[FUNC_7("_NET_SYSTEM_TRAY_S") + 11];
    FUNC_6(VAR_23, FUNC_7("_NET_SYSTEM_TRAY_S") + 11, "_NET_SYSTEM_TRAY_S%d", VAR_17);
    xcb_intern_atom_cookie_t VAR_24;
    if (VAR_19 == ((void*)0))
        VAR_24 = FUNC_13(VAR_21, 0, FUNC_7(VAR_23), VAR_23);


    VAR_18 = FUNC_10(VAR_21);
    uint32_t VAR_25 = VAR_4 | VAR_5 | VAR_7 | VAR_6;
    uint32_t VAR_26[] = {VAR_16->black_pixel, VAR_16->black_pixel, 1, VAR_14};
    FUNC_9(VAR_21,
                      VAR_15,
                      VAR_18,
                      VAR_22,
                      -1, -1,
                      1, 1,
                      0,
                      VAR_9,
                      VAR_20->visual_id,
                      VAR_25,
                      VAR_26);

    uint32_t VAR_27 = VAR_11;

    FUNC_8(VAR_21,
                        VAR_8,
                        VAR_18,
                        VAR_13[VAR_10],
                        VAR_1,
                        32,
                        1,
                        &VAR_27);
    FUNC_8(VAR_21,
                        VAR_8,
                        VAR_18,
                        VAR_13[VAR_12],
                        VAR_2,
                        32,
                        1,
                        &VAR_20->visual_id);

    FUNC_4();

    if (VAR_19 == ((void*)0)) {
        if (!(VAR_19 = FUNC_14(VAR_21, VAR_24, ((void*)0)))) {
            FUNC_1("Could not get atom %s\n", VAR_23);
            FUNC_2(VAR_0);
        }
    }

    FUNC_15(VAR_21,
                            VAR_18,
                            VAR_19->atom,
                            VAR_3);


    xcb_get_selection_owner_cookie_t VAR_28;
    xcb_get_selection_owner_reply_t *VAR_29;

    VAR_28 = FUNC_11(VAR_21, VAR_19->atom);
    if (!(VAR_29 = FUNC_12(VAR_21, VAR_28, ((void*)0)))) {
        FUNC_1("Could not get selection owner for %s\n", VAR_23);
        FUNC_2(VAR_0);
    }

    if (VAR_29->owner != VAR_18) {
        FUNC_1("Could not set the %s selection. "
             "Maybe another tray is already running?\n",
             VAR_23);


        FUNC_3(VAR_29);
        return;
    }

    FUNC_3(VAR_29);

    FUNC_5();
}
