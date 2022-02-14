
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crypto_auth_hmacsha512_state ;
typedef int crypto_auth_hmacsha512256_state ;
typedef int crypto_auth_hmacsha256_state ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int,int ) ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int *,int ,int) ;
 unsigned int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,scalar_t__*,unsigned int) ;
 unsigned int FUNC_9 () ;
 int FUNC_10 (int *,scalar_t__*) ;
 int FUNC_11 (int *,int ,int) ;
 unsigned int FUNC_12 () ;
 unsigned int FUNC_13 () ;
 int FUNC_14 (int *,scalar_t__*,unsigned int) ;
 unsigned int FUNC_15 () ;
 int FUNC_16 (int *,scalar_t__*) ;
 int FUNC_17 (int *,int ,int) ;
 unsigned int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (int *,scalar_t__*,unsigned int) ;
 unsigned int FUNC_21 () ;
 int FUNC_22 () ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_23 (scalar_t__*,int ,int) ;
 int FUNC_24 (char*,...) ;
 scalar_t__ FUNC_25 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_26 (int ,char*) ;

int
FUNC_27(void)
{
    crypto_auth_hmacsha512_state VAR_7;
    crypto_auth_hmacsha256_state VAR_8;
    crypto_auth_hmacsha512256_state VAR_9;
    size_t VAR_10;

    FUNC_0(FUNC_19() ==
           sizeof(crypto_auth_hmacsha512_state));
    FUNC_1(VAR_0, VAR_3, sizeof VAR_3 - 1U, VAR_5);
    for (VAR_10 = 0; VAR_10 < sizeof VAR_0; ++VAR_10) {
        FUNC_24(",0x%02x", (unsigned int) VAR_0[VAR_10]);
        if (VAR_10 % 8 == 7)
            FUNC_24("\n");
    }
    FUNC_24("\n");

    FUNC_17(&VAR_7, VAR_5, sizeof VAR_5);
    FUNC_20(&VAR_7, VAR_3, 1U);
    FUNC_20(&VAR_7, VAR_3, sizeof VAR_3 - 2U);
    FUNC_16(&VAR_7, VAR_1);
    for (VAR_10 = 0; VAR_10 < sizeof VAR_1; ++VAR_10) {
        FUNC_24(",0x%02x", (unsigned int) VAR_1[VAR_10]);
        if (VAR_10 % 8 == 7)
            FUNC_24("\n");
    }
    FUNC_24("\n");

    FUNC_17(&VAR_7, VAR_6, sizeof VAR_6);
    FUNC_20(&VAR_7, VAR_3, 1U);
    FUNC_20(&VAR_7, VAR_3, sizeof VAR_3 - 2U);
    FUNC_16(&VAR_7, VAR_1);
    for (VAR_10 = 0; VAR_10 < sizeof VAR_1; ++VAR_10) {
        FUNC_24(",0x%02x", (unsigned int) VAR_1[VAR_10]);
        if (VAR_10 % 8 == 7)
            FUNC_24("\n");
    }

    FUNC_23(VAR_1, 0, sizeof VAR_1);
    FUNC_5(&VAR_8, VAR_6, sizeof VAR_6);
    FUNC_8(&VAR_8, VAR_4, 0U);
    FUNC_8(&VAR_8, VAR_3, 1U);
    FUNC_8(&VAR_8, VAR_3, sizeof VAR_3 - 2U);
    FUNC_4(&VAR_8, VAR_1);
    for (VAR_10 = 0; VAR_10 < sizeof VAR_1; ++VAR_10) {
        FUNC_24(",0x%02x", (unsigned int) VAR_1[VAR_10]);
        if (VAR_10 % 8 == 7)
            FUNC_24("\n");
    }


    FUNC_23(VAR_1, 0, sizeof VAR_1);
    FUNC_17(&VAR_7, VAR_5, sizeof VAR_5);
    FUNC_16(&VAR_7, VAR_1);

    FUNC_23(VAR_2, 0, sizeof VAR_2);
    FUNC_17(&VAR_7, VAR_5, sizeof VAR_5);
    FUNC_20(&VAR_7, VAR_1, 0U);
    FUNC_16(&VAR_7, VAR_2);
    FUNC_0(FUNC_25(VAR_1, VAR_2, sizeof VAR_1) == 0);

    FUNC_23(VAR_2, 0, sizeof VAR_2);
    FUNC_17(&VAR_7, VAR_5, sizeof VAR_5);
    FUNC_20(&VAR_7, VAR_4, 0U);
    FUNC_16(&VAR_7, VAR_2);
    FUNC_0(FUNC_25(VAR_1, VAR_2, sizeof VAR_1) == 0);


    FUNC_23(VAR_1, 0, sizeof VAR_1);
    FUNC_11(&VAR_9, VAR_5, sizeof VAR_5);
    FUNC_10(&VAR_9, VAR_1);

    FUNC_23(VAR_2, 0, sizeof VAR_2);
    FUNC_11(&VAR_9, VAR_5, sizeof VAR_5);
    FUNC_14(&VAR_9, VAR_1, 0U);
    FUNC_10(&VAR_9, VAR_2);
    FUNC_0(FUNC_25(VAR_1, VAR_2, sizeof VAR_1) == 0);

    FUNC_23(VAR_2, 0, sizeof VAR_2);
    FUNC_11(&VAR_9, VAR_5, sizeof VAR_5);
    FUNC_14(&VAR_9, VAR_4, 0U);
    FUNC_10(&VAR_9, VAR_2);
    FUNC_0(FUNC_25(VAR_1, VAR_2, sizeof VAR_1) == 0);



    FUNC_23(VAR_1, 0, sizeof VAR_1);
    FUNC_5(&VAR_8, VAR_5, sizeof VAR_5);
    FUNC_4(&VAR_8, VAR_1);

    FUNC_23(VAR_2, 0, sizeof VAR_2);
    FUNC_5(&VAR_8, VAR_5, sizeof VAR_5);
    FUNC_8(&VAR_8, VAR_1, 0U);
    FUNC_4(&VAR_8, VAR_2);
    FUNC_0(FUNC_25(VAR_1, VAR_2, sizeof VAR_1) == 0);

    FUNC_23(VAR_2, 0, sizeof VAR_2);
    FUNC_5(&VAR_8, VAR_5, sizeof VAR_5);
    FUNC_8(&VAR_8, VAR_4, 0U);
    FUNC_4(&VAR_8, VAR_2);
    FUNC_0(FUNC_25(VAR_1, VAR_2, sizeof VAR_1) == 0);



    FUNC_0(FUNC_2() > 0U);
    FUNC_0(FUNC_21() > 0U);
    FUNC_0(FUNC_26(FUNC_22(), "hmacsha512256") == 0);
    FUNC_0(FUNC_3() > 0U);
    FUNC_0(FUNC_6() > 0U);
    FUNC_0(FUNC_15() > 0U);
    FUNC_0(FUNC_18() > 0U);
    FUNC_0(FUNC_9() == FUNC_2());
    FUNC_0(FUNC_12() == FUNC_21());
    FUNC_0(FUNC_13() >=
           FUNC_12());
    FUNC_0(FUNC_7() ==
           sizeof(crypto_auth_hmacsha256_state));
    FUNC_0(FUNC_19() ==
           sizeof(crypto_auth_hmacsha512_state));

    return 0;
}
