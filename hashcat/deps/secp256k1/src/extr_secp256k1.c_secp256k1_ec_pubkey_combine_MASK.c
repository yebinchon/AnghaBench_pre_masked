
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_pubkey ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int secp256k1_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const*,int *,int const* const) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(const secp256k1_context* VAR_0, secp256k1_pubkey *VAR_1, const secp256k1_pubkey * const *VAR_2, size_t VAR_3) {
    size_t VAR_4;
    secp256k1_gej VAR_5;
    secp256k1_ge VAR_6;

    FUNC_0(VAR_1 != ((void*)0));
    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
    FUNC_0(VAR_3 >= 1);
    FUNC_0(VAR_2 != ((void*)0));

    FUNC_5(&VAR_5);

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        FUNC_6(VAR_0, &VAR_6, VAR_2[VAR_4]);
        FUNC_3(&VAR_5, &VAR_5, &VAR_6);
    }
    if (FUNC_4(&VAR_5)) {
        return 0;
    }
    FUNC_2(&VAR_6, &VAR_5);
    FUNC_7(VAR_1, &VAR_6);
    return 1;
}
