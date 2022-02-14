
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_pubkey ;
typedef int secp256k1_ge ;
typedef int secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(const secp256k1_context* VAR_0, secp256k1_pubkey* VAR_1, const unsigned char *VAR_2, size_t VAR_3) {
    secp256k1_ge VAR_4;

    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_2(VAR_1, 0, sizeof(*VAR_1));
    FUNC_0(VAR_2 != ((void*)0));
    if (!FUNC_3(&VAR_4, VAR_2, VAR_3)) {
        return 0;
    }
    FUNC_5(VAR_1, &VAR_4);
    FUNC_4(&VAR_4);
    return 1;
}
