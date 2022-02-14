
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct wl_display {int dummy; } ;
struct pollfd {int member_1; int revents; int member_0; } ;
typedef int ssize_t ;
typedef int repeats ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_6__ {int modifiers; } ;
struct TYPE_7__ {int pointerFocus; int cursorTimerfd; TYPE_1__ xkb; int keyboardLastScancode; int keyboardLastKey; int keyboardFocus; int timerfd; struct wl_display* display; } ;
struct TYPE_9__ {TYPE_2__ wl; TYPE_3__* windowListHead; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 (int ,scalar_t__*,int) ;
 int FUNC_5 (struct wl_display*) ;
 int FUNC_6 (struct wl_display*) ;
 scalar_t__ FUNC_7 (struct wl_display*) ;
 int FUNC_8 (struct wl_display*) ;
 scalar_t__ FUNC_9 (struct wl_display*) ;
 int FUNC_10 (struct wl_display*) ;

__attribute__((used)) static void FUNC_11(int VAR_5)
{
    struct wl_display* VAR_6 = VAR_3.wl.display;
    struct pollfd VAR_7[] = {
        { FUNC_8(VAR_6), VAR_2 },
        { VAR_3.wl.timerfd, VAR_2 },
        { VAR_3.wl.cursorTimerfd, VAR_2 },
    };
    ssize_t VAR_8;
    uint64_t VAR_9, VAR_10;

    while (FUNC_9(VAR_6) != 0)
        FUNC_6(VAR_6);




    if (FUNC_7(VAR_6) < 0 && VAR_4 != VAR_0)
    {
        _GLFWwindow* VAR_11 = VAR_3.windowListHead;
        while (VAR_11)
        {
            FUNC_1(VAR_11);
            VAR_11 = VAR_11->next;
        }
        FUNC_5(VAR_6);
        return;
    }

    if (FUNC_3(VAR_7, 3, VAR_5) > 0)
    {
        if (VAR_7[0].revents & VAR_2)
        {
            FUNC_10(VAR_6);
            FUNC_6(VAR_6);
        }
        else
        {
            FUNC_5(VAR_6);
        }

        if (VAR_7[1].revents & VAR_2)
        {
            VAR_8 = FUNC_4(VAR_3.wl.timerfd, &VAR_9, sizeof(VAR_9));
            if (VAR_8 != 8)
                return;

            for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10)
                FUNC_0(VAR_3.wl.keyboardFocus, VAR_3.wl.keyboardLastKey,
                              VAR_3.wl.keyboardLastScancode, VAR_1,
                              VAR_3.wl.xkb.modifiers);
        }

        if (VAR_7[2].revents & VAR_2)
        {
            VAR_8 = FUNC_4(VAR_3.wl.cursorTimerfd, &VAR_9, sizeof(VAR_9));
            if (VAR_8 != 8)
                return;

            FUNC_2(VAR_3.wl.pointerFocus);
        }
    }
    else
    {
        FUNC_5(VAR_6);
    }
}
