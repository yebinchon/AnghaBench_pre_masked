
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ client; } ;
struct TYPE_8__ {TYPE_1__ context; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef scalar_t__ VkSurfaceKHR ;
typedef int VkResult ;
typedef scalar_t__ VkInstance ;
typedef int VkAllocationCallbacks ;
struct TYPE_7__ {int * extensions; } ;
struct TYPE_9__ {TYPE_2__ vk; } ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,TYPE_3__*,int const*,scalar_t__*) ;
 int FUNC_4 (int) ;

VkResult FUNC_5(VkInstance VAR_9,
                                         GLFWwindow* VAR_10,
                                         const VkAllocationCallbacks* VAR_11,
                                         VkSurfaceKHR* VAR_12)
{
    _GLFWwindow* VAR_13 = (_GLFWwindow*) VAR_10;
    FUNC_4(VAR_9 != VAR_6);
    FUNC_4(VAR_13 != ((void*)0));
    FUNC_4(VAR_12 != ((void*)0));

    *VAR_12 = VAR_6;

    FUNC_0(VAR_4);

    if (!FUNC_1(VAR_7))
        return VAR_4;

    if (!VAR_8.vk.extensions[0])
    {
        FUNC_2(VAR_0,
                        "Vulkan: Window surface creation extensions not found");
        return VAR_3;
    }

    if (VAR_13->context.client != VAR_2)
    {
        FUNC_2(VAR_1,
                        "Vulkan: Window surface creation requires the window to have the client API set to GLFW_NO_API");
        return VAR_5;
    }

    return FUNC_3(VAR_9, VAR_13, VAR_11, VAR_12);
}
