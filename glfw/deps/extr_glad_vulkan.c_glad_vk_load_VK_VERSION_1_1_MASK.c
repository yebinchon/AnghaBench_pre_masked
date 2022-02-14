
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFN_vkUpdateDescriptorSetWithTemplate ;
typedef scalar_t__ PFN_vkTrimCommandPool ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceQueueFamilyProperties2 ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceProperties2 ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceMemoryProperties2 ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceImageFormatProperties2 ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceFormatProperties2 ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceFeatures2 ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceExternalSemaphoreProperties ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceExternalFenceProperties ;
typedef scalar_t__ PFN_vkGetPhysicalDeviceExternalBufferProperties ;
typedef scalar_t__ PFN_vkGetImageSparseMemoryRequirements2 ;
typedef scalar_t__ PFN_vkGetImageMemoryRequirements2 ;
typedef scalar_t__ PFN_vkGetDeviceQueue2 ;
typedef scalar_t__ PFN_vkGetDeviceGroupPeerMemoryFeatures ;
typedef scalar_t__ PFN_vkGetDescriptorSetLayoutSupport ;
typedef scalar_t__ PFN_vkGetBufferMemoryRequirements2 ;
typedef scalar_t__ PFN_vkEnumeratePhysicalDeviceGroups ;
typedef scalar_t__ PFN_vkEnumerateInstanceVersion ;
typedef scalar_t__ PFN_vkDestroySamplerYcbcrConversion ;
typedef scalar_t__ PFN_vkDestroyDescriptorUpdateTemplate ;
typedef scalar_t__ PFN_vkCreateSamplerYcbcrConversion ;
typedef scalar_t__ PFN_vkCreateDescriptorUpdateTemplate ;
typedef scalar_t__ PFN_vkCmdSetDeviceMask ;
typedef scalar_t__ PFN_vkCmdDispatchBase ;
typedef scalar_t__ PFN_vkBindImageMemory2 ;
typedef scalar_t__ PFN_vkBindBufferMemory2 ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_29, void* VAR_30) {
    if(!VAR_0) return;
    VAR_1 = (PFN_vkBindBufferMemory2) VAR_29("vkBindBufferMemory2", VAR_30);
    VAR_2 = (PFN_vkBindImageMemory2) VAR_29("vkBindImageMemory2", VAR_30);
    VAR_3 = (PFN_vkCmdDispatchBase) VAR_29("vkCmdDispatchBase", VAR_30);
    VAR_4 = (PFN_vkCmdSetDeviceMask) VAR_29("vkCmdSetDeviceMask", VAR_30);
    VAR_5 = (PFN_vkCreateDescriptorUpdateTemplate) VAR_29("vkCreateDescriptorUpdateTemplate", VAR_30);
    VAR_6 = (PFN_vkCreateSamplerYcbcrConversion) VAR_29("vkCreateSamplerYcbcrConversion", VAR_30);
    VAR_7 = (PFN_vkDestroyDescriptorUpdateTemplate) VAR_29("vkDestroyDescriptorUpdateTemplate", VAR_30);
    VAR_8 = (PFN_vkDestroySamplerYcbcrConversion) VAR_29("vkDestroySamplerYcbcrConversion", VAR_30);
    VAR_9 = (PFN_vkEnumerateInstanceVersion) VAR_29("vkEnumerateInstanceVersion", VAR_30);
    VAR_10 = (PFN_vkEnumeratePhysicalDeviceGroups) VAR_29("vkEnumeratePhysicalDeviceGroups", VAR_30);
    VAR_11 = (PFN_vkGetBufferMemoryRequirements2) VAR_29("vkGetBufferMemoryRequirements2", VAR_30);
    VAR_12 = (PFN_vkGetDescriptorSetLayoutSupport) VAR_29("vkGetDescriptorSetLayoutSupport", VAR_30);
    VAR_13 = (PFN_vkGetDeviceGroupPeerMemoryFeatures) VAR_29("vkGetDeviceGroupPeerMemoryFeatures", VAR_30);
    VAR_14 = (PFN_vkGetDeviceQueue2) VAR_29("vkGetDeviceQueue2", VAR_30);
    VAR_15 = (PFN_vkGetImageMemoryRequirements2) VAR_29("vkGetImageMemoryRequirements2", VAR_30);
    VAR_16 = (PFN_vkGetImageSparseMemoryRequirements2) VAR_29("vkGetImageSparseMemoryRequirements2", VAR_30);
    VAR_17 = (PFN_vkGetPhysicalDeviceExternalBufferProperties) VAR_29("vkGetPhysicalDeviceExternalBufferProperties", VAR_30);
    VAR_18 = (PFN_vkGetPhysicalDeviceExternalFenceProperties) VAR_29("vkGetPhysicalDeviceExternalFenceProperties", VAR_30);
    VAR_19 = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) VAR_29("vkGetPhysicalDeviceExternalSemaphoreProperties", VAR_30);
    VAR_20 = (PFN_vkGetPhysicalDeviceFeatures2) VAR_29("vkGetPhysicalDeviceFeatures2", VAR_30);
    VAR_21 = (PFN_vkGetPhysicalDeviceFormatProperties2) VAR_29("vkGetPhysicalDeviceFormatProperties2", VAR_30);
    VAR_22 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) VAR_29("vkGetPhysicalDeviceImageFormatProperties2", VAR_30);
    VAR_23 = (PFN_vkGetPhysicalDeviceMemoryProperties2) VAR_29("vkGetPhysicalDeviceMemoryProperties2", VAR_30);
    VAR_24 = (PFN_vkGetPhysicalDeviceProperties2) VAR_29("vkGetPhysicalDeviceProperties2", VAR_30);
    VAR_25 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) VAR_29("vkGetPhysicalDeviceQueueFamilyProperties2", VAR_30);
    VAR_26 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) VAR_29("vkGetPhysicalDeviceSparseImageFormatProperties2", VAR_30);
    VAR_27 = (PFN_vkTrimCommandPool) VAR_29("vkTrimCommandPool", VAR_30);
    VAR_28 = (PFN_vkUpdateDescriptorSetWithTemplate) VAR_29("vkUpdateDescriptorSetWithTemplate", VAR_30);
}
