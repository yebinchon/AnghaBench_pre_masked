
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_15__ {int error_code; } ;
typedef TYPE_1__ xcb_grab_pointer_reply_t ;
typedef int xcb_grab_pointer_cookie_t ;
typedef TYPE_1__ xcb_grab_keyboard_reply_t ;
typedef int xcb_grab_keyboard_cookie_t ;
typedef TYPE_1__ xcb_generic_error_t ;
typedef int xcb_cursor_t ;
typedef int xcb_button_press_event_t ;
struct TYPE_16__ {struct drag_x11_cb* data; } ;
struct drag_x11_cb {int threshold_exceeded; void const* extra; int result; int old_rect; TYPE_4__ prepare; int xcursor; int callback; int const* event; TYPE_5__* con; } ;
typedef TYPE_4__ ev_prepare ;
typedef int drag_result_t ;
typedef int callback_t ;
struct TYPE_17__ {int rect; } ;
typedef TYPE_5__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_9 (int ,int ,TYPE_1__**) ;
 int FUNC_10 (int ,int,int ,int,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_11 (int ,int ,TYPE_1__**) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;
 scalar_t__ VAR_11 ;

drag_result_t FUNC_15(Con *VAR_12, const xcb_button_press_event_t *VAR_13,
                           xcb_window_t VAR_14, int VAR_15,
                           bool VAR_16, callback_t VAR_17,
                           const void *VAR_18) {
    xcb_cursor_t VAR_19 = (VAR_15 && VAR_11) ? FUNC_14(VAR_15) : VAR_6;


    xcb_grab_pointer_cookie_t VAR_20;
    xcb_grab_pointer_reply_t *VAR_21;
    xcb_generic_error_t *VAR_22;

    VAR_20 = FUNC_10(VAR_7,
                              0,
                              VAR_9,
                              VAR_3 | VAR_4,
                              VAR_5,
                              VAR_5,
                              VAR_14,
                              VAR_16 ? VAR_6 : VAR_19,
                              VAR_2);

    if ((VAR_21 = FUNC_11(VAR_7, VAR_20, &VAR_22)) == ((void*)0)) {
        FUNC_0("Could not grab pointer (error_code = %d)\n", VAR_22->error_code);
        FUNC_5(VAR_22);
        return VAR_1;
    }

    FUNC_5(VAR_21);


    xcb_grab_keyboard_cookie_t VAR_23;
    xcb_grab_keyboard_reply_t *VAR_24;

    VAR_23 = FUNC_8(VAR_7,
                                    0,
                                    VAR_9,
                                    VAR_2,
                                    VAR_5,
                                    VAR_5
    );

    if ((VAR_24 = FUNC_9(VAR_7, VAR_23, &VAR_22)) == ((void*)0)) {
        FUNC_0("Could not grab keyboard (error_code = %d)\n", VAR_22->error_code);
        FUNC_5(VAR_22);
        FUNC_13(VAR_7, VAR_2);
        return VAR_1;
    }

    FUNC_5(VAR_24);


    struct drag_x11_cb VAR_25 = {
        .result = VAR_0,
        .con = VAR_12,
        .event = VAR_13,
        .callback = VAR_17,
        .threshold_exceeded = !VAR_16,
        .xcursor = VAR_19,
        .extra = VAR_18,
    };
    ev_prepare *VAR_26 = &VAR_25.prepare;
    if (VAR_12)
        VAR_25.old_rect = VAR_12->rect;
    FUNC_2(VAR_26, VAR_10);
    VAR_26->data = &VAR_25;
    FUNC_6(0);
    FUNC_3(VAR_8, VAR_26);

    FUNC_1(VAR_8, 0);

    FUNC_4(VAR_8, VAR_26);
    FUNC_6(1);

    FUNC_12(VAR_7, VAR_2);
    FUNC_13(VAR_7, VAR_2);
    FUNC_7(VAR_7);

    return VAR_25.result;
}
