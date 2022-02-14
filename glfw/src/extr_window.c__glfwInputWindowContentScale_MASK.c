
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* scale ) (int *,float,float) ;} ;
struct TYPE_5__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 int FUNC_0 (int *,float,float) ;

void FUNC_1(_GLFWwindow* VAR_0, float VAR_1, float VAR_2)
{
    if (VAR_0->callbacks.scale)
        VAR_0->callbacks.scale((GLFWwindow*) VAR_0, VAR_1, VAR_2);
}
