
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cursorMode; double virtualCursorPosX; double virtualCursorPosY; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,double,double) ;
 int FUNC_2 (TYPE_1__*,double,double) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(GLFWwindow* VAR_3, double VAR_4, double VAR_5)
{
    _GLFWwindow* VAR_6 = (_GLFWwindow*) VAR_3;
    FUNC_4(VAR_6 != ((void*)0));

    FUNC_0();

    if (VAR_4 != VAR_4 || VAR_4 < -VAR_0 || VAR_4 > VAR_0 ||
        VAR_5 != VAR_5 || VAR_5 < -VAR_0 || VAR_5 > VAR_0)
    {
        FUNC_1(VAR_2,
                        "Invalid cursor position %f %f",
                        VAR_4, VAR_5);
        return;
    }

    if (!FUNC_3(VAR_6))
        return;

    if (VAR_6->cursorMode == VAR_1)
    {

        VAR_6->virtualCursorPosX = VAR_4;
        VAR_6->virtualCursorPosY = VAR_5;
    }
    else
    {

        FUNC_2(VAR_6, VAR_4, VAR_5);
    }
}
