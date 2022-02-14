
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int xcb_connection_t ;
typedef int sci ;
struct TYPE_17__ {int handle; } ;
struct TYPE_18__ {TYPE_4__ x11; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_19__ {int window; int dpy; int sType; int * connection; } ;
typedef TYPE_6__ VkXlibSurfaceCreateInfoKHR ;
typedef TYPE_6__ VkXcbSurfaceCreateInfoKHR ;
typedef int VkSurfaceKHR ;
typedef scalar_t__ VkResult ;
typedef int VkInstance ;
typedef int VkAllocationCallbacks ;
struct TYPE_15__ {scalar_t__ handle; } ;
struct TYPE_16__ {int display; TYPE_2__ x11xcb; } ;
struct TYPE_14__ {scalar_t__ KHR_xcb_surface; } ;
struct TYPE_13__ {TYPE_3__ x11; TYPE_1__ vk; } ;
typedef scalar_t__ (* PFN_vkCreateXlibSurfaceKHR ) (int ,TYPE_6__*,int const*,int *) ;
typedef scalar_t__ (* PFN_vkCreateXcbSurfaceKHR ) (int ,TYPE_6__*,int const*,int *) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 TYPE_12__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_4 (int ,char*) ;

VkResult FUNC_5(VkInstance VAR_6,
                                          _GLFWwindow* VAR_7,
                                          const VkAllocationCallbacks* VAR_8,
                                          VkSurfaceKHR* VAR_9)
{
    if (VAR_5.vk.KHR_xcb_surface && VAR_5.x11.x11xcb.handle)
    {
        VkResult VAR_10;
        VkXcbSurfaceCreateInfoKHR VAR_11;
        PFN_vkCreateXcbSurfaceKHR VAR_12;

        xcb_connection_t* VAR_13 = FUNC_0(VAR_5.x11.display);
        if (!VAR_13)
        {
            FUNC_2(VAR_1,
                            "X11: Failed to retrieve XCB connection");
            return VAR_2;
        }

        VAR_12 = (PFN_vkCreateXcbSurfaceKHR)
            FUNC_4(VAR_6, "vkCreateXcbSurfaceKHR");
        if (!VAR_12)
        {
            FUNC_2(VAR_0,
                            "X11: Vulkan instance missing VK_KHR_xcb_surface extension");
            return VAR_2;
        }

        FUNC_3(&VAR_11, 0, sizeof(VAR_11));
        VAR_11.sType = VAR_3;
        VAR_11.connection = VAR_13;
        VAR_11.window = VAR_7->x11.handle;

        VAR_10 = VAR_12(VAR_6, &VAR_11, VAR_8, VAR_9);
        if (VAR_10)
        {
            FUNC_2(VAR_1,
                            "X11: Failed to create Vulkan XCB surface: %s",
                            FUNC_1(VAR_10));
        }

        return VAR_10;
    }
    else
    {
        VkResult VAR_14;
        VkXlibSurfaceCreateInfoKHR VAR_15;
        PFN_vkCreateXlibSurfaceKHR VAR_16;

        VAR_16 = (PFN_vkCreateXlibSurfaceKHR)
            FUNC_4(VAR_6, "vkCreateXlibSurfaceKHR");
        if (!VAR_16)
        {
            FUNC_2(VAR_0,
                            "X11: Vulkan instance missing VK_KHR_xlib_surface extension");
            return VAR_2;
        }

        FUNC_3(&VAR_15, 0, sizeof(VAR_15));
        VAR_15.sType = VAR_4;
        VAR_15.dpy = VAR_5.x11.display;
        VAR_15.window = VAR_7->x11.handle;

        VAR_14 = VAR_16(VAR_6, &VAR_15, VAR_8, VAR_9);
        if (VAR_14)
        {
            FUNC_2(VAR_1,
                            "X11: Failed to create Vulkan X11 surface: %s",
                            FUNC_1(VAR_14));
        }

        return VAR_14;
    }
}
