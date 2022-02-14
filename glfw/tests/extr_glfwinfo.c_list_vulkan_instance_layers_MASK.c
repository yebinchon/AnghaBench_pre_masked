
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {char* layerName; int specVersion; char* description; } ;
typedef TYPE_1__ VkLayerProperties ;


 TYPE_1__* FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (size_t*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void)
{
    FUNC_2("Vulkan instance layers:\n");

    uint32_t VAR_0;
    FUNC_3(&VAR_0, ((void*)0));
    VkLayerProperties* VAR_1 = FUNC_0(VAR_0, sizeof(VkLayerProperties));
    FUNC_3(&VAR_0, VAR_1);

    for (uint32_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
        FUNC_2(" %s (spec version %u) \"%s\"\n",
               VAR_1[VAR_2].layerName,
               VAR_1[VAR_2].specVersion >> 22,
               VAR_1[VAR_2].description);
    }

    FUNC_1(VAR_1);
}
