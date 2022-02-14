
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int autoIconify; int resizable; int decorated; int floating; int focusOnShow; int monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ) ;

void FUNC_6(GLFWwindow* VAR_8, int VAR_9, int VAR_10)
{
    _GLFWwindow* VAR_11 = (_GLFWwindow*) VAR_8;
    FUNC_5(VAR_11 != ((void*)0));

    FUNC_0();

    VAR_10 = VAR_10 ? VAR_7 : VAR_2;

    if (VAR_9 == VAR_0)
        VAR_11->autoIconify = VAR_10;
    else if (VAR_9 == VAR_6)
    {
        if (VAR_11->resizable == VAR_10)
            return;

        VAR_11->resizable = VAR_10;
        if (!VAR_11->monitor)
            FUNC_4(VAR_11, VAR_10);
    }
    else if (VAR_9 == VAR_1)
    {
        if (VAR_11->decorated == VAR_10)
            return;

        VAR_11->decorated = VAR_10;
        if (!VAR_11->monitor)
            FUNC_2(VAR_11, VAR_10);
    }
    else if (VAR_9 == VAR_3)
    {
        if (VAR_11->floating == VAR_10)
            return;

        VAR_11->floating = VAR_10;
        if (!VAR_11->monitor)
            FUNC_3(VAR_11, VAR_10);
    }
    else if (VAR_9 == VAR_4)
        VAR_11->focusOnShow = VAR_10;
    else
        FUNC_1(VAR_5, "Invalid window attribute 0x%08X", VAR_9);
}
