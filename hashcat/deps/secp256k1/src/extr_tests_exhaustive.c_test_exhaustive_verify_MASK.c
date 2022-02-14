
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ secp256k1_scalar ;
typedef int secp256k1_pubkey ;
typedef int secp256k1_ge ;
typedef int secp256k1_ecdsa_signature ;
typedef int secp256k1_context ;
typedef int nonconst_ge ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (scalar_t__*,int const*,int) ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int const*,int *,unsigned char*,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*) ;
 int FUNC_8 (unsigned char*,scalar_t__*) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (scalar_t__*,int) ;

void FUNC_12(const secp256k1_context *VAR_0, const secp256k1_ge *VAR_1, int VAR_2) {
    int VAR_3, VAR_4, VAR_5, VAR_6;
    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
        for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
            for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++) {
                for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++) {
                    secp256k1_ge VAR_7;
                    secp256k1_ecdsa_signature VAR_8;
                    secp256k1_pubkey VAR_9;
                    secp256k1_scalar VAR_10, VAR_11, VAR_12, VAR_13;
                    secp256k1_scalar VAR_14, VAR_15;
                    int VAR_16, VAR_17;
                    unsigned char VAR_18[32];

                    FUNC_11(&VAR_13, VAR_3);
                    FUNC_11(&VAR_12, VAR_4);
                    FUNC_11(&VAR_11, VAR_5);
                    FUNC_11(&VAR_10, VAR_6);




                    VAR_17 = 0;
                    for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
                        secp256k1_scalar VAR_19;
                        FUNC_2(&VAR_19, VAR_1, VAR_16);
                        if (VAR_12 == VAR_19) {
                            FUNC_11(&VAR_14, VAR_16);
                            FUNC_10(&VAR_14, &VAR_14, &VAR_13);
                            FUNC_10(&VAR_15, &VAR_12, &VAR_10);
                            FUNC_6(&VAR_15, &VAR_15, &VAR_11);
                            VAR_17 |= FUNC_7(&VAR_14, &VAR_15);
                        }
                    }

                    VAR_17 &= !FUNC_9(&VAR_13);


                    FUNC_3(&VAR_8, &VAR_12, &VAR_13);
                    FUNC_1(&VAR_7, &VAR_1[VAR_10], sizeof(VAR_7));
                    FUNC_5(&VAR_9, &VAR_7);
                    FUNC_8(VAR_18, &VAR_11);
                    FUNC_0(VAR_17 ==
                          FUNC_4(VAR_0, &VAR_8, VAR_18, &VAR_9));
                }
            }
        }
    }
}
