
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(GLFWwindow* VAR_0, int VAR_1, int VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_0;
    FUNC_2(VAR_3 != ((void*)0));

    FUNC_0();

    if (VAR_3->monitor)
        return;

    FUNC_1(VAR_3, VAR_1, VAR_2);
}
