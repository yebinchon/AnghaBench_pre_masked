
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int _GLFWmonitor ;
struct TYPE_3__ {float contentScaleX; float contentScaleY; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(_GLFWmonitor* VAR_1,
                                         float* VAR_2, float* VAR_3)
{
    if (VAR_2)
        *VAR_2 = VAR_0.x11.contentScaleX;
    if (VAR_3)
        *VAR_3 = VAR_0.x11.contentScaleY;
}
