
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t FUNC_1(int VAR_2) {
    uint32_t VAR_3;
    if (VAR_1 < VAR_2) {
        VAR_0 |= (((uint64_t)FUNC_0()) << VAR_1);
        VAR_1 += 32;
    }
    VAR_3 = VAR_0;
    VAR_0 >>= VAR_2;
    VAR_1 -= VAR_2;
    VAR_3 &= ((~((uint32_t)0)) >> (32 - VAR_2));
    return VAR_3;
}
