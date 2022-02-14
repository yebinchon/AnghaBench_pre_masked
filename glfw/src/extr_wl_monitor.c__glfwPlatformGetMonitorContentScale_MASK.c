
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ scale; } ;
struct TYPE_5__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWmonitor ;



void FUNC_0(_GLFWmonitor* VAR_0,
                                         float* VAR_1, float* VAR_2)
{
    if (VAR_1)
        *VAR_1 = (float) VAR_0->wl.scale;
    if (VAR_2)
        *VAR_2 = (float) VAR_0->wl.scale;
}
