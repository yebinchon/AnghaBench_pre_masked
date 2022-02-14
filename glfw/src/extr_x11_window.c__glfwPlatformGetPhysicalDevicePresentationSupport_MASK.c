
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_connection_t ;
typedef int uint32_t ;
typedef int VkPhysicalDevice ;
typedef int VkInstance ;
typedef int VisualID ;
struct TYPE_5__ {scalar_t__ handle; } ;
struct TYPE_6__ {int display; TYPE_1__ x11xcb; int screen; } ;
struct TYPE_7__ {scalar_t__ KHR_xcb_surface; } ;
struct TYPE_8__ {TYPE_2__ x11; TYPE_3__ vk; } ;
typedef int (* PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR ) (int ,int ,int ,int ) ;
typedef int (* PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR ) (int ,int ,int *,int ) ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(VkInstance VAR_4,
                                                      VkPhysicalDevice VAR_5,
                                                      uint32_t VAR_6)
{
    VisualID VAR_7 = FUNC_2(FUNC_0(VAR_3.x11.display,
                                                          VAR_3.x11.screen));

    if (VAR_3.vk.KHR_xcb_surface && VAR_3.x11.x11xcb.handle)
    {
        PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR
            VAR_8 =
            (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)
            FUNC_4(VAR_4, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
        if (!VAR_8)
        {
            FUNC_3(VAR_0,
                            "X11: Vulkan instance missing VK_KHR_xcb_surface extension");
            return VAR_1;
        }

        xcb_connection_t* VAR_9 = FUNC_1(VAR_3.x11.display);
        if (!VAR_9)
        {
            FUNC_3(VAR_2,
                            "X11: Failed to retrieve XCB connection");
            return VAR_1;
        }

        return VAR_8(VAR_5,
                                                            VAR_6,
                                                            VAR_9,
                                                            VAR_7);
    }
    else
    {
        PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR
            VAR_10 =
            (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)
            FUNC_4(VAR_4, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
        if (!VAR_10)
        {
            FUNC_3(VAR_0,
                            "X11: Vulkan instance missing VK_KHR_xlib_surface extension");
            return VAR_1;
        }

        return VAR_10(VAR_5,
                                                             VAR_6,
                                                             VAR_3.x11.display,
                                                             VAR_7);
    }
}
