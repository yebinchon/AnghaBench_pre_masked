
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFN_vkGetPhysicalDeviceSurfaceSupportKHR ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceSurfacePresentModesKHR ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceSurfaceFormatsKHR ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR ;
typedef scalar_t__ PFN_vkDestroySurfaceKHR ;
typedef scalar_t__ (* GLADuserptrloadfunc ) (char*,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_6, void* VAR_7) {
    if(!VAR_0) return;
    VAR_1 = (PFN_vkDestroySurfaceKHR) VAR_6("vkDestroySurfaceKHR", VAR_7);
    VAR_2 = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR) VAR_6("vkGetPhysicalDeviceSurfaceCapabilitiesKHR", VAR_7);
    VAR_3 = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR) VAR_6("vkGetPhysicalDeviceSurfaceFormatsKHR", VAR_7);
    VAR_4 = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR) VAR_6("vkGetPhysicalDeviceSurfacePresentModesKHR", VAR_7);
    VAR_5 = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR) VAR_6("vkGetPhysicalDeviceSurfaceSupportKHR", VAR_7);
}
