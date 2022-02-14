
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
struct TYPE_3__ {int ecmult_ctx; } ;
typedef TYPE_1__ secp256k1_context ;


 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *,int *,int const*,int *,int *) ;
 int FUNC_2 (int *,int const*,int *,int) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(const secp256k1_context *VAR_0, const secp256k1_ge *VAR_1, const secp256k1_gej *VAR_2, int VAR_3) {
    int VAR_4, VAR_5, VAR_6;
    for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
                secp256k1_gej VAR_7;
                secp256k1_scalar VAR_8, VAR_9;
                FUNC_3(&VAR_8, VAR_4);
                FUNC_3(&VAR_9, VAR_5);

                FUNC_1(&VAR_0->ecmult_ctx, &VAR_7, &VAR_2[VAR_6], &VAR_8, &VAR_9);
                FUNC_0(&VAR_1[(VAR_4 * VAR_6 + VAR_5) % VAR_3], &VAR_7);

                if (VAR_4 > 0) {
                    FUNC_2(&VAR_7, &VAR_1[VAR_4], &VAR_9, 256);
                    FUNC_0(&VAR_1[(VAR_4 * VAR_5) % VAR_3], &VAR_7);
                }
            }
        }
    }
}
