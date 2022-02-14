
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_keysym_t ;
typedef scalar_t__ xcb_keycode_t ;
struct TYPE_6__ {int detail; int state; } ;
typedef TYPE_1__ xcb_key_press_event_t ;
typedef int xcb_connection_t ;
typedef int uint16_t ;
struct TYPE_7__ {int keycodes_per_modifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_15 ;
 TYPE_3__* VAR_16 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int *,int ,int ,int ,int ,int,int ,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,TYPE_1__*,int) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_9(void *VAR_20, xcb_connection_t *VAR_21, xcb_key_press_event_t *VAR_22) {
    FUNC_3("Keypress %d, state raw = %d\n", VAR_22->detail, VAR_22->state);


    uint16_t VAR_23 = VAR_22->state & ~(VAR_19 | VAR_6);


    VAR_23 &= 0xFF;

    xcb_keysym_t VAR_24 = FUNC_8(VAR_17, VAR_22, VAR_23);

    FUNC_3("sym = %c (%d)\n", VAR_24, VAR_24);

    if (VAR_24 == VAR_12 || VAR_24 == VAR_11) {
        if (VAR_14 == VAR_5) {
            VAR_14 = VAR_4;

            FUNC_5(VAR_21,
                                VAR_8,
                                VAR_18,
                                VAR_1,
                                VAR_0,
                                8,
                                FUNC_4("i3: generate config"),
                                "i3: generate config");
            FUNC_6(VAR_21);
        } else
            FUNC_1();
    }


    if (VAR_24 == VAR_13 || VAR_24 == VAR_9) {
        VAR_15 = (VAR_15 == VAR_2) ? VAR_3 : VAR_2;
        FUNC_2();
    }


    if (VAR_24 == VAR_10)
        FUNC_0(0);



    xcb_keycode_t *VAR_25 = FUNC_7(VAR_16);

    int VAR_26 = 3;
    for (int VAR_27 = 0; VAR_27 < VAR_16->keycodes_per_modifier; VAR_27++) {
        xcb_keycode_t VAR_28 = VAR_25[(VAR_26 * VAR_16->keycodes_per_modifier) + VAR_27];
        if (VAR_28 == VAR_7)
            continue;
        FUNC_3("Modifier keycode for Mod1: 0x%02x\n", VAR_28);
        if (VAR_28 == VAR_22->detail) {
            VAR_15 = VAR_2;
            FUNC_3("This is Mod1!\n");
        }
    }


    VAR_26 = 6;
    for (int VAR_29 = 0; VAR_29 < VAR_16->keycodes_per_modifier; VAR_29++) {
        xcb_keycode_t VAR_30 = VAR_25[(VAR_26 * VAR_16->keycodes_per_modifier) + VAR_29];
        if (VAR_30 == VAR_7)
            continue;
        FUNC_3("Modifier keycode for Mod4: 0x%02x\n", VAR_30);
        if (VAR_30 == VAR_22->detail) {
            VAR_15 = VAR_3;
            FUNC_3("This is Mod4!\n");
        }
    }

    FUNC_2();
    return 1;
}
