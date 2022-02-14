
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (scalar_t__*,int const) ;

__attribute__((used)) static const uint8_t *
FUNC_1(uint32_t *VAR_0, uint32_t VAR_1, const uint8_t *VAR_2)
{
    uint32_t VAR_3;
    uint32_t VAR_4;

    VAR_4 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += 6) {
        uint32_t VAR_5;
        if (FUNC_0(&VAR_5, *VAR_2)) {
            *VAR_0 = 0;
            return ((void*)0);
        }
        VAR_2++;
        VAR_4 |= VAR_5 << VAR_3;
    }
    *VAR_0 = VAR_4;

    return VAR_2;
}
