
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int event_x; int event_y; } ;
typedef TYPE_2__ xcb_button_press_event_t ;
struct TYPE_8__ {int width; int height; } ;
struct TYPE_10__ {TYPE_1__ rect; } ;
typedef TYPE_3__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (TYPE_3__*,int ,TYPE_2__*,int) ;

__attribute__((used)) static bool FUNC_2(Con *VAR_4, xcb_button_press_event_t *VAR_5) {



    int VAR_6 = VAR_4->rect.width - VAR_5->event_x,
        VAR_7 = VAR_5->event_x,
        VAR_8 = VAR_5->event_y,
        VAR_9 = VAR_4->rect.height - VAR_5->event_y;

    FUNC_0("click was %d px to the right, %d px to the left, %d px to top, %d px to bottom\n",
         VAR_6, VAR_7, VAR_8, VAR_9);

    if (VAR_6 < VAR_7 &&
        VAR_6 < VAR_8 &&
        VAR_6 < VAR_9)
        return FUNC_1(VAR_4, VAR_2, VAR_5, 0);

    if (VAR_7 < VAR_6 &&
        VAR_7 < VAR_8 &&
        VAR_7 < VAR_9)
        return FUNC_1(VAR_4, VAR_1, VAR_5, 0);

    if (VAR_8 < VAR_6 &&
        VAR_8 < VAR_7 &&
        VAR_8 < VAR_9)
        return FUNC_1(VAR_4, VAR_3, VAR_5, 0);

    if (VAR_9 < VAR_6 &&
        VAR_9 < VAR_7 &&
        VAR_9 < VAR_8)
        return FUNC_1(VAR_4, VAR_0, VAR_5, 0);

    return 0;
}
