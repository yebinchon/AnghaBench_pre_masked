
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_scalar ;
struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ secp256k1_ecdsa_signature ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static void FUNC_2(secp256k1_ecdsa_signature* VAR_0, const secp256k1_scalar* VAR_1, const secp256k1_scalar* VAR_2) {
    if (sizeof(secp256k1_scalar) == 32) {
        FUNC_0(&VAR_0->data[0], VAR_1, 32);
        FUNC_0(&VAR_0->data[32], VAR_2, 32);
    } else {
        FUNC_1(&VAR_0->data[0], VAR_1);
        FUNC_1(&VAR_0->data[32], VAR_2);
    }
}
