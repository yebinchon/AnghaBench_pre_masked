
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 scalar_t__* FUNC_0 (scalar_t__*,size_t,int,int) ;

__attribute__((used)) static uint8_t *
FUNC_1(uint8_t *VAR_0, size_t VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3;) {
        uint8_t *VAR_5;
        uint32_t VAR_6 = 0, VAR_7 = 0;

        do {
            VAR_6 |= (uint32_t) VAR_2[VAR_4++] << VAR_7;
            VAR_7 += 8;
        } while (VAR_7 < 24 && VAR_4 < VAR_3);

        VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_6, VAR_7);
        if (!VAR_5) {
            return ((void*)0);
        }
        VAR_1 -= VAR_5 - VAR_0;
        VAR_0 = VAR_5;
    }
    return VAR_0;
}
