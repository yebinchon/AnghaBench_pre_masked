
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VkPhysicalDeviceType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static const char* FUNC_0(VkPhysicalDeviceType VAR_5)
{
    if (VAR_5 == VAR_3)
        return "other";
    else if (VAR_5 == VAR_2)
        return "integrated GPU";
    else if (VAR_5 == VAR_1)
        return "discrete GPU";
    else if (VAR_5 == VAR_4)
        return "virtual GPU";
    else if (VAR_5 == VAR_0)
        return "CPU";

    return "unknown";
}
