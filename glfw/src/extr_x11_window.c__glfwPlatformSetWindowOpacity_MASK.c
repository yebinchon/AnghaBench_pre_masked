
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
struct TYPE_7__ {int NET_WM_WINDOW_OPACITY; int display; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;
typedef int CARD32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 TYPE_5__ VAR_2 ;

void FUNC_1(_GLFWwindow* VAR_3, float VAR_4)
{
    const CARD32 VAR_5 = (CARD32) (0xffffffffu * (double) VAR_4);
    FUNC_0(VAR_2.x11.display, VAR_3->x11.handle,
                    VAR_2.x11.NET_WM_WINDOW_OPACITY, VAR_1, 32,
                    VAR_0, (unsigned char*) &VAR_5, 1);
}
