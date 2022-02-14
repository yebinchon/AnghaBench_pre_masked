
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ VkPhysicalDevice ;
typedef scalar_t__ VkInstance ;
struct TYPE_3__ {int * extensions; } ;
struct TYPE_4__ {TYPE_1__ vk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int) ;

int FUNC_5(VkInstance VAR_5,
                                                     VkPhysicalDevice VAR_6,
                                                     uint32_t VAR_7)
{
    FUNC_4(VAR_5 != VAR_2);
    FUNC_4(VAR_6 != VAR_2);

    FUNC_0(VAR_1);

    if (!FUNC_1(VAR_3))
        return VAR_1;

    if (!VAR_4.vk.extensions[0])
    {
        FUNC_2(VAR_0,
                        "Vulkan: Window surface creation extensions not found");
        return VAR_1;
    }

    return FUNC_3(VAR_5,
                                                             VAR_6,
                                                             VAR_7);
}
