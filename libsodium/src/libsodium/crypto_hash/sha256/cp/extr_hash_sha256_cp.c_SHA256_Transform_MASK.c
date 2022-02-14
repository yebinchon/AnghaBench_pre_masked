
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (scalar_t__*,int,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int,int) ;
 int FUNC_2 (scalar_t__*,int const*,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_4(uint32_t VAR_0[8], const uint8_t VAR_1[64], uint32_t VAR_2[64],
                 uint32_t VAR_3[8])
{
    int VAR_4;

    FUNC_2(VAR_2, VAR_1, 64);
    FUNC_3(VAR_3, VAR_0, 32);
    for (VAR_4 = 0; VAR_4 < 64; VAR_4 += 16) {
        FUNC_1(VAR_3, VAR_2, 0, VAR_4);
        FUNC_1(VAR_3, VAR_2, 1, VAR_4);
        FUNC_1(VAR_3, VAR_2, 2, VAR_4);
        FUNC_1(VAR_3, VAR_2, 3, VAR_4);
        FUNC_1(VAR_3, VAR_2, 4, VAR_4);
        FUNC_1(VAR_3, VAR_2, 5, VAR_4);
        FUNC_1(VAR_3, VAR_2, 6, VAR_4);
        FUNC_1(VAR_3, VAR_2, 7, VAR_4);
        FUNC_1(VAR_3, VAR_2, 8, VAR_4);
        FUNC_1(VAR_3, VAR_2, 9, VAR_4);
        FUNC_1(VAR_3, VAR_2, 10, VAR_4);
        FUNC_1(VAR_3, VAR_2, 11, VAR_4);
        FUNC_1(VAR_3, VAR_2, 12, VAR_4);
        FUNC_1(VAR_3, VAR_2, 13, VAR_4);
        FUNC_1(VAR_3, VAR_2, 14, VAR_4);
        FUNC_1(VAR_3, VAR_2, 15, VAR_4);
        if (VAR_4 == 48) {
            break;
        }
        FUNC_0(VAR_2, 0, VAR_4);
        FUNC_0(VAR_2, 1, VAR_4);
        FUNC_0(VAR_2, 2, VAR_4);
        FUNC_0(VAR_2, 3, VAR_4);
        FUNC_0(VAR_2, 4, VAR_4);
        FUNC_0(VAR_2, 5, VAR_4);
        FUNC_0(VAR_2, 6, VAR_4);
        FUNC_0(VAR_2, 7, VAR_4);
        FUNC_0(VAR_2, 8, VAR_4);
        FUNC_0(VAR_2, 9, VAR_4);
        FUNC_0(VAR_2, 10, VAR_4);
        FUNC_0(VAR_2, 11, VAR_4);
        FUNC_0(VAR_2, 12, VAR_4);
        FUNC_0(VAR_2, 13, VAR_4);
        FUNC_0(VAR_2, 14, VAR_4);
        FUNC_0(VAR_2, 15, VAR_4);
    }
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        VAR_0[VAR_4] += VAR_3[VAR_4];
    }
}
