
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int KHR_wayland_surface; int KHR_surface; } ;
struct TYPE_4__ {TYPE_1__ vk; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(char** VAR_1)
{
    if (!VAR_0.vk.KHR_surface || !VAR_0.vk.KHR_wayland_surface)
        return;

    VAR_1[0] = "VK_KHR_surface";
    VAR_1[1] = "VK_KHR_wayland_surface";
}
