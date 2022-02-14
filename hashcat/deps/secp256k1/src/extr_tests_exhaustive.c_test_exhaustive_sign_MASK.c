
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_ge ;
typedef int secp256k1_ecdsa_signature ;
typedef int secp256k1_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int const*,int *,unsigned char*,unsigned char*,int ,int*) ;
 int FUNC_3 (int const*,int*,int*,int *) ;
 int VAR_1 ;
 int FUNC_4 (unsigned char*,int*) ;
 int FUNC_5 (int*,int) ;

void FUNC_6(const secp256k1_context *VAR_2, const secp256k1_ge *VAR_3, int VAR_4) {
    int VAR_5, VAR_6, VAR_7;


    for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5++) {
        for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
            for (VAR_7 = 1; VAR_7 < VAR_4; VAR_7++) {
                const int VAR_8 = VAR_7;
                secp256k1_ecdsa_signature VAR_9;
                secp256k1_scalar VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
                unsigned char VAR_15[32], VAR_16[32];
                FUNC_5(&VAR_11, VAR_5);
                FUNC_5(&VAR_10, VAR_6);
                FUNC_4(VAR_15, &VAR_10);
                FUNC_4(VAR_16, &VAR_11);

                FUNC_2(VAR_2, &VAR_9, VAR_16, VAR_15, VAR_1, &VAR_7);

                FUNC_3(VAR_2, &VAR_12, &VAR_13, &VAR_9);



                FUNC_1(&VAR_14, VAR_3, VAR_7);
                FUNC_0(VAR_12 == VAR_14);
                FUNC_0((VAR_7 * VAR_13) % VAR_4 == (VAR_5 + VAR_12 * VAR_6) % VAR_4 ||
                      (VAR_7 * (VAR_0 - VAR_13)) % VAR_4 == (VAR_5 + VAR_12 * VAR_6) % VAR_4);


                if (VAR_7 < VAR_8) {
                    break;
                }
            }
        }
    }
}
