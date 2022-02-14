
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t VAR_0) {
    static const int VAR_1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 0};
    uint32_t VAR_2, VAR_3;
    int VAR_4 = 0;
    if (VAR_0 <= 1) {
        return 0;
    }
    VAR_2 = VAR_0 - 1;
    while (VAR_2 > 0) {
        VAR_2 >>= 1;
        VAR_4++;
    }
    if (VAR_1[VAR_4]) {
        VAR_4 = VAR_4 + VAR_1[VAR_4];
        VAR_3 = ((~((uint32_t)0)) >> (32 - VAR_4)) / VAR_0;
        VAR_2 = VAR_0 * VAR_3;
    } else {
        VAR_2 = VAR_0;
        VAR_3 = 1;
    }
    while(1) {
        uint32_t VAR_5 = FUNC_0(VAR_4);
        if (VAR_5 < VAR_2) {
            return (VAR_3 == 1) ? VAR_5 : (VAR_5 % VAR_0);
        }
    }
}
