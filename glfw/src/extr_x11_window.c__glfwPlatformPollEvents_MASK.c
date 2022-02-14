
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lastCursorPosX; int lastCursorPosY; } ;
struct TYPE_9__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int XEvent ;
struct TYPE_8__ {int display; TYPE_3__* disabledCursorWindow; } ;
struct TYPE_10__ {TYPE_2__ x11; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_6__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int*,int*) ;
 int FUNC_6 (TYPE_3__*,int,int) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
    _GLFWwindow* VAR_1;


    FUNC_4();

    FUNC_2(VAR_0.x11.display);

    while (FUNC_3(VAR_0.x11.display))
    {
        XEvent VAR_2;
        FUNC_1(VAR_0.x11.display, &VAR_2);
        FUNC_7(&VAR_2);
    }

    VAR_1 = VAR_0.x11.disabledCursorWindow;
    if (VAR_1)
    {
        int VAR_3, VAR_4;
        FUNC_5(VAR_1, &VAR_3, &VAR_4);



        if (VAR_1->x11.lastCursorPosX != VAR_3 / 2 ||
            VAR_1->x11.lastCursorPosY != VAR_4 / 2)
        {
            FUNC_6(VAR_1, VAR_3 / 2, VAR_4 / 2);
        }
    }

    FUNC_0(VAR_0.x11.display);
}
