
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int _GLFWwindow ;
struct TYPE_3__ {int display; scalar_t__ NET_WM_STATE_MAXIMIZED_HORZ; scalar_t__ NET_WM_STATE_MAXIMIZED_VERT; scalar_t__ NET_WM_STATE; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__,int ,scalar_t__,scalar_t__,int,int ) ;

void FUNC_2(_GLFWwindow* VAR_2)
{
    if (VAR_1.x11.NET_WM_STATE &&
        VAR_1.x11.NET_WM_STATE_MAXIMIZED_VERT &&
        VAR_1.x11.NET_WM_STATE_MAXIMIZED_HORZ)
    {
        FUNC_1(VAR_2,
                      VAR_1.x11.NET_WM_STATE,
                      VAR_0,
                      VAR_1.x11.NET_WM_STATE_MAXIMIZED_VERT,
                      VAR_1.x11.NET_WM_STATE_MAXIMIZED_HORZ,
                      1, 0);
        FUNC_0(VAR_1.x11.display);
    }
}
