
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_9 (unsigned char*,int ,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (unsigned char*) ;
 scalar_t__ FUNC_12 (int) ;

int
FUNC_13(void)
{
    unsigned char *VAR_7;
    unsigned char *VAR_8;
    unsigned char *VAR_9;
    unsigned char *VAR_10;
    unsigned char *VAR_11;
    unsigned char *VAR_12;
    size_t VAR_13 = 64 * 256 * 256;
    size_t VAR_14 = 0;
    int VAR_15;

    VAR_14 = 0;
    VAR_7 = (unsigned char *) FUNC_12(32);
    FUNC_9(VAR_7, VAR_2, 32);
    VAR_9 = (unsigned char *) FUNC_12(8);
    FUNC_9(VAR_9, VAR_1, 8);
    VAR_8 = (unsigned char *) FUNC_12(16);
    FUNC_9(VAR_8, VAR_0, 16);
    VAR_10 = (unsigned char *) FUNC_12(16);
    VAR_11 = (unsigned char *) FUNC_12(VAR_13);
    VAR_12 = (unsigned char *) FUNC_12(32);

    for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
        VAR_10[VAR_15] = VAR_9[VAR_15];
    }
    for (; VAR_15 < 16; VAR_15++) {
        VAR_10[VAR_15] = 0;
    }
    do {
        do {
            FUNC_1(VAR_11 + VAR_14, VAR_10, VAR_7, VAR_8);
            VAR_14 += 64;
            VAR_10[8]++;
        } while (VAR_10[8] != 0);
        VAR_10[9]++;
    } while (VAR_10[9] != 0);

    FUNC_8(VAR_12, VAR_11, VAR_13);

    for (VAR_15 = 0; VAR_15 < 32; ++VAR_15) {
        FUNC_10("%02x", VAR_12[VAR_15]);
    }
    FUNC_10("\n");


    VAR_14 = 0;
    do {
        do {
            FUNC_2(VAR_11 + VAR_14, VAR_10, VAR_7, VAR_8);
            VAR_14 += 64;
            VAR_10[8]++;
        } while (VAR_10[8] != 0);
        VAR_10[9]++;
    } while (VAR_10[9] != 0);

    FUNC_8(VAR_12, VAR_11, VAR_13);

    for (VAR_15 = 0; VAR_15 < 32; ++VAR_15) {
        FUNC_10("%02x", VAR_12[VAR_15]);
    }
    FUNC_10("\n");

    VAR_14 = 0;
    do {
        do {
            FUNC_3(VAR_11 + VAR_14, VAR_10, VAR_7, VAR_8);
            VAR_14 += 64;
            VAR_10[8]++;
        } while (VAR_10[8] != 0);
        VAR_10[9]++;
    } while (VAR_10[9] != 0);

    FUNC_8(VAR_12, VAR_11, VAR_13);

    for (VAR_15 = 0; VAR_15 < 32; ++VAR_15) {
        FUNC_10("%02x", VAR_12[VAR_15]);
    }
    FUNC_10("\n");





    FUNC_11(VAR_12);
    FUNC_11(VAR_11);
    FUNC_11(VAR_10);
    FUNC_11(VAR_8);
    FUNC_11(VAR_9);
    FUNC_11(VAR_7);

    FUNC_0(FUNC_7() == VAR_6);
    FUNC_0(FUNC_5() == VAR_4);
    FUNC_0(FUNC_6() == VAR_5);
    FUNC_0(FUNC_4() == VAR_3);

    return 0;
}
