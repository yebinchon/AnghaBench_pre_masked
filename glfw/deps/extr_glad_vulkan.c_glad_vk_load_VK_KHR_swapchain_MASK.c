
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFN_vkQueuePresentKHR ;
typedef scalar_t__ PFN_vkGetSwapchainImagesKHR ;
typedef scalar_t__ PFN_vkGetPhysicalDevicePresentRectanglesKHR ;
typedef scalar_t__ PFN_vkGetDeviceGroupSurfacePresentModesKHR ;
typedef scalar_t__ PFN_vkGetDeviceGroupPresentCapabilitiesKHR ;
typedef scalar_t__ PFN_vkDestroySwapchainKHR ;
typedef scalar_t__ PFN_vkCreateSwapchainKHR ;
typedef scalar_t__ PFN_vkAcquireNextImageKHR ;
typedef scalar_t__ PFN_vkAcquireNextImage2KHR ;
typedef scalar_t__ (* GLADuserptrloadfunc ) (char*,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_10, void* VAR_11) {
    if(!VAR_0) return;
    VAR_1 = (PFN_vkAcquireNextImage2KHR) VAR_10("vkAcquireNextImage2KHR", VAR_11);
    VAR_2 = (PFN_vkAcquireNextImageKHR) VAR_10("vkAcquireNextImageKHR", VAR_11);
    VAR_3 = (PFN_vkCreateSwapchainKHR) VAR_10("vkCreateSwapchainKHR", VAR_11);
    VAR_4 = (PFN_vkDestroySwapchainKHR) VAR_10("vkDestroySwapchainKHR", VAR_11);
    VAR_5 = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) VAR_10("vkGetDeviceGroupPresentCapabilitiesKHR", VAR_11);
    VAR_6 = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) VAR_10("vkGetDeviceGroupSurfacePresentModesKHR", VAR_11);
    VAR_7 = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) VAR_10("vkGetPhysicalDevicePresentRectanglesKHR", VAR_11);
    VAR_8 = (PFN_vkGetSwapchainImagesKHR) VAR_10("vkGetSwapchainImagesKHR", VAR_11);
    VAR_9 = (PFN_vkQueuePresentKHR) VAR_10("vkQueuePresentKHR", VAR_11);
}
