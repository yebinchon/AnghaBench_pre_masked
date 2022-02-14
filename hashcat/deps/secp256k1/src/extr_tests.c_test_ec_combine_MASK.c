
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_pubkey ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int sd ;
struct TYPE_3__ {int ecmult_gen_ctx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *,int const**,int) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;

void FUNC_9(void) {
    secp256k1_scalar VAR_1 = FUNC_1(0, 0, 0, 0, 0, 0, 0, 0);
    secp256k1_pubkey VAR_2[6];
    const secp256k1_pubkey* VAR_3[6];
    secp256k1_pubkey VAR_4;
    secp256k1_pubkey VAR_5;
    secp256k1_gej VAR_6;
    secp256k1_ge VAR_7;
    int VAR_8;
    for (VAR_8 = 1; VAR_8 <= 6; VAR_8++) {
        secp256k1_scalar VAR_9;
        FUNC_3(&VAR_9);
        FUNC_8(&VAR_1, &VAR_1, &VAR_9);
        FUNC_5(&VAR_0->ecmult_gen_ctx, &VAR_6, &VAR_9);
        FUNC_6(&VAR_7, &VAR_6);
        FUNC_7(&VAR_2[VAR_8 - 1], &VAR_7);
        VAR_3[VAR_8 - 1] = &VAR_2[VAR_8 - 1];
        FUNC_5(&VAR_0->ecmult_gen_ctx, &VAR_6, &VAR_1);
        FUNC_6(&VAR_7, &VAR_6);
        FUNC_7(&VAR_4, &VAR_7);
        FUNC_0(FUNC_4(VAR_0, &VAR_5, VAR_3, VAR_8) == 1);
        FUNC_0(FUNC_2(&VAR_4, &VAR_5, sizeof(VAR_4)) == 0);
    }
}
