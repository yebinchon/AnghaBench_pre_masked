
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {char* extensionName; int specVersion; } ;
typedef TYPE_1__ VkExtensionProperties ;


 TYPE_1__* FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,size_t*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void)
{
    FUNC_2("Vulkan instance extensions:\n");

    uint32_t VAR_0;
    FUNC_3(((void*)0), &VAR_0, ((void*)0));
    VkExtensionProperties* VAR_1 = FUNC_0(VAR_0, sizeof(VkExtensionProperties));
    FUNC_3(((void*)0), &VAR_0, VAR_1);

    for (uint32_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        FUNC_2(" %s (spec version %u)\n", VAR_1[VAR_2].extensionName, VAR_1[VAR_2].specVersion);

    FUNC_1(VAR_1);
}
