
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(GLFWwindow* VAR_0)
{
    _GLFWwindow* VAR_1 = (_GLFWwindow*) VAR_0;
    FUNC_2(VAR_1 != ((void*)0));

    FUNC_0();

    if (VAR_1->monitor)
        return;

    FUNC_1(VAR_1);
}
