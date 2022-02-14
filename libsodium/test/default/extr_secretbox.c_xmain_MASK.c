
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int,int ,int ) ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 unsigned int FUNC_5 () ;
 unsigned int FUNC_6 () ;
 int FUNC_7 () ;
 unsigned int FUNC_8 () ;
 unsigned int FUNC_9 () ;
 unsigned int FUNC_10 () ;
 unsigned int FUNC_11 () ;
 unsigned int FUNC_12 () ;
 unsigned int FUNC_13 () ;
 unsigned int FUNC_14 () ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_15 (scalar_t__*,scalar_t__*,int) ;
 int VAR_3 ;
 int FUNC_16 (char*,...) ;
 scalar_t__ FUNC_17 (int ,char*) ;

int
FUNC_18(void)
{
    int VAR_4;

    FUNC_1(VAR_0, VAR_2, 163, VAR_3, VAR_1);
    for (VAR_4 = 16; VAR_4 < 163; ++VAR_4) {
        FUNC_16(",0x%02x", (unsigned int) VAR_0[VAR_4]);
        if (VAR_4 % 8 == 7)
            FUNC_16("\n");
    }
    FUNC_16("\n");

    FUNC_15(VAR_0, VAR_2, 163);
    FUNC_1(VAR_0, VAR_0, 163, VAR_3, VAR_1);
    for (VAR_4 = 16; VAR_4 < 163; ++VAR_4) {
        FUNC_16(",0x%02x", (unsigned int) VAR_0[VAR_4]);
        if (VAR_4 % 8 == 7)
            FUNC_16("\n");
    }
    FUNC_16("\n");

    FUNC_0(FUNC_1(VAR_0, VAR_0, 31, VAR_3, VAR_1) == -1);
    FUNC_0(FUNC_1(VAR_0, VAR_0, 12, VAR_3, VAR_1) == -1);
    FUNC_0(FUNC_1(VAR_0, VAR_0, 1, VAR_3, VAR_1) == -1);
    FUNC_0(FUNC_1(VAR_0, VAR_0, 0, VAR_3, VAR_1) == -1);

    FUNC_0(FUNC_3() > 0U);
    FUNC_0(FUNC_6() > 0U);
    FUNC_0(FUNC_14() > 0U);
    FUNC_0(FUNC_2() > 0U);
    FUNC_0(FUNC_4() > 0U);
    FUNC_0(FUNC_5() > 0U);
    FUNC_0(FUNC_17(FUNC_7(), "xsalsa20poly1305") == 0);
    FUNC_0(FUNC_3() ==
           FUNC_9());
    FUNC_0(FUNC_6() ==
           FUNC_12());
    FUNC_0(FUNC_14() ==
           FUNC_13());
    FUNC_0(FUNC_2() ==
           FUNC_8());
    FUNC_0(FUNC_4() ==
           FUNC_10());
    FUNC_0(FUNC_5() ==
           FUNC_11());

    return 0;
}
