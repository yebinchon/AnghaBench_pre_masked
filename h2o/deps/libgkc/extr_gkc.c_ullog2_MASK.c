
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(uint64_t VAR_0)
{
    static const uint64_t VAR_1 = 0x022fdd63cc95386dULL;

    static const uint64_t VAR_2[] = {
        0, 1, 2, 53, 3, 7, 54, 27, 4, 38, 41, 8, 34, 55, 48, 28,
        62, 5, 39, 46, 44, 42, 22, 9, 24, 35, 59, 56, 49, 18, 29, 11,
        63, 52, 6, 26, 37, 40, 33, 47, 61, 45, 43, 21, 23, 58, 17, 10,
        51, 25, 36, 32, 60, 20, 57, 16, 50, 31, 19, 15, 30, 14, 13, 12,
    };

    VAR_0 |= (VAR_0 >> 1);
    VAR_0 |= (VAR_0 >> 2);
    VAR_0 |= (VAR_0 >> 4);
    VAR_0 |= (VAR_0 >> 8);
    VAR_0 |= (VAR_0 >> 16);
    VAR_0 |= (VAR_0 >> 32);
    return (VAR_2[((VAR_0 & ~(VAR_0>>1))*VAR_1)>>58]);
}
