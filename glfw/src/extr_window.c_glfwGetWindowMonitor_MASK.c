
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;
typedef int GLFWmonitor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

GLFWmonitor* FUNC_2(GLFWwindow* VAR_0)
{
    _GLFWwindow* VAR_1 = (_GLFWwindow*) VAR_0;
    FUNC_1(VAR_1 != ((void*)0));

    FUNC_0(((void*)0));
    return (GLFWmonitor*) VAR_1->monitor;
}
