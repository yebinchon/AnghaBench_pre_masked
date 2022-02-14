
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int crypto_sign_state ;
struct TYPE_2__ {unsigned char* sk; unsigned char* pk; unsigned char* m; unsigned char* sig; } ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned long long*,unsigned char const*,unsigned int,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned long long*,unsigned char const*,unsigned int,unsigned char*) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_5 () ;
 unsigned int FUNC_6 () ;
 unsigned int FUNC_7 () ;
 unsigned int FUNC_8 () ;
 unsigned int FUNC_9 () ;
 int FUNC_10 (unsigned char*,unsigned char*) ;
 int FUNC_11 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int *,unsigned char*,unsigned long long*,unsigned char*) ;
 int FUNC_14 (int *,unsigned char*,unsigned char*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (unsigned char*,unsigned char*) ;
 unsigned int FUNC_17 () ;
 int FUNC_18 (unsigned char*,unsigned long long*,unsigned char*,unsigned long long,unsigned char*) ;
 int FUNC_19 () ;
 unsigned int FUNC_20 () ;
 unsigned int FUNC_21 () ;
 scalar_t__ FUNC_22 (unsigned char*,unsigned char*,unsigned char*) ;
 unsigned int FUNC_23 () ;
 scalar_t__ FUNC_24 () ;
 int FUNC_25 (int *,unsigned char const*,int) ;
 int FUNC_26 (unsigned char*,unsigned char const*,unsigned int,unsigned char*) ;
 int FUNC_27 (int ) ;
 unsigned char* VAR_6 ;
 scalar_t__ FUNC_28 (unsigned char*,unsigned char*,int) ;
 int FUNC_29 (unsigned char*,unsigned char*,int) ;
 int FUNC_30 (unsigned char*,int,int) ;
 unsigned char* VAR_7 ;
 int FUNC_31 (char*,...) ;
 int FUNC_32 (char*,int,unsigned char*,int) ;
 int FUNC_33 (unsigned char*,int,char*,int,int *,int *,int *) ;
 scalar_t__ FUNC_34 (int ,char*) ;
 TYPE_1__* VAR_8 ;

int FUNC_35(void)
{
    crypto_sign_state VAR_9;
    unsigned char VAR_10[VAR_5];
    unsigned char VAR_11[VAR_4];
    unsigned char VAR_12[VAR_0];
    unsigned char VAR_13[1024 + VAR_0];
    unsigned char VAR_14[1024];
    unsigned char VAR_15[VAR_2];
    unsigned char VAR_16[VAR_1];
    unsigned char VAR_17[VAR_2];
    char VAR_18[VAR_0 * 2 + 1];
    char VAR_19[VAR_1 * 2 + 1];
    char VAR_20[VAR_2 * 2 + 1];
    unsigned long long VAR_21;
    unsigned long long VAR_22;
    unsigned long long VAR_23;
    unsigned int VAR_24;
    unsigned int VAR_25;

    FUNC_30(VAR_12, 0, sizeof VAR_12);
    for (VAR_24 = 0U; VAR_24 < (sizeof VAR_8) / (sizeof VAR_8[0]); VAR_24++) {





        FUNC_29(VAR_15, VAR_8[VAR_24].sk, VAR_3);
        FUNC_29(VAR_15 + VAR_3, VAR_8[VAR_24].pk,
               VAR_1);
        if (FUNC_2(VAR_13, &VAR_22, (const unsigned char *)VAR_8[VAR_24].m, VAR_24,
                        VAR_15) != 0) {
            FUNC_31("crypto_sign() failure: [%u]\n", VAR_24);
            continue;
        }
        if (FUNC_28(VAR_8[VAR_24].sig, VAR_13, VAR_0) != 0) {
            FUNC_31("signature failure: [%u]\n", VAR_24);
            continue;
        }
        if (FUNC_18(VAR_14, ((void*)0), VAR_13, VAR_22, VAR_8[VAR_24].pk) != 0) {
            FUNC_31("crypto_sign_open() failure: [%u]\n", VAR_24);
            continue;
        }
        FUNC_0(VAR_13 + 32);

        if (FUNC_18(VAR_14, &VAR_23, VAR_13, VAR_22, VAR_8[VAR_24].pk) != -1) {
            FUNC_31("crypto_sign_open(): signature [%u] is malleable\n", VAR_24);
            continue;
        }






        if (FUNC_28(VAR_8[VAR_24].m, VAR_14, (size_t)VAR_23) != 0) {
            FUNC_31("message verification failure: [%u]\n", VAR_24);
            continue;
        }
        VAR_13[VAR_24 + VAR_0 - 1U]++;
        if (FUNC_18(VAR_14, &VAR_23, VAR_13, VAR_22, VAR_8[VAR_24].pk) == 0) {
            FUNC_31("message can be forged: [%u]\n", VAR_24);
            continue;
        }
        if (FUNC_18(VAR_14, &VAR_23, VAR_13, VAR_24 % VAR_0,
                             VAR_8[VAR_24].pk) == 0) {
            FUNC_31("short signed message verifies: [%u]\n",
                   VAR_24 % VAR_0);
            continue;
        }
        if (FUNC_4(VAR_12, &VAR_21,
                                 (const unsigned char *)VAR_8[VAR_24].m, VAR_24, VAR_15)
            != 0) {
            FUNC_31("detached signature failed: [%u]\n", VAR_24);
            continue;
        }
        if (VAR_21 == 0U || VAR_21 > VAR_0) {
            FUNC_31("detached signature has an unexpected length: [%u]\n", VAR_24);
            continue;
        }
        if (FUNC_28(VAR_8[VAR_24].sig, VAR_12, VAR_0) != 0) {
            FUNC_31("detached signature failure: [%u]\n", VAR_24);
            continue;
        }
        if (FUNC_26(VAR_12,
                                        (const unsigned char *)VAR_8[VAR_24].m,
                                        VAR_24, VAR_8[VAR_24].pk) != 0) {
            FUNC_31("detached signature verification failed: [%u]\n", VAR_24);
            continue;
        }
    }
    FUNC_31("%u tests\n", VAR_24);

    VAR_24--;

    FUNC_29(VAR_13, VAR_8[VAR_24].m, VAR_24);
    if (FUNC_2(VAR_13, &VAR_22, VAR_13, VAR_24, VAR_15) != 0) {
        FUNC_31("crypto_sign() with overlap failed\n");
    }
    if (FUNC_18(VAR_13, &VAR_23, VAR_13, VAR_22, VAR_8[VAR_24].pk) != 0) {
        FUNC_31("crypto_sign_open() with overlap failed\n");
    }
    if (FUNC_28(VAR_8[VAR_24].m, VAR_13, (size_t)VAR_23) != 0) {
        FUNC_31("crypto_sign_open() with overlap failed (content)\n");
    }

    for (VAR_25 = 1U; VAR_25 < 8U; VAR_25++) {
        VAR_12[63] ^= (VAR_25 << 5);
        if (FUNC_26(VAR_12,
                                        (const unsigned char *)VAR_8[VAR_24].m,
                                        VAR_24, VAR_8[VAR_24].pk) != -1) {
            FUNC_31("detached signature verification should have failed\n");
            continue;
        }
        VAR_12[63] ^= (VAR_25 << 5);
    }


    if (FUNC_26(VAR_12,
                                    (const unsigned char *)VAR_8[VAR_24].m,
                                    VAR_24, VAR_7) != -1) {
        FUNC_31("detached signature verification with non-canonical key should have failed\n");
    }

    FUNC_30(VAR_16, 0, sizeof VAR_16);
    if (FUNC_26(VAR_12,
                                    (const unsigned char *)VAR_8[VAR_24].m,
                                    VAR_24, VAR_16) != -1) {
        FUNC_31("detached signature verification should have failed\n");
    }

    FUNC_30(VAR_12, 0xff, 32);
    VAR_12[0] = 0xdb;
    if (FUNC_26(VAR_12,
                                    (const unsigned char *)VAR_8[VAR_24].m,
                                    VAR_24, VAR_16) != -1) {
        FUNC_31("detached signature verification should have failed\n");
    }
    FUNC_1(FUNC_4(VAR_12, ((void*)0),
                                (const unsigned char *)VAR_8[VAR_24].m, VAR_24, VAR_15) == 0);

    FUNC_33(VAR_16, VAR_1,
                   "3eee494fb9eac773144e34b0c755affaf33ea782c0722e5ea8b150e61209ab36",
                   VAR_1 * 2, ((void*)0), ((void*)0), ((void*)0));
    if (FUNC_26(VAR_12,
                                    (const unsigned char *)VAR_8[VAR_24].m,
                                    VAR_24, VAR_16) != -1) {
        FUNC_31("signature with an invalid public key should have failed\n");
    }

    FUNC_33(VAR_16, VAR_1,
                   "0200000000000000000000000000000000000000000000000000000000000000",
                   VAR_1 * 2, ((void*)0), ((void*)0), ((void*)0));
    if (FUNC_26(VAR_12,
                                    (const unsigned char *)VAR_8[VAR_24].m,
                                    VAR_24, VAR_16) != -1) {
        FUNC_31("signature with an invalid public key should have failed\n");
    }

    FUNC_33(VAR_16, VAR_1,
                   "0500000000000000000000000000000000000000000000000000000000000000",
                   VAR_1 * 2, ((void*)0), ((void*)0), ((void*)0));
    if (FUNC_26(VAR_12,
                                    (const unsigned char *)VAR_8[VAR_24].m,
                                    VAR_24, VAR_16) != -1) {
        FUNC_31("signature with an invalid public key should have failed\n");
    }

    if (FUNC_22(VAR_16, VAR_17, VAR_6) != 0) {
        FUNC_31("crypto_sign_seed_keypair() failure\n");
        return -1;
    }
    FUNC_15(&VAR_9);
    FUNC_25(&VAR_9, (const unsigned char *)VAR_8[VAR_24].m, VAR_24);
    FUNC_13(&VAR_9, VAR_12, ((void*)0), VAR_17);
    FUNC_32(VAR_18, sizeof VAR_18, VAR_12, sizeof VAR_12);
    FUNC_31("ed25519ph sig: [%s]\n", VAR_18);

    FUNC_15(&VAR_9);
    FUNC_25(&VAR_9, (const unsigned char *)VAR_8[VAR_24].m, VAR_24);
    if (FUNC_14(&VAR_9, VAR_12, VAR_16) != 0) {
        FUNC_31("ed5519ph verification failed\n");
    }
    FUNC_15(&VAR_9);
    FUNC_25(&VAR_9, (const unsigned char *)VAR_8[VAR_24].m, 0);
    FUNC_25(&VAR_9, (const unsigned char *)VAR_8[VAR_24].m, VAR_24 / 2);
    FUNC_25(&VAR_9, ((const unsigned char *)VAR_8[VAR_24].m) + VAR_24 / 2,
                       VAR_24 - VAR_24 / 2);
    if (FUNC_14(&VAR_9, VAR_12, VAR_16) != 0) {
        FUNC_31("ed5519ph verification failed\n");
    }
    VAR_12[0]++;
    if (FUNC_14(&VAR_9, VAR_12, VAR_16) != -1) {
        FUNC_31("ed5519ph verification could be forged\n");
    }
    VAR_12[0]--;
    VAR_16[0]++;
    if (FUNC_14(&VAR_9, VAR_12, VAR_16) != -1) {
        FUNC_31("ed5519ph verification could be forged\n");
    }
    FUNC_33(VAR_17, VAR_2,
                   "833fe62409237b9d62ec77587520911e9a759cec1d19755b7da901b96dca3d42",
                   2 * VAR_2 / 2, ((void*)0), ((void*)0), ((void*)0));
    FUNC_33(VAR_16, VAR_1,
                   "ec172b93ad5e563bf4932c70e1245034c35467ef2efd4d64ebf819683467e2bf",
                   2 * VAR_1, ((void*)0), ((void*)0), ((void*)0));
    FUNC_29(VAR_17 + VAR_2 - VAR_1,
           VAR_16, VAR_1);
    FUNC_15(&VAR_9);
    FUNC_25(&VAR_9, (const unsigned char *) "abc", 3);
    FUNC_13(&VAR_9, VAR_12, &VAR_21, VAR_17);
    if (VAR_21 == 0U || VAR_21 > VAR_0) {
        FUNC_31("ed25519ph signature has an unexpected length\n");
    }
    FUNC_32(VAR_18, sizeof VAR_18, VAR_12, sizeof VAR_12);
    FUNC_31("ed25519ph tv sig: [%s]\n", VAR_18);

    FUNC_15(&VAR_9);
    FUNC_25(&VAR_9, (const unsigned char *) "abc", 3);
    if (FUNC_14(&VAR_9, VAR_12, VAR_16) != 0) {
        FUNC_31("ed25519ph verification failed\n");
    }
    if (FUNC_16(VAR_16, VAR_17) != 0) {
        FUNC_31("crypto_sign_keypair() failure\n");
    }
    if (FUNC_22(VAR_16, VAR_17, VAR_6) != 0) {
        FUNC_31("crypto_sign_seed_keypair() failure\n");
        return -1;
    }
    FUNC_11(VAR_10, VAR_17);
    if (FUNC_28(VAR_10, VAR_6, VAR_5)
        != 0) {
        FUNC_31("crypto_sign_ed25519_sk_to_seed() failure\n");
    }
    FUNC_10(VAR_11, VAR_17);
    if (FUNC_28(VAR_11, VAR_16, VAR_4) != 0) {
        FUNC_31("crypto_sign_ed25519_sk_to_pk() failure\n");
    }
    FUNC_32(VAR_19, sizeof VAR_19, VAR_16, sizeof VAR_16);
    FUNC_32(VAR_20, sizeof VAR_20, VAR_17, sizeof VAR_17);

    FUNC_31("pk: [%s]\n", VAR_19);
    FUNC_31("sk: [%s]\n", VAR_20);

    FUNC_1(FUNC_3() > 0U);
    FUNC_1(FUNC_23() > 0U);
    FUNC_1(FUNC_20() > 0U);
    FUNC_1(FUNC_21() > 0U);
    FUNC_1(FUNC_17() > 0U);
    FUNC_1(FUNC_34(FUNC_19(), "ed25519") == 0);
    FUNC_1(FUNC_3() == FUNC_5());
    FUNC_1(FUNC_23() == FUNC_9());
    FUNC_1(FUNC_17() == FUNC_6());
    FUNC_1(FUNC_20()
           == FUNC_7());
    FUNC_1(FUNC_21()
           == FUNC_8());
    FUNC_1(FUNC_24() == FUNC_12());





    return 0;
}
