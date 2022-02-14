
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* monitors; int monitorCount; } ;
typedef int GLFWmonitor ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;

GLFWmonitor* FUNC_1(void)
{
    FUNC_0(((void*)0));

    if (!VAR_0.monitorCount)
        return ((void*)0);

    return (GLFWmonitor*) VAR_0.monitors[0];
}
