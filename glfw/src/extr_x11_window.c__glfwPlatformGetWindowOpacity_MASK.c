
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; } ;
struct TYPE_8__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {int NET_WM_WINDOW_OPACITY; int NET_WM_CM_Sx; int display; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;
typedef double CARD32 ;


 int VAR_0 ;
 int FUNC_0 (double*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_5__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ,unsigned char**) ;

float FUNC_3(_GLFWwindow* VAR_2)
{
    float VAR_3 = 1.f;

    if (FUNC_1(VAR_1.x11.display, VAR_1.x11.NET_WM_CM_Sx))
    {
        CARD32* VAR_4 = ((void*)0);

        if (FUNC_2(VAR_2->x11.handle,
                                      VAR_1.x11.NET_WM_WINDOW_OPACITY,
                                      VAR_0,
                                      (unsigned char**) &VAR_4))
        {
            VAR_3 = (float) (*VAR_4 / (double) 0xffffffffu);
        }

        if (VAR_4)
            FUNC_0(VAR_4);
    }

    return VAR_3;
}
