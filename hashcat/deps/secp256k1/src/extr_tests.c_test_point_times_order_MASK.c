
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
struct TYPE_2__ {int ecmult_ctx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned char*,size_t*,int) ;
 int FUNC_6 (int *,int *,int const*,int *,int *) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;

void FUNC_14(const secp256k1_gej *VAR_2) {

    secp256k1_scalar VAR_3;
    secp256k1_scalar VAR_4;
    secp256k1_scalar VAR_5 = FUNC_1(0, 0, 0, 0, 0, 0, 0, 0);
    secp256k1_scalar VAR_6 = FUNC_1(0, 0, 0, 0, 0, 0, 0, 1);
    secp256k1_gej VAR_7, VAR_8;
    secp256k1_ge VAR_9;
    unsigned char VAR_10[65];
    size_t VAR_11 = 65;
    FUNC_4(&VAR_3);
    FUNC_13(&VAR_4, &VAR_3);
    FUNC_6(&VAR_0->ecmult_ctx, &VAR_7, VAR_2, &VAR_3, &VAR_3);
    FUNC_6(&VAR_0->ecmult_ctx, &VAR_8, VAR_2, &VAR_4, &VAR_4);
    FUNC_10(&VAR_7, &VAR_7, &VAR_8, ((void*)0));
    FUNC_0(FUNC_11(&VAR_7));
    FUNC_0(FUNC_12(&VAR_7) == 0);
    FUNC_9(&VAR_9, &VAR_7);
    FUNC_0(FUNC_7(&VAR_9));
    FUNC_0(FUNC_8(&VAR_9) == 0);
    FUNC_0(FUNC_5(&VAR_9, VAR_10, &VAR_11, 0) == 0);
    VAR_11 = 65;
    FUNC_0(FUNC_5(&VAR_9, VAR_10, &VAR_11, 1) == 0);

    FUNC_6(&VAR_0->ecmult_ctx, &VAR_7, VAR_2, &VAR_5, &VAR_5);
    FUNC_9(&VAR_9, &VAR_7);
    FUNC_0(FUNC_7(&VAR_9));
    FUNC_6(&VAR_0->ecmult_ctx, &VAR_7, VAR_2, &VAR_6, &VAR_5);
    FUNC_9(&VAR_9, &VAR_7);
    FUNC_3(&VAR_9, VAR_2);
    FUNC_6(&VAR_0->ecmult_ctx, &VAR_7, VAR_2, &VAR_5, &VAR_6);
    FUNC_9(&VAR_9, &VAR_7);
    FUNC_2(&VAR_9, &VAR_1);
}
