
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int secp256k1_ecmult_context ;


 int FUNC_0 (int const*,int *,int *,int *,int const*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(const secp256k1_ecmult_context *VAR_0, secp256k1_ge *VAR_1, const secp256k1_scalar *VAR_2) {
    secp256k1_gej VAR_3;
    secp256k1_scalar VAR_4;
    FUNC_3(&VAR_3, VAR_1);
    FUNC_4(&VAR_4, 1);
    FUNC_0(VAR_0, &VAR_3, &VAR_3, &VAR_4, VAR_2);

    if (FUNC_2(&VAR_3)) {
        return 0;
    }
    FUNC_1(VAR_1, &VAR_3);
    return 1;
}
