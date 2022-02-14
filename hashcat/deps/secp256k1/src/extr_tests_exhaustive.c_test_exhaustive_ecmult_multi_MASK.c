
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int secp256k1_scratch ;
typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
struct TYPE_5__ {int error_callback; int ecmult_ctx; } ;
typedef TYPE_1__ secp256k1_context ;
struct TYPE_6__ {int * pt; int * sc; } ;
typedef TYPE_2__ ecmult_multi_data ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *,int *,int *,int *,int *,int ,TYPE_2__*,int) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(const secp256k1_context *VAR_1, const secp256k1_ge *VAR_2, int VAR_3) {
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    secp256k1_scratch *VAR_9 = FUNC_3(&VAR_1->error_callback, 4096);
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
                for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
                    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
                        secp256k1_gej VAR_10;
                        secp256k1_scalar VAR_11;
                        ecmult_multi_data VAR_12;

                        FUNC_2(&VAR_12.sc[0], VAR_4);
                        FUNC_2(&VAR_12.sc[1], VAR_5);
                        FUNC_2(&VAR_11, VAR_6);
                        VAR_12.pt[0] = VAR_2[VAR_7];
                        VAR_12.pt[1] = VAR_2[VAR_8];

                        FUNC_1(&VAR_1->error_callback, &VAR_1->ecmult_ctx, VAR_9, &VAR_10, &VAR_11, VAR_0, &VAR_12, 2);
                        FUNC_0(&VAR_2[(VAR_4 * VAR_7 + VAR_5 * VAR_8 + VAR_6) % VAR_3], &VAR_10);
                    }
                }
            }
        }
    }
    FUNC_4(&VAR_1->error_callback, VAR_9);
}
