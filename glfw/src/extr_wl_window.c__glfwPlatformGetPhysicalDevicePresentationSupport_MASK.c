
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int VkPhysicalDevice ;
typedef int VkInstance ;
struct TYPE_3__ {int display; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;
typedef int (* PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR ) (int ,int ,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(VkInstance VAR_3,
                                                      VkPhysicalDevice VAR_4,
                                                      uint32_t VAR_5)
{
    PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR
        VAR_6 =
        (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)
        FUNC_1(VAR_3, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
    if (!VAR_6)
    {
        FUNC_0(VAR_0,
                        "Wayland: Vulkan instance missing VK_KHR_wayland_surface extension");
        return VAR_1;
    }

    return VAR_6(VAR_4,
                                                            VAR_5,
                                                            VAR_2.wl.display);
}
