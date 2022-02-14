
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int handle; scalar_t__ overrideRedirect; } ;
struct TYPE_12__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_10__ {int display; scalar_t__ NET_WM_STATE_MAXIMIZED_HORZ; scalar_t__ NET_WM_STATE_MAXIMIZED_VERT; scalar_t__ NET_WM_STATE; } ;
struct TYPE_13__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 TYPE_9__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int ,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_6 (TYPE_3__*) ;

void FUNC_7(_GLFWwindow* VAR_3)
{
    if (VAR_3->x11.overrideRedirect)
    {


        FUNC_2(VAR_0,
                        "X11: Iconification of full screen windows requires a WM that supports EWMH full screen");
        return;
    }

    if (FUNC_3(VAR_3))
    {
        FUNC_1(VAR_2.x11.display, VAR_3->x11.handle);
        FUNC_6(VAR_3);
    }
    else if (FUNC_4(VAR_3))
    {
        if (VAR_2.x11.NET_WM_STATE &&
            VAR_2.x11.NET_WM_STATE_MAXIMIZED_VERT &&
            VAR_2.x11.NET_WM_STATE_MAXIMIZED_HORZ)
        {
            FUNC_5(VAR_3,
                          VAR_2.x11.NET_WM_STATE,
                          VAR_1,
                          VAR_2.x11.NET_WM_STATE_MAXIMIZED_VERT,
                          VAR_2.x11.NET_WM_STATE_MAXIMIZED_HORZ,
                          1, 0);
        }
    }

    FUNC_0(VAR_2.x11.display);
}
