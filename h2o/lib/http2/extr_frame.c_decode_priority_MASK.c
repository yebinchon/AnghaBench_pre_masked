
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int exclusive; int dependency; scalar_t__ weight; } ;
typedef TYPE_1__ h2o_http2_priority_t ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static const uint8_t *FUNC_1(h2o_http2_priority_t *VAR_0, const uint8_t *VAR_1)
{
    uint32_t VAR_2 = FUNC_0(VAR_1);
    VAR_1 += 4;
    VAR_0->exclusive = VAR_2 >> 31;
    VAR_0->dependency = VAR_2 & 0x7fffffff;
    VAR_0->weight = (uint16_t)*VAR_1++ + 1;
    return VAR_1;
}
