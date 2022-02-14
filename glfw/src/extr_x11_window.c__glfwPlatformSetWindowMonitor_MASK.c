
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_17__ {int handle; } ;
struct TYPE_19__ {TYPE_1__ x11; TYPE_4__* monitor; int resizable; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_20__ {TYPE_3__* window; } ;
typedef TYPE_4__ _GLFWmonitor ;
struct TYPE_18__ {int display; } ;
struct TYPE_16__ {TYPE_2__ x11; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int,int,int) ;
 TYPE_15__ VAR_0 ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;

void FUNC_10(_GLFWwindow* VAR_1,
                                   _GLFWmonitor* VAR_2,
                                   int VAR_3, int VAR_4,
                                   int VAR_5, int VAR_6,
                                   int VAR_7)
{
    if (VAR_1->monitor == VAR_2)
    {
        if (VAR_2)
        {
            if (VAR_2->window == VAR_1)
                FUNC_5(VAR_1);
        }
        else
        {
            if (!VAR_1->resizable)
                FUNC_7(VAR_1, VAR_5, VAR_6);

            FUNC_2(VAR_0.x11.display, VAR_1->x11.handle,
                              VAR_3, VAR_4, VAR_5, VAR_6);
        }

        FUNC_0(VAR_0.x11.display);
        return;
    }

    if (VAR_1->monitor)
        FUNC_6(VAR_1);

    FUNC_3(VAR_1, VAR_2);
    FUNC_7(VAR_1, VAR_5, VAR_6);

    if (VAR_1->monitor)
    {
        if (!FUNC_4(VAR_1))
        {
            FUNC_1(VAR_0.x11.display, VAR_1->x11.handle);
            FUNC_9(VAR_1);
        }

        FUNC_8(VAR_1);
        FUNC_5(VAR_1);
    }
    else
    {
        FUNC_8(VAR_1);
        FUNC_2(VAR_0.x11.display, VAR_1->x11.handle,
                          VAR_3, VAR_4, VAR_5, VAR_6);
    }

    FUNC_0(VAR_0.x11.display);
}
