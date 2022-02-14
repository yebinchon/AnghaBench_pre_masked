
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* destroy ) (TYPE_2__*) ;} ;
struct TYPE_6__ {TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(_GLFWwindow* VAR_0)
{
    if (VAR_0->context.destroy)
        VAR_0->context.destroy(VAR_0);
}
