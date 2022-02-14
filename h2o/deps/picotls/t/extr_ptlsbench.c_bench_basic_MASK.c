
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(uint64_t *VAR_0)
{
    uint64_t VAR_1 = FUNC_0();
    uint32_t VAR_2 = (uint32_t)((*VAR_0)&0xFFFFFFFF);
    uint32_t VAR_3 = (uint32_t)((*VAR_0)>>32);




    for (unsigned int VAR_4 = 0; VAR_4 < 10000000; VAR_4++) {
        uint32_t VAR_5 = (VAR_2 >> 3)|(VAR_2 << 29);
        VAR_5 += VAR_2;
        VAR_5 ^= VAR_3;
        VAR_3 = VAR_2;
        VAR_2 = VAR_5;
    }
    *VAR_0 = (((uint64_t) VAR_3)<<32)|VAR_2;

    return (int)(FUNC_0() - VAR_1);
}
