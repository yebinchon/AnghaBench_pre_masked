
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int (* secp256k1_nonce_function ) (unsigned char*,unsigned char const*,unsigned char const*,int *,void*,unsigned int) ;
typedef unsigned char secp256k1_ecdsa_signature ;
struct TYPE_3__ {int ecmult_gen_ctx; } ;
typedef TYPE_1__ secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (unsigned char*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*,unsigned char const*,unsigned char const*,int *,void*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned char const*,int*) ;

int FUNC_10(const secp256k1_context* VAR_0, secp256k1_ecdsa_signature *VAR_1, const unsigned char *VAR_2, const unsigned char *VAR_3, secp256k1_nonce_function VAR_4, const void* VAR_5) {
    secp256k1_scalar VAR_6, VAR_7;
    secp256k1_scalar VAR_8, VAR_9, VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;
    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(FUNC_5(&VAR_0->ecmult_gen_ctx));
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_3 != ((void*)0));
    if (VAR_4 == ((void*)0)) {
        VAR_4 = FUNC_6;
    }

    FUNC_9(&VAR_8, VAR_3, &VAR_12);

    if (!VAR_12 && !FUNC_8(&VAR_8)) {
        unsigned char VAR_13[32];
        unsigned int VAR_14 = 0;
        FUNC_9(&VAR_10, VAR_2, ((void*)0));
        while (1) {
            VAR_11 = VAR_4(VAR_13, VAR_2, VAR_3, ((void*)0), (void*)VAR_5, VAR_14);
            if (!VAR_11) {
                break;
            }
            FUNC_9(&VAR_9, VAR_13, &VAR_12);
            if (!VAR_12 && !FUNC_8(&VAR_9)) {
                if (FUNC_3(&VAR_0->ecmult_gen_ctx, &VAR_6, &VAR_7, &VAR_8, &VAR_10, &VAR_9, ((void*)0))) {
                    break;
                }
            }
            VAR_14++;
        }
        FUNC_2(VAR_13, 0, 32);
        FUNC_7(&VAR_10);
        FUNC_7(&VAR_9);
        FUNC_7(&VAR_8);
    }
    if (VAR_11) {
        FUNC_4(VAR_1, &VAR_6, &VAR_7);
    } else {
        FUNC_2(VAR_1, 0, sizeof(*VAR_1));
    }
    return VAR_11;
}
