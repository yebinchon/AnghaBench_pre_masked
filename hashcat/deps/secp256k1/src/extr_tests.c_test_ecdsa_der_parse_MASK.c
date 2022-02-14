
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_ecdsa_signature ;
typedef int ECDSA_SIG ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,unsigned char*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const**,int const**) ;
 int * FUNC_7 () ;
 int VAR_0 ;
 int * FUNC_8 (int **,unsigned char const**,size_t) ;
 int FUNC_9 (int ,int *,unsigned char const*,size_t) ;
 int FUNC_10 (int *,unsigned char**) ;
 scalar_t__ FUNC_11 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_12 (int ,int *,unsigned char const*,size_t) ;
 int FUNC_13 (int ,unsigned char*,int *) ;
 int FUNC_14 (int ,unsigned char*,size_t*,int *) ;

int FUNC_15(const unsigned char *VAR_1, size_t VAR_2, int VAR_3, int VAR_4) {
    static const unsigned char VAR_5[32] = {0};
    int VAR_6 = 0;

    secp256k1_ecdsa_signature VAR_7;
    unsigned char VAR_8[2048];
    unsigned char VAR_9[64];
    size_t VAR_10 = 2048;
    int VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

    secp256k1_ecdsa_signature VAR_14;
    unsigned char VAR_15[2048];
    unsigned char VAR_16[64];
    size_t VAR_17 = 2048;
    int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
    VAR_11 = FUNC_12(VAR_0, &VAR_7, VAR_1, VAR_2);
    if (VAR_11) {
        VAR_6 |= (!FUNC_13(VAR_0, VAR_9, &VAR_7)) << 0;
        VAR_12 = (FUNC_11(VAR_9, VAR_5, 32) != 0) && (FUNC_11(VAR_9 + 32, VAR_5, 32) != 0);
    }
    if (VAR_12) {
        VAR_6 |= (!FUNC_14(VAR_0, VAR_8, &VAR_10, &VAR_7)) << 1;
        VAR_13 = (VAR_10 == VAR_2) && FUNC_11(VAR_8, VAR_1, VAR_2) == 0;
    }

    VAR_18 = FUNC_9(VAR_0, &VAR_14, VAR_1, VAR_2);
    if (VAR_18) {
        VAR_6 |= (!FUNC_13(VAR_0, VAR_16, &VAR_14)) << 10;
        VAR_19 = (FUNC_11(VAR_16, VAR_5, 32) != 0) && (FUNC_11(VAR_16 + 32, VAR_5, 32) != 0);
    }
    if (VAR_19) {
        VAR_6 |= (!FUNC_14(VAR_0, VAR_15, &VAR_17, &VAR_14)) << 11;
        VAR_20 = (VAR_17 == VAR_2) && FUNC_11(VAR_15, VAR_1, VAR_2) == 0;
    }

    if (VAR_3) {
        VAR_6 |= (!VAR_11) << 2;
    }
    if (VAR_4) {
        VAR_6 |= (VAR_11) << 17;
    }
    if (VAR_12) {
        VAR_6 |= (!VAR_13) << 3;
    }

    if (VAR_12) {
        VAR_6 |= (!VAR_20) << 12;
        VAR_6 |= (VAR_10 != VAR_17) << 13;
        VAR_6 |= ((VAR_10 != VAR_17) || (FUNC_11(VAR_15, VAR_8, VAR_10) != 0)) << 14;
    }
    VAR_6 |= (VAR_13 != VAR_20) << 15;
    if (VAR_11) {
        VAR_6 |= (!VAR_18) << 16;
    }
    return VAR_6;
}
