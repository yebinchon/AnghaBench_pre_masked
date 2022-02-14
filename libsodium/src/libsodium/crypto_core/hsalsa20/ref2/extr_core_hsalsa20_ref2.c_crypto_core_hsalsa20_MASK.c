
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (int) ;

int
FUNC_4(unsigned char *VAR_1,
                     const unsigned char *VAR_2,
                     const unsigned char *VAR_3,
                     const unsigned char *VAR_4)
{
    uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
             VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21;

    if (VAR_4 == ((void*)0)) {
        VAR_5 = FUNC_3(0x61707865);
        VAR_10 = FUNC_3(0x3320646e);
        VAR_15 = FUNC_3(0x79622d32);
        VAR_20 = FUNC_3(0x6b206574);
    } else {
        VAR_5 = FUNC_0(VAR_4 + 0);
        VAR_10 = FUNC_0(VAR_4 + 4);
        VAR_15 = FUNC_0(VAR_4 + 8);
        VAR_20 = FUNC_0(VAR_4 + 12);
    }
    VAR_6 = FUNC_0(VAR_3 + 0);
    VAR_7 = FUNC_0(VAR_3 + 4);
    VAR_8 = FUNC_0(VAR_3 + 8);
    VAR_9 = FUNC_0(VAR_3 + 12);
    VAR_16 = FUNC_0(VAR_3 + 16);
    VAR_17 = FUNC_0(VAR_3 + 20);
    VAR_18 = FUNC_0(VAR_3 + 24);
    VAR_19 = FUNC_0(VAR_3 + 28);
    VAR_11 = FUNC_0(VAR_2 + 0);
    VAR_12 = FUNC_0(VAR_2 + 4);
    VAR_13 = FUNC_0(VAR_2 + 8);
    VAR_14 = FUNC_0(VAR_2 + 12);

    for (VAR_21 = VAR_0; VAR_21 > 0; VAR_21 -= 2) {
        VAR_9 ^= FUNC_1(VAR_5 + VAR_17, 7);
        VAR_13 ^= FUNC_1(VAR_9 + VAR_5, 9);
        VAR_17 ^= FUNC_1(VAR_13 + VAR_9, 13);
        VAR_5 ^= FUNC_1(VAR_17 + VAR_13, 18);
        VAR_14 ^= FUNC_1(VAR_10 + VAR_6, 7);
        VAR_18 ^= FUNC_1(VAR_14 + VAR_10, 9);
        VAR_6 ^= FUNC_1(VAR_18 + VAR_14, 13);
        VAR_10 ^= FUNC_1(VAR_6 + VAR_18, 18);
        VAR_19 ^= FUNC_1(VAR_15 + VAR_11, 7);
        VAR_7 ^= FUNC_1(VAR_19 + VAR_15, 9);
        VAR_11 ^= FUNC_1(VAR_7 + VAR_19, 13);
        VAR_15 ^= FUNC_1(VAR_11 + VAR_7, 18);
        VAR_8 ^= FUNC_1(VAR_20 + VAR_16, 7);
        VAR_12 ^= FUNC_1(VAR_8 + VAR_20, 9);
        VAR_16 ^= FUNC_1(VAR_12 + VAR_8, 13);
        VAR_20 ^= FUNC_1(VAR_16 + VAR_12, 18);
        VAR_6 ^= FUNC_1(VAR_5 + VAR_8, 7);
        VAR_7 ^= FUNC_1(VAR_6 + VAR_5, 9);
        VAR_8 ^= FUNC_1(VAR_7 + VAR_6, 13);
        VAR_5 ^= FUNC_1(VAR_8 + VAR_7, 18);
        VAR_11 ^= FUNC_1(VAR_10 + VAR_9, 7);
        VAR_12 ^= FUNC_1(VAR_11 + VAR_10, 9);
        VAR_9 ^= FUNC_1(VAR_12 + VAR_11, 13);
        VAR_10 ^= FUNC_1(VAR_9 + VAR_12, 18);
        VAR_16 ^= FUNC_1(VAR_15 + VAR_14, 7);
        VAR_13 ^= FUNC_1(VAR_16 + VAR_15, 9);
        VAR_14 ^= FUNC_1(VAR_13 + VAR_16, 13);
        VAR_15 ^= FUNC_1(VAR_14 + VAR_13, 18);
        VAR_17 ^= FUNC_1(VAR_20 + VAR_19, 7);
        VAR_18 ^= FUNC_1(VAR_17 + VAR_20, 9);
        VAR_19 ^= FUNC_1(VAR_18 + VAR_17, 13);
        VAR_20 ^= FUNC_1(VAR_19 + VAR_18, 18);
    }

    FUNC_2(VAR_1 + 0, VAR_5);
    FUNC_2(VAR_1 + 4, VAR_10);
    FUNC_2(VAR_1 + 8, VAR_15);
    FUNC_2(VAR_1 + 12, VAR_20);
    FUNC_2(VAR_1 + 16, VAR_11);
    FUNC_2(VAR_1 + 20, VAR_12);
    FUNC_2(VAR_1 + 24, VAR_13);
    FUNC_2(VAR_1 + 28, VAR_14);

    return 0;
}
