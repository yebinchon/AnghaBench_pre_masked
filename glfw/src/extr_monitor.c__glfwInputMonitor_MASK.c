
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * monitor; struct TYPE_9__* next; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int _GLFWmonitor ;
struct TYPE_8__ {int (* monitor ) (int *,int) ;} ;
struct TYPE_10__ {int monitorCount; TYPE_1__ callbacks; int ** monitors; TYPE_2__* windowListHead; } ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int*,int*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int*,int*) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int ,int,int,int ) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (int **,int **,size_t) ;
 int ** FUNC_6 (int **,int) ;
 int FUNC_7 (int *,int) ;

void FUNC_8(_GLFWmonitor* VAR_4, int VAR_5, int VAR_6)
{
    if (VAR_5 == VAR_0)
    {
        VAR_3.monitorCount++;
        VAR_3.monitors =
            FUNC_6(VAR_3.monitors, sizeof(_GLFWmonitor*) * VAR_3.monitorCount);

        if (VAR_6 == VAR_2)
        {
            FUNC_5(VAR_3.monitors + 1,
                    VAR_3.monitors,
                    ((size_t) VAR_3.monitorCount - 1) * sizeof(_GLFWmonitor*));
            VAR_3.monitors[0] = VAR_4;
        }
        else
            VAR_3.monitors[VAR_3.monitorCount - 1] = VAR_4;
    }
    else if (VAR_5 == VAR_1)
    {
        int VAR_7;
        _GLFWwindow* VAR_8;

        for (VAR_8 = VAR_3.windowListHead; VAR_8; VAR_8 = VAR_8->next)
        {
            if (VAR_8->monitor == VAR_4)
            {
                int VAR_9, VAR_10, VAR_11, VAR_12;
                FUNC_2(VAR_8, &VAR_9, &VAR_10);
                FUNC_3(VAR_8, ((void*)0), 0, 0, VAR_9, VAR_10, 0);
                FUNC_1(VAR_8, &VAR_11, &VAR_12, ((void*)0), ((void*)0));
                FUNC_4(VAR_8, VAR_11, VAR_12);
            }
        }

        for (VAR_7 = 0; VAR_7 < VAR_3.monitorCount; VAR_7++)
        {
            if (VAR_3.monitors[VAR_7] == VAR_4)
            {
                VAR_3.monitorCount--;
                FUNC_5(VAR_3.monitors + VAR_7,
                        VAR_3.monitors + VAR_7 + 1,
                        ((size_t) VAR_3.monitorCount - VAR_7) * sizeof(_GLFWmonitor*));
                break;
            }
        }
    }

    if (VAR_3.callbacks.monitor)
        VAR_3.callbacks.monitor((GLFWmonitor*) VAR_4, VAR_5);

    if (VAR_5 == VAR_1)
        FUNC_0(VAR_4);
}
