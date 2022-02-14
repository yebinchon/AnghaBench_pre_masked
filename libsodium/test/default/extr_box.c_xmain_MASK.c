
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (scalar_t__*,int ,int,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,int ,int,int ,unsigned char*) ;
 int FUNC_3 (unsigned char*,int ,int ) ;
 unsigned int FUNC_4 () ;
 unsigned int FUNC_5 () ;
 unsigned int FUNC_6 () ;
 unsigned int FUNC_7 () ;
 unsigned int FUNC_8 () ;
 unsigned int FUNC_9 () ;
 unsigned int FUNC_10 () ;
 unsigned int FUNC_11 () ;
 unsigned int FUNC_12 () ;
 unsigned int FUNC_13 () ;
 unsigned int FUNC_14 () ;
 unsigned int FUNC_15 () ;
 unsigned int FUNC_16 () ;
 unsigned int FUNC_17 () ;
 int FUNC_18 () ;
 unsigned int FUNC_19 () ;
 unsigned int FUNC_20 () ;
 unsigned int FUNC_21 () ;
 unsigned int FUNC_22 () ;
 int VAR_4 ;
 int FUNC_23 (scalar_t__*,int ,int) ;
 int VAR_5 ;
 int FUNC_24 (char*,...) ;
 int VAR_6 ;
 scalar_t__ FUNC_25 (int ,char*) ;

int
FUNC_26(void)
{
    unsigned char VAR_7[VAR_3];
    int VAR_8;
    int VAR_9;

    VAR_9 = FUNC_1(VAR_2, VAR_4, 163, VAR_5, VAR_1, VAR_0);
    FUNC_0(VAR_9 == 0);
    for (VAR_8 = 16; VAR_8 < 163; ++VAR_8) {
        FUNC_24(",0x%02x", (unsigned int) VAR_2[VAR_8]);
        if (VAR_8 % 8 == 7)
            FUNC_24("\n");
    }
    FUNC_24("\n");

    VAR_9 = FUNC_1(VAR_2, VAR_4, 163, VAR_5, VAR_6, VAR_0);
    FUNC_0(VAR_9 == -1);

    FUNC_23(VAR_2, 0, sizeof VAR_2);

    VAR_9 = FUNC_3(VAR_7, VAR_1, VAR_0);
    FUNC_0(VAR_9 == 0);
    FUNC_2(VAR_2, VAR_4, 163, VAR_5, VAR_7);
    for (VAR_8 = 16; VAR_8 < 163; ++VAR_8) {
        FUNC_24(",0x%02x", (unsigned int) VAR_2[VAR_8]);
        if (VAR_8 % 8 == 7)
            FUNC_24("\n");
    }
    FUNC_24("\n");

    VAR_9 = FUNC_3(VAR_7, VAR_6, VAR_0);
    FUNC_0(VAR_9 == -1);

    FUNC_0(FUNC_21() > 0U);
    FUNC_0(FUNC_19() > 0U);
    FUNC_0(FUNC_20() > 0U);
    FUNC_0(FUNC_4() > 0U);
    FUNC_0(FUNC_17() > 0U);
    FUNC_0(FUNC_22() > 0U);
    FUNC_0(FUNC_5() > 0U);
    FUNC_0(FUNC_15() > 0U);
    FUNC_0(FUNC_16() > 0U);
    FUNC_0(FUNC_25(FUNC_18(), "curve25519xsalsa20poly1305") == 0);
    FUNC_0(FUNC_13() ==
           FUNC_21());
    FUNC_0(FUNC_11() ==
           FUNC_19());
    FUNC_0(FUNC_12() ==
           FUNC_20());
    FUNC_0(FUNC_6() ==
           FUNC_4());
    FUNC_0(FUNC_10() ==
           FUNC_17());
    FUNC_0(FUNC_14() ==
           FUNC_22());
    FUNC_0(FUNC_7() ==
           FUNC_5());
    FUNC_0(FUNC_8() ==
           FUNC_15());
    FUNC_0(FUNC_9() ==
           FUNC_16());

    return 0;
}
