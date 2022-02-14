
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ event_x; scalar_t__ event_y; int event; } ;
typedef TYPE_3__ xcb_button_press_event_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ click_destination_t ;
struct TYPE_13__ {scalar_t__ height; scalar_t__ y; scalar_t__ width; scalar_t__ x; } ;
struct TYPE_12__ {scalar_t__ height; } ;
struct TYPE_16__ {TYPE_2__ window_rect; TYPE_1__ rect; } ;
struct TYPE_15__ {scalar_t__ height; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_4__ Rect ;
typedef TYPE_5__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ const VAR_4 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 TYPE_4__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,TYPE_3__*,int) ;

__attribute__((used)) static bool FUNC_3(Con *VAR_5, xcb_button_press_event_t *VAR_6, const click_destination_t VAR_7, bool VAR_8) {

    Rect VAR_9 = FUNC_1(VAR_5);
    FUNC_0("BORDER x = %d, y = %d for con %p, window 0x%08x\n",
         VAR_6->event_x, VAR_6->event_y, VAR_5, VAR_6->event);
    FUNC_0("checks for right >= %d\n", VAR_5->window_rect.x + VAR_5->window_rect.width);
    if (VAR_7 == VAR_4) {
        return FUNC_2(VAR_5, VAR_3, VAR_6, VAR_8);
    }

    if (VAR_6->event_x >= 0 && VAR_6->event_x <= (int32_t)VAR_9.x &&
        VAR_6->event_y >= (int32_t)VAR_9.y && VAR_6->event_y <= (int32_t)(VAR_5->rect.height + VAR_9.height))
        return FUNC_2(VAR_5, VAR_1, VAR_6, 0);

    if (VAR_6->event_x >= (int32_t)(VAR_5->window_rect.x + VAR_5->window_rect.width) &&
        VAR_6->event_y >= (int32_t)VAR_9.y && VAR_6->event_y <= (int32_t)(VAR_5->rect.height + VAR_9.height))
        return FUNC_2(VAR_5, VAR_2, VAR_6, 0);

    if (VAR_6->event_y >= (int32_t)(VAR_5->window_rect.y + VAR_5->window_rect.height))
        return FUNC_2(VAR_5, VAR_0, VAR_6, 0);

    return 0;
}
