
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ present; } ;
typedef TYPE_2__ _GLFWjoystick ;
struct TYPE_5__ {scalar_t__ inotify; scalar_t__ watch; int regex; } ;
struct TYPE_7__ {TYPE_1__ linjs; TYPE_2__* joysticks; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++)
    {
        _GLFWjoystick* VAR_3 = VAR_1.joysticks + VAR_2;
        if (VAR_3->present)
            FUNC_1(VAR_3);
    }

    FUNC_3(&VAR_1.linjs.regex);

    if (VAR_1.linjs.inotify > 0)
    {
        if (VAR_1.linjs.watch > 0)
            FUNC_2(VAR_1.linjs.inotify, VAR_1.linjs.watch);

        FUNC_0(VAR_1.linjs.inotify);
    }
}
