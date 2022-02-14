
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint128_t ;


 int VAR_0 ;




__attribute__((used)) static uint128_t FUNC_0(uint128_t VAR_1, int VAR_2, int VAR_3) {

    if (VAR_2 == 0)
        return VAR_1;
    if (VAR_2 > 127)
        return 0;



    int VAR_4 = (VAR_1 >> (VAR_2 - 1)) & 1;

    uint64_t VAR_5 = VAR_1 & ~(-1ul << (VAR_2 - 1));

    VAR_1 >>= VAR_2;
    switch (VAR_0) {
        case 128:
            if (!VAR_3)
                VAR_1++;
            break;
        case 130:
            if (VAR_3)
                VAR_1++;
            break;
        case 129:

            if (VAR_4) {
                if (VAR_5 != 0)
                    VAR_1++;
                else if (VAR_1 & 1)
                    VAR_1++;
            }
            break;
    }
    return VAR_1;
}
