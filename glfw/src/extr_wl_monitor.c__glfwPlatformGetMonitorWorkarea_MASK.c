
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; size_t currentMode; } ;
struct TYPE_7__ {TYPE_1__ wl; TYPE_2__* modes; } ;
typedef TYPE_3__ _GLFWmonitor ;
struct TYPE_6__ {int width; int height; } ;



void FUNC_0(_GLFWmonitor* VAR_0,
                                     int* VAR_1, int* VAR_2,
                                     int* VAR_3, int* VAR_4)
{
    if (VAR_1)
        *VAR_1 = VAR_0->wl.x;
    if (VAR_2)
        *VAR_2 = VAR_0->wl.y;
    if (VAR_3)
        *VAR_3 = VAR_0->modes[VAR_0->wl.currentMode].width;
    if (VAR_4)
        *VAR_4 = VAR_0->modes[VAR_0->wl.currentMode].height;
}
