
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_ecdsa_signature ;
typedef int secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,int *,int *,int const*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(const secp256k1_context* VAR_0, secp256k1_ecdsa_signature *VAR_1, const secp256k1_ecdsa_signature *VAR_2) {
    secp256k1_scalar VAR_3, VAR_4;
    int VAR_5 = 0;

    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    FUNC_2(VAR_0, &VAR_3, &VAR_4, VAR_2);
    VAR_5 = FUNC_4(&VAR_4);
    if (VAR_1 != ((void*)0)) {
        if (VAR_5) {
            FUNC_5(&VAR_4, &VAR_4);
        }
        FUNC_3(VAR_1, &VAR_3, &VAR_4);
    }

    return VAR_5;
}
