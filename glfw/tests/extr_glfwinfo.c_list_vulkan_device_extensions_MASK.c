
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int VkPhysicalDevice ;
typedef int VkInstance ;
struct TYPE_5__ {char* extensionName; int specVersion; } ;
typedef TYPE_1__ VkExtensionProperties ;


 TYPE_1__* FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int *,size_t*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(VkInstance VAR_0, VkPhysicalDevice VAR_1)
{
    FUNC_2("Vulkan device extensions:\n");

    uint32_t VAR_2;
    FUNC_3(VAR_1, ((void*)0), &VAR_2, ((void*)0));
    VkExtensionProperties* VAR_3 = FUNC_0(VAR_2, sizeof(VkExtensionProperties));
    FUNC_3(VAR_1, ((void*)0), &VAR_2, VAR_3);

    for (uint32_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        FUNC_2(" %s (spec version %u)\n", VAR_3[VAR_4].extensionName, VAR_3[VAR_4].specVersion);

    FUNC_1(VAR_3);
}
