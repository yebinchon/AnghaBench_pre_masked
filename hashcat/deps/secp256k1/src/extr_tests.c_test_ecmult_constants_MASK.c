
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
struct TYPE_2__ {int ecmult_gen_ctx; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;

void FUNC_8(void) {

    secp256k1_scalar VAR_2;
    secp256k1_gej VAR_3;
    secp256k1_ge VAR_4;
    int VAR_5;
    int VAR_6;
    FUNC_3(&VAR_4, &VAR_1);
    for (VAR_5 = 0; VAR_5 < 36; VAR_5++ ) {
        FUNC_7(&VAR_2, VAR_5);
        FUNC_2(&VAR_0->ecmult_gen_ctx, &VAR_3, &VAR_2);
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            if (VAR_6 == VAR_5 - 1) {
                FUNC_1(&VAR_1, &VAR_3);
            }
            FUNC_4(&VAR_3, &VAR_3, &VAR_4);
        }
        FUNC_0(FUNC_5(&VAR_3));
    }
    for (VAR_5 = 1; VAR_5 <= 36; VAR_5++ ) {
        FUNC_7(&VAR_2, VAR_5);
        FUNC_6(&VAR_2, &VAR_2);
        FUNC_2(&VAR_0->ecmult_gen_ctx, &VAR_3, &VAR_2);
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            if (VAR_6 == VAR_5 - 1) {
                FUNC_1(&VAR_4, &VAR_3);
            }
            FUNC_4(&VAR_3, &VAR_3, &VAR_1);
        }
        FUNC_0(FUNC_5(&VAR_3));
    }
}
