
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_pubkey ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
struct TYPE_3__ {int ecmult_gen_ctx; } ;
typedef TYPE_1__ secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned char const*,int*) ;

int FUNC_10(const secp256k1_context* VAR_0, secp256k1_pubkey *VAR_1, const unsigned char *VAR_2) {
    secp256k1_gej VAR_3;
    secp256k1_ge VAR_4;
    secp256k1_scalar VAR_5;
    int VAR_6;
    int VAR_7 = 0;
    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_2(VAR_1, 0, sizeof(*VAR_1));
    FUNC_0(FUNC_4(&VAR_0->ecmult_gen_ctx));
    FUNC_0(VAR_2 != ((void*)0));

    FUNC_9(&VAR_5, VAR_2, &VAR_6);
    VAR_7 = !VAR_6 && !FUNC_8(&VAR_5);
    if (VAR_7) {
        FUNC_3(&VAR_0->ecmult_gen_ctx, &VAR_3, &VAR_5);
        FUNC_5(&VAR_4, &VAR_3);
        FUNC_6(VAR_1, &VAR_4);
    }
    FUNC_7(&VAR_5);
    return VAR_7;
}
