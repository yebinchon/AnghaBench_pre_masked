
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct wl_keyboard {int dummy; } ;
struct TYPE_8__ {int tv_sec; int tv_nsec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct itimerspec {TYPE_3__ it_value; TYPE_2__ it_interval; } ;
typedef int _GLFWwindow ;
struct TYPE_6__ {int modifiers; } ;
struct TYPE_9__ {int keyboardRepeatRate; int keyboardLastKey; int keyboardRepeatDelay; int timerfd; scalar_t__ keyboardLastScancode; TYPE_1__ xkb; scalar_t__ serial; int * keyboardFocus; } ;
struct TYPE_10__ {TYPE_4__ wl; } ;
typedef scalar_t__ GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_0 (int *,int,scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int ,struct itimerspec*,int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(void* VAR_4,
                              struct wl_keyboard* VAR_5,
                              uint32_t VAR_6,
                              uint32_t VAR_7,
                              uint32_t VAR_8,
                              uint32_t VAR_9)
{
    int VAR_10;
    int VAR_11;
    _GLFWwindow* VAR_12 = VAR_3.wl.keyboardFocus;
    GLFWbool VAR_13;
    struct itimerspec VAR_14 = {};

    if (!VAR_12)
        return;

    VAR_10 = FUNC_3(VAR_8);
    VAR_11 = VAR_9 == VAR_2
            ? VAR_0 : VAR_1;

    VAR_3.wl.serial = VAR_6;
    FUNC_0(VAR_12, VAR_10, VAR_8, VAR_11,
                  VAR_3.wl.xkb.modifiers);

    if (VAR_11 == VAR_0)
    {
        VAR_13 = FUNC_1(VAR_12, VAR_8);

        if (VAR_13 && VAR_3.wl.keyboardRepeatRate > 0)
        {
            VAR_3.wl.keyboardLastKey = VAR_10;
            VAR_3.wl.keyboardLastScancode = VAR_8;
            if (VAR_3.wl.keyboardRepeatRate > 1)
                VAR_14.it_interval.tv_nsec = 1000000000 / VAR_3.wl.keyboardRepeatRate;
            else
                VAR_14.it_interval.tv_sec = 1;
            VAR_14.it_value.tv_sec = VAR_3.wl.keyboardRepeatDelay / 1000;
            VAR_14.it_value.tv_nsec = (VAR_3.wl.keyboardRepeatDelay % 1000) * 1000000;
        }
    }
    FUNC_2(VAR_3.wl.timerfd, 0, &VAR_14, ((void*)0));
}
