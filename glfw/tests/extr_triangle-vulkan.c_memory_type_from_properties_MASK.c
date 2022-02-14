
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* memoryTypes; } ;
struct demo {TYPE_2__ memory_properties; } ;
typedef int VkFlags ;
struct TYPE_3__ {int propertyFlags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct demo *VAR_1, uint32_t VAR_2,
                                        VkFlags VAR_3,
                                        uint32_t *VAR_4) {
    uint32_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        if ((VAR_2 & 1) == 1) {

            if ((VAR_1->memory_properties.memoryTypes[VAR_5].propertyFlags &
                 VAR_3) == VAR_3) {
                *VAR_4 = VAR_5;
                return 1;
            }
        }
        VAR_2 >>= 1;
    }

    return 0;
}
