
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ size; int * data; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static uint8_t FUNC_0(void)
{
    if (VAR_0.size == 0) {
        return 0;
    }
    uint8_t VAR_1 = *VAR_0.data;
    --VAR_0.size;
    ++VAR_0.data;
    return VAR_1;
}
