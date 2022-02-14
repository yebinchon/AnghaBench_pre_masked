
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_ge ;
struct TYPE_2__ {int * pt; int * sc; } ;
typedef TYPE_1__ ecmult_multi_data ;



__attribute__((used)) static int FUNC_0(secp256k1_scalar *VAR_0, secp256k1_ge *VAR_1, size_t VAR_2, void *VAR_3) {
    ecmult_multi_data *VAR_4 = (ecmult_multi_data*) VAR_3;
    *VAR_0 = VAR_4->sc[VAR_2];
    *VAR_1 = VAR_4->pt[VAR_2];
    return 1;
}
