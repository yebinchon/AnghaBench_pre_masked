
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_ecdsa_signature ;
typedef int secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int *,unsigned char const*,size_t) ;
 int FUNC_4 (int *,int *,int *) ;

int FUNC_5(const secp256k1_context* VAR_0, secp256k1_ecdsa_signature* VAR_1, const unsigned char *VAR_2, size_t VAR_3) {
    secp256k1_scalar VAR_4, VAR_5;

    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    if (FUNC_3(&VAR_4, &VAR_5, VAR_2, VAR_3)) {
        FUNC_4(VAR_1, &VAR_4, &VAR_5);
        return 1;
    } else {
        FUNC_2(VAR_1, 0, sizeof(*VAR_1));
        return 0;
    }
}
