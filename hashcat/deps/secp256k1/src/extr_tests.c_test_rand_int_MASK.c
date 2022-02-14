
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(uint32_t VAR_0, uint32_t VAR_1) {

    int VAR_2 = (VAR_1 * 2073) / 100;
    int VAR_3;
    uint64_t VAR_4 = 0;
    FUNC_0((VAR_0 % VAR_1) == 0);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        uint32_t VAR_5 = FUNC_1(VAR_0);
        FUNC_0(VAR_5 < VAR_0);
        VAR_5 = VAR_5 % VAR_1;
        VAR_4 |= (((uint64_t)1) << VAR_5);
    }

    FUNC_0(((~VAR_4) << (64 - VAR_1)) == 0);
}
