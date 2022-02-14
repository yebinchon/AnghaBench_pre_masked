
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ event_x; scalar_t__ event_y; } ;
typedef TYPE_1__ xcb_button_press_event_t ;
struct resize_window_callback_params {int member_0; int const member_1; } ;
typedef scalar_t__ int16_t ;
typedef scalar_t__ drag_result_t ;
typedef int border_t ;
struct TYPE_12__ {int width; int height; } ;
struct TYPE_13__ {scalar_t__ scratchpad_state; TYPE_2__ rect; } ;
typedef TYPE_2__ Rect ;
typedef TYPE_3__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_1__ const*,int ,int,int,int ,struct resize_window_callback_params*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__) ;
 int VAR_12 ;

void FUNC_4(Con *VAR_13, const bool VAR_14,
                            const xcb_button_press_event_t *VAR_15) {
    FUNC_0("floating_resize_window\n");



    border_t VAR_16 = 0;

    if (VAR_15->event_x <= (int16_t)(VAR_13->rect.width / 2))
        VAR_16 |= VAR_1;
    else
        VAR_16 |= VAR_2;

    int VAR_17 = 0;
    if (VAR_15->event_y <= (int16_t)(VAR_13->rect.height / 2)) {
        VAR_16 |= VAR_3;
        VAR_17 = (VAR_16 & VAR_1) ? VAR_10 : VAR_11;
    } else {
        VAR_16 |= VAR_0;
        VAR_17 = (VAR_16 & VAR_1) ? VAR_8 : VAR_9;
    }

    struct resize_window_callback_params VAR_18 = {VAR_16, VAR_14};


    Rect VAR_19 = VAR_13->rect;

    drag_result_t VAR_20 = FUNC_2(VAR_13, VAR_15, VAR_7, VAR_17, 0, VAR_12, &VAR_18);

    if (!FUNC_1(VAR_13)) {
        FUNC_0("The container has been closed in the meantime.\n");
        return;
    }


    if (VAR_20 == VAR_4)
        FUNC_3(VAR_13, VAR_19);


    if (VAR_13->scratchpad_state == VAR_6)
        VAR_13->scratchpad_state = VAR_5;
}
