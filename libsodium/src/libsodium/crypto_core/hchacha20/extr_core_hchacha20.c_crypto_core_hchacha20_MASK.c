
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (unsigned char*,int) ;

int
FUNC_3(unsigned char *VAR_0, const unsigned char *VAR_1,
                      const unsigned char *VAR_2, const unsigned char *VAR_3)
{
    int VAR_4;
    uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    uint32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

    if (VAR_3 == ((void*)0)) {
        VAR_5 = 0x61707865;
        VAR_6 = 0x3320646e;
        VAR_7 = 0x79622d32;
        VAR_8 = 0x6b206574;
    } else {
        VAR_5 = FUNC_0(VAR_3 + 0);
        VAR_6 = FUNC_0(VAR_3 + 4);
        VAR_7 = FUNC_0(VAR_3 + 8);
        VAR_8 = FUNC_0(VAR_3 + 12);
    }
    VAR_9 = FUNC_0(VAR_2 + 0);
    VAR_10 = FUNC_0(VAR_2 + 4);
    VAR_11 = FUNC_0(VAR_2 + 8);
    VAR_12 = FUNC_0(VAR_2 + 12);
    VAR_13 = FUNC_0(VAR_2 + 16);
    VAR_14 = FUNC_0(VAR_2 + 20);
    VAR_15 = FUNC_0(VAR_2 + 24);
    VAR_16 = FUNC_0(VAR_2 + 28);
    VAR_17 = FUNC_0(VAR_1 + 0);
    VAR_18 = FUNC_0(VAR_1 + 4);
    VAR_19 = FUNC_0(VAR_1 + 8);
    VAR_20 = FUNC_0(VAR_1 + 12);

    for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
        FUNC_1(VAR_5, VAR_9, VAR_13, VAR_17);
        FUNC_1(VAR_6, VAR_10, VAR_14, VAR_18);
        FUNC_1(VAR_7, VAR_11, VAR_15, VAR_19);
        FUNC_1(VAR_8, VAR_12, VAR_16, VAR_20);
        FUNC_1(VAR_5, VAR_10, VAR_15, VAR_20);
        FUNC_1(VAR_6, VAR_11, VAR_16, VAR_17);
        FUNC_1(VAR_7, VAR_12, VAR_13, VAR_18);
        FUNC_1(VAR_8, VAR_9, VAR_14, VAR_19);
    }

    FUNC_2(VAR_0 + 0, VAR_5);
    FUNC_2(VAR_0 + 4, VAR_6);
    FUNC_2(VAR_0 + 8, VAR_7);
    FUNC_2(VAR_0 + 12, VAR_8);
    FUNC_2(VAR_0 + 16, VAR_17);
    FUNC_2(VAR_0 + 20, VAR_18);
    FUNC_2(VAR_0 + 24, VAR_19);
    FUNC_2(VAR_0 + 28, VAR_20);

    return 0;
}
