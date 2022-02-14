
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_rfc6979_hmac_sha256 ;
typedef int secp256k1_gej ;
typedef int secp256k1_fe ;
struct TYPE_4__ {int initial; int blind; } ;
typedef TYPE_1__ secp256k1_ecmult_gen_context ;
typedef int keydata ;


 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned char*,int) ;
 int FUNC_12 (int *,unsigned char*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (unsigned char*,int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,unsigned char*,int*) ;
 int FUNC_18 (int *,int) ;

__attribute__((used)) static void FUNC_19(secp256k1_ecmult_gen_context *VAR_1, const unsigned char *VAR_2) {
    secp256k1_scalar VAR_3;
    secp256k1_gej VAR_4;
    secp256k1_fe VAR_5;
    unsigned char VAR_6[32];
    secp256k1_rfc6979_hmac_sha256 VAR_7;
    int VAR_8;
    unsigned char VAR_9[64] = {0};
    if (VAR_2 == ((void*)0)) {

        FUNC_9(&VAR_1->initial, &VAR_0);
        FUNC_7(&VAR_1->initial, &VAR_1->initial);
        FUNC_18(&VAR_1->blind, 1);
    }

    FUNC_14(VAR_6, &VAR_1->blind);




    FUNC_0(VAR_9, VAR_6, 32);
    if (VAR_2 != ((void*)0)) {
        FUNC_0(VAR_9 + 32, VAR_2, 32);
    }
    FUNC_12(&VAR_7, VAR_9, VAR_2 ? 64 : 32);
    FUNC_1(VAR_9, 0, sizeof(VAR_9));

    do {
        FUNC_11(&VAR_7, VAR_6, 32);
        VAR_8 = !FUNC_5(&VAR_5, VAR_6);
        VAR_8 = VAR_8 || FUNC_4(&VAR_5);
    } while (VAR_8);

    FUNC_8(&VAR_1->initial, &VAR_5);
    FUNC_3(&VAR_5);
    do {
        FUNC_11(&VAR_7, VAR_6, 32);
        FUNC_17(&VAR_3, VAR_6, &VAR_8);

        VAR_8 = VAR_8 || FUNC_15(&VAR_3);
    } while (VAR_8);
    FUNC_10(&VAR_7);
    FUNC_1(VAR_6, 0, 32);
    FUNC_2(VAR_1, &VAR_4, &VAR_3);
    FUNC_16(&VAR_3, &VAR_3);
    VAR_1->blind = VAR_3;
    VAR_1->initial = VAR_4;
    FUNC_13(&VAR_3);
    FUNC_6(&VAR_4);
}
