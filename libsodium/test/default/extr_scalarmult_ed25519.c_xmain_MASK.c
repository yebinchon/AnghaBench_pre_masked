
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_6 () ;
 unsigned char* VAR_3 ;
 scalar_t__ FUNC_7 (unsigned char*,unsigned char*,scalar_t__) ;
 int FUNC_8 (unsigned char*,int ,scalar_t__) ;
 int FUNC_9 (unsigned char*,int ,scalar_t__) ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (unsigned char*,scalar_t__) ;
 int FUNC_12 (unsigned char*) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

int
FUNC_14(void)
{
    unsigned char *VAR_6, *VAR_7, *VAR_8, *VAR_9;

    VAR_6 = (unsigned char *) FUNC_13(VAR_2);
    VAR_7 = (unsigned char *) FUNC_13(VAR_1);
    VAR_8 = (unsigned char *) FUNC_13(VAR_1);
    VAR_9 = (unsigned char *) FUNC_13(VAR_1);

    FUNC_11(VAR_6, VAR_2);
    if (FUNC_2(VAR_8, VAR_6) != 0) {
        FUNC_10("crypto_scalarmult_ed25519_base() failed\n");
    }
    FUNC_8(VAR_7, VAR_0, VAR_1);
    if (FUNC_1(VAR_9, VAR_6, VAR_7) != 0) {
        FUNC_10("crypto_scalarmult_ed25519() failed\n");
    }
    if (FUNC_7(VAR_8, VAR_9, VAR_1) != 0) {
        FUNC_10("crypto_scalarmult_ed25519_base(n) != crypto_scalarmult_ed25519(n, 9)\n");
    }

    FUNC_9(VAR_6, 0, VAR_2);
    if (FUNC_2(VAR_8, VAR_6) != -1) {
        FUNC_10("crypto_scalarmult_ed25519_base(0) passed\n");
    }
    if (FUNC_1(VAR_9, VAR_6, VAR_7) != -1) {
        FUNC_10("crypto_scalarmult_ed25519(0) passed\n");
    }
    if (FUNC_5(VAR_9, VAR_6, VAR_7) != -1) {
        FUNC_10("crypto_scalarmult_ed25519_noclamp(0) passed\n");
    }

    VAR_6[0] = 1;
    if (FUNC_2(VAR_8, VAR_6) != 0) {
        FUNC_10("crypto_scalarmult_ed25519_base() failed\n");
    }
    if (FUNC_1(VAR_9, VAR_6, VAR_7) != 0) {
        FUNC_10("crypto_scalarmult_ed25519() failed\n");
    }
    if (FUNC_5(VAR_9, VAR_6, VAR_7) != 0) {
        FUNC_10("crypto_scalarmult_ed25519_noclamp() failed\n");
    }

    if (FUNC_1(VAR_8, VAR_6, VAR_5) != -1) {
        FUNC_10("crypto_scalarmult_ed25519() didn't fail\n");
    }
    if (FUNC_1(VAR_8, VAR_6, VAR_4) != -1) {
        FUNC_10("crypto_scalarmult_ed25519() didn't fail\n");
    }
    if (FUNC_1(VAR_8, VAR_6, VAR_3) != 0) {
        FUNC_10("crypto_scalarmult_ed25519() failed\n");
    }

    VAR_6[0] = 9;
    if (FUNC_1(VAR_8, VAR_6, VAR_7) != 0) {
        FUNC_10("crypto_scalarmult_ed25519() failed\n");
    }
    if (FUNC_5(VAR_9, VAR_6, VAR_7) != 0) {
        FUNC_10("crypto_scalarmult_ed25519_noclamp() failed\n");
    }
    if (FUNC_7(VAR_8, VAR_9, VAR_1) == 0) {
        FUNC_10("clamping not applied\n");
    }

    VAR_6[0] = 9;
    if (FUNC_2(VAR_8, VAR_6) != 0) {
        FUNC_10("crypto_scalarmult_ed25519_base() failed\n");
    }
    if (FUNC_3(VAR_9, VAR_6) != 0) {
        FUNC_10("crypto_scalarmult_ed25519_base_noclamp() failed\n");
    }
    if (FUNC_7(VAR_8, VAR_9, VAR_1) == 0) {
        FUNC_10("clamping not applied\n");
    }

    VAR_6[0] = 8;
    VAR_6[31] = 64;
    if (FUNC_5(VAR_9, VAR_6, VAR_7) != 0) {
        FUNC_10("crypto_scalarmult_ed25519_noclamp() failed\n");
    }
    if (FUNC_7(VAR_8, VAR_9, VAR_1) != 0) {
        FUNC_10("inconsistent clamping\n");
    }

    FUNC_9(VAR_7, 0, VAR_1);
    if (FUNC_1(VAR_8, VAR_6, VAR_7) != -1) {
        FUNC_10("crypto_scalarmult_ed25519() didn't fail\n");
    }
    if (FUNC_5(VAR_8, VAR_6, VAR_7) != -1) {
        FUNC_10("crypto_scalarmult_ed25519_noclamp() didn't fail\n");
    }

    VAR_6[0] = 8;
    if (FUNC_1(VAR_8, VAR_6, VAR_7) != -1) {
        FUNC_10("crypto_scalarmult_ed25519() didn't fail\n");
    }
    if (FUNC_5(VAR_8, VAR_6, VAR_7) != -1) {
        FUNC_10("crypto_scalarmult_ed25519_noclamp() didn't fail\n");
    }

    FUNC_12(VAR_9);
    FUNC_12(VAR_8);
    FUNC_12(VAR_7);
    FUNC_12(VAR_6);

    FUNC_0(VAR_1 == FUNC_4());
    FUNC_0(VAR_2 == FUNC_6());

    FUNC_10("OK\n");

    return 0;
}
