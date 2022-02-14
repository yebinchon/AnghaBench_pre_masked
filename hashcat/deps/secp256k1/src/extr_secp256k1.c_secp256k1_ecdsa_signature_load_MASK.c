
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_scalar ;
struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ secp256k1_ecdsa_signature ;
typedef int secp256k1_context ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(const secp256k1_context* VAR_0, secp256k1_scalar* VAR_1, secp256k1_scalar* VAR_2, const secp256k1_ecdsa_signature* VAR_3) {
    (void)VAR_0;
    if (sizeof(secp256k1_scalar) == 32) {



        FUNC_0(VAR_1, &VAR_3->data[0], 32);
        FUNC_0(VAR_2, &VAR_3->data[32], 32);
    } else {
        FUNC_1(VAR_1, &VAR_3->data[0], ((void*)0));
        FUNC_1(VAR_2, &VAR_3->data[32], ((void*)0));
    }
}
