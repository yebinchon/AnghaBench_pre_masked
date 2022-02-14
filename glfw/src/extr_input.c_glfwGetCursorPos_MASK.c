
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cursorMode; double virtualCursorPosX; double virtualCursorPosY; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,double*,double*) ;
 int FUNC_2 (int ) ;

void FUNC_3(GLFWwindow* VAR_1, double* VAR_2, double* VAR_3)
{
    _GLFWwindow* VAR_4 = (_GLFWwindow*) VAR_1;
    FUNC_2(VAR_4 != ((void*)0));

    if (VAR_2)
        *VAR_2 = 0;
    if (VAR_3)
        *VAR_3 = 0;

    FUNC_0();

    if (VAR_4->cursorMode == VAR_0)
    {
        if (VAR_2)
            *VAR_2 = VAR_4->virtualCursorPosX;
        if (VAR_3)
            *VAR_3 = VAR_4->virtualCursorPosY;
    }
    else
        FUNC_1(VAR_4, VAR_2, VAR_3);
}
