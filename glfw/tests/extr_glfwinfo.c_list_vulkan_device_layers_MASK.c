
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int VkPhysicalDevice ;
struct TYPE_5__ {char* layerName; int specVersion; char* description; } ;
typedef TYPE_1__ VkLayerProperties ;
typedef int VkInstance ;


 TYPE_1__* FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,size_t*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(VkInstance VAR_0, VkPhysicalDevice VAR_1)
{
    FUNC_2("Vulkan device layers:\n");

    uint32_t VAR_2;
    FUNC_3(VAR_1, &VAR_2, ((void*)0));
    VkLayerProperties* VAR_3 = FUNC_0(VAR_2, sizeof(VkLayerProperties));
    FUNC_3(VAR_1, &VAR_2, VAR_3);

    for (uint32_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
        FUNC_2(" %s (spec version %u) \"%s\"\n",
               VAR_3[VAR_4].layerName,
               VAR_3[VAR_4].specVersion >> 22,
               VAR_3[VAR_4].description);
    }

    FUNC_1(VAR_3);
}
