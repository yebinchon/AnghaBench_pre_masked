
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ VkResult ;
typedef int * VkPhysicalDevice ;
struct TYPE_4__ {int extensionName; } ;
typedef TYPE_1__ VkExtensionProperties ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char*,int ,size_t) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *,int*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,int*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7( VkPhysicalDevice VAR_1, uint32_t *VAR_2, char ***VAR_3) {
    uint32_t VAR_4;
    uint32_t VAR_5 = 0;
    uint32_t VAR_6 = 0;
    uint32_t VAR_7;
    uint32_t VAR_8;
    char **VAR_9;
    VkExtensionProperties *VAR_10;
    VkResult VAR_11;

    if (&FUNC_6 == ((void*)0) || (VAR_1 != ((void*)0) && &FUNC_5 == ((void*)0))) {
        return 0;
    }

    VAR_11 = FUNC_6(((void*)0), &VAR_5, ((void*)0));
    if (VAR_11 != VAR_0) {
        return 0;
    }

    if (VAR_1 != ((void*)0)) {
        VAR_11 = FUNC_5(VAR_1, ((void*)0), &VAR_6, ((void*)0));
        if (VAR_11 != VAR_0) {
            return 0;
        }
    }

    VAR_8 = VAR_5 + VAR_6;
    VAR_7 = VAR_5 > VAR_6
        ? VAR_5 : VAR_6;

    VAR_10 = (VkExtensionProperties*) FUNC_2(VAR_7 * sizeof(VkExtensionProperties));
    if (VAR_10 == ((void*)0)) {
        return 0;
    }

    VAR_11 = FUNC_6(((void*)0), &VAR_5, VAR_10);
    if (VAR_11 != VAR_0) {
        FUNC_1((void*) VAR_10);
        return 0;
    }

    VAR_9 = (char**) FUNC_0(VAR_8, sizeof(char*));
    if (VAR_9 == ((void*)0)) {
        FUNC_1((void*) VAR_10);
        return 0;
    }

    for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
        VkExtensionProperties VAR_12 = VAR_10[VAR_4];

        size_t VAR_13 = FUNC_4(VAR_12.extensionName) + 1;
        VAR_9[VAR_4] = (char*) FUNC_2(VAR_13 * sizeof(char));
        FUNC_3(VAR_9[VAR_4], VAR_12.extensionName, VAR_13 * sizeof(char));
    }

    if (VAR_1 != ((void*)0)) {
        VAR_11 = FUNC_5(VAR_1, ((void*)0), &VAR_6, VAR_10);
        if (VAR_11 != VAR_0) {
            for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
                FUNC_1((void*) VAR_9[VAR_4]);
            }
            FUNC_1(VAR_9);
            return 0;
        }

        for (VAR_4 = 0; VAR_4 < VAR_6; ++VAR_4) {
            VkExtensionProperties VAR_14 = VAR_10[VAR_4];

            size_t VAR_15 = FUNC_4(VAR_14.extensionName) + 1;
            VAR_9[VAR_5 + VAR_4] = (char*) FUNC_2(VAR_15 * sizeof(char));
            FUNC_3(VAR_9[VAR_5 + VAR_4], VAR_14.extensionName, VAR_15 * sizeof(char));
        }
    }

    FUNC_1((void*) VAR_10);

    *VAR_2 = VAR_8;
    *VAR_3 = VAR_9;

    return 1;
}
