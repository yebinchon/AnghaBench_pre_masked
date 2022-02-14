
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int (* secp256k1_ecmult_multi_callback ) (int *,int *,size_t,void*) ;
typedef int secp256k1_ecmult_context ;


 int FUNC_0 (int const*,int *,int *,int *,int const*) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(const secp256k1_ecmult_context *VAR_0, secp256k1_gej *VAR_1, const secp256k1_scalar *VAR_2, secp256k1_ecmult_multi_callback VAR_3, void *VAR_4, size_t VAR_5) {
    size_t VAR_6;
    secp256k1_scalar VAR_7;
    secp256k1_gej VAR_8;

    FUNC_4(&VAR_7, 0);
    FUNC_3(VAR_1);
    FUNC_3(&VAR_8);

    FUNC_0(VAR_0, VAR_1, &VAR_8, &VAR_7, VAR_2);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        secp256k1_ge VAR_9;
        secp256k1_gej VAR_10;
        secp256k1_scalar VAR_11;
        if (!VAR_3(&VAR_11, &VAR_9, VAR_6, VAR_4)) {
            return 0;
        }

        FUNC_2(&VAR_10, &VAR_9);
        FUNC_0(VAR_0, &VAR_8, &VAR_10, &VAR_11, ((void*)0));
        FUNC_1(VAR_1, VAR_1, &VAR_8, ((void*)0));
    }
    return 1;
}
