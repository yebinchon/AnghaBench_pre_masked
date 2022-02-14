
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VkPhysicalDevice ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,char**) ;
 int FUNC_1 (int ,int *,char***) ;
 void* FUNC_2 (char*,int ,char**) ;

__attribute__((used)) static int FUNC_3( VkPhysicalDevice VAR_3) {
    uint32_t VAR_4 = 0;
    char **VAR_5 = ((void*)0);
    if (!FUNC_1(VAR_3, &VAR_4, &VAR_5)) return 0;

    VAR_0 = FUNC_2("VK_EXT_debug_report", VAR_4, VAR_5);
    VAR_1 = FUNC_2("VK_KHR_surface", VAR_4, VAR_5);
    VAR_2 = FUNC_2("VK_KHR_swapchain", VAR_4, VAR_5);

    FUNC_0(VAR_4, VAR_5);

    return 1;
}
