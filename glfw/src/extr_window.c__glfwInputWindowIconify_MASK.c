
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* iconify ) (int *,int ) ;} ;
struct TYPE_5__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;
typedef int GLFWbool ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(_GLFWwindow* VAR_0, GLFWbool VAR_1)
{
    if (VAR_0->callbacks.iconify)
        VAR_0->callbacks.iconify((GLFWwindow*) VAR_0, VAR_1);
}
