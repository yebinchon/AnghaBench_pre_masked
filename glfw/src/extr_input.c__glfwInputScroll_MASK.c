
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* scroll ) (int *,double,double) ;} ;
struct TYPE_5__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 int FUNC_0 (int *,double,double) ;

void FUNC_1(_GLFWwindow* VAR_0, double VAR_1, double VAR_2)
{
    if (VAR_0->callbacks.scroll)
        VAR_0->callbacks.scroll((GLFWwindow*) VAR_0, VAR_1, VAR_2);
}
