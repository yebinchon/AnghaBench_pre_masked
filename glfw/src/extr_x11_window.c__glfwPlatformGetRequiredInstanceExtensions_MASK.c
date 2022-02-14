
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ handle; } ;
struct TYPE_5__ {TYPE_3__ x11xcb; } ;
struct TYPE_6__ {scalar_t__ KHR_xcb_surface; int KHR_xlib_surface; int KHR_surface; } ;
struct TYPE_8__ {TYPE_1__ x11; TYPE_2__ vk; } ;


 TYPE_4__ VAR_0 ;

void FUNC_0(char** VAR_1)
{
    if (!VAR_0.vk.KHR_surface)
        return;

    if (!VAR_0.vk.KHR_xcb_surface || !VAR_0.x11.x11xcb.handle)
    {
        if (!VAR_0.vk.KHR_xlib_surface)
            return;
    }

    VAR_1[0] = "VK_KHR_surface";



    if (VAR_0.vk.KHR_xcb_surface && VAR_0.x11.x11xcb.handle)
        VAR_1[1] = "VK_KHR_xcb_surface";
    else
        VAR_1[1] = "VK_KHR_xlib_surface";
}
