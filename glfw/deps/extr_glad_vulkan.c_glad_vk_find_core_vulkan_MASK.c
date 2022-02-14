
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ VkResult ;
struct TYPE_3__ {int apiVersion; } ;
typedef TYPE_1__ VkPhysicalDeviceProperties ;
typedef int * VkPhysicalDevice ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5( VkPhysicalDevice VAR_3) {
    int VAR_4 = 1;
    int VAR_5 = 0;
    if (VAR_3 != ((void*)0) && &FUNC_4 != ((void*)0)) {
        VkPhysicalDeviceProperties VAR_6;
        FUNC_4(VAR_3, &VAR_6);

        VAR_4 = (int) FUNC_1(VAR_6.apiVersion);
        VAR_5 = (int) FUNC_2(VAR_6.apiVersion);
    }

    VAR_0 = (VAR_4 == 1 && VAR_5 >= 0) || VAR_4 > 1;
    VAR_1 = (VAR_4 == 1 && VAR_5 >= 1) || VAR_4 > 1;

    return FUNC_0(VAR_4, VAR_5);
}
