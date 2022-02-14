
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_ecdsa_signature ;
typedef int secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,size_t*,int *,int *) ;
 int FUNC_3 (int const*,int *,int *,int const*) ;

int FUNC_4(const secp256k1_context* VAR_0, unsigned char *VAR_1, size_t *VAR_2, const secp256k1_ecdsa_signature* VAR_3) {
    secp256k1_scalar VAR_4, VAR_5;

    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_3 != ((void*)0));

    FUNC_3(VAR_0, &VAR_4, &VAR_5, VAR_3);
    return FUNC_2(VAR_1, VAR_2, &VAR_4, &VAR_5);
}
