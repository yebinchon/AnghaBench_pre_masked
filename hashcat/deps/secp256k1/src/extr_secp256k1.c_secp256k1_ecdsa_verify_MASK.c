
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_pubkey ;
typedef int secp256k1_ge ;
typedef int secp256k1_ecdsa_signature ;
struct TYPE_5__ {int ecmult_ctx; } ;
typedef TYPE_1__ secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (TYPE_1__ const*,int *,int *,int const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*,int *,int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned char const*,int *) ;

int FUNC_8(const secp256k1_context* VAR_0, const secp256k1_ecdsa_signature *VAR_1, const unsigned char *VAR_2, const secp256k1_pubkey *VAR_3) {
    secp256k1_ge VAR_4;
    secp256k1_scalar VAR_5, VAR_6;
    secp256k1_scalar VAR_7;
    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(FUNC_4(&VAR_0->ecmult_ctx));
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_3 != ((void*)0));

    FUNC_7(&VAR_7, VAR_2, ((void*)0));
    FUNC_3(VAR_0, &VAR_5, &VAR_6, VAR_1);
    return (!FUNC_6(&VAR_6) &&
            FUNC_5(VAR_0, &VAR_4, VAR_3) &&
            FUNC_2(&VAR_0->ecmult_ctx, &VAR_5, &VAR_6, &VAR_4, &VAR_7));
}
