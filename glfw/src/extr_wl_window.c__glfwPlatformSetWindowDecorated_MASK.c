
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef scalar_t__ GLFWbool ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(_GLFWwindow* VAR_0, GLFWbool VAR_1)
{
    if (!VAR_0->monitor)
    {
        if (VAR_1)
            FUNC_0(VAR_0);
        else
            FUNC_1(VAR_0);
    }
}
