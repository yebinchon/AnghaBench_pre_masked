
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int scale; } ;
struct TYPE_6__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWwindow ;


 int FUNC_0 (TYPE_2__*,int*,int*) ;

void FUNC_1(_GLFWwindow* VAR_0,
                                     int* VAR_1, int* VAR_2)
{
    FUNC_0(VAR_0, VAR_1, VAR_2);
    *VAR_1 *= VAR_0->wl.scale;
    *VAR_2 *= VAR_0->wl.scale;
}
