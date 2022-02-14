
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* d; } ;
typedef TYPE_1__ secp256k1_scalar ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(secp256k1_scalar *VAR_0, int VAR_1) {
    int VAR_2;
    FUNC_0(VAR_1 > 0);
    FUNC_0(VAR_1 < 16);
    VAR_2 = VAR_0->d[0] & ((1 << VAR_1) - 1);
    VAR_0->d[0] = (VAR_0->d[0] >> VAR_1) + (VAR_0->d[1] << (32 - VAR_1));
    VAR_0->d[1] = (VAR_0->d[1] >> VAR_1) + (VAR_0->d[2] << (32 - VAR_1));
    VAR_0->d[2] = (VAR_0->d[2] >> VAR_1) + (VAR_0->d[3] << (32 - VAR_1));
    VAR_0->d[3] = (VAR_0->d[3] >> VAR_1) + (VAR_0->d[4] << (32 - VAR_1));
    VAR_0->d[4] = (VAR_0->d[4] >> VAR_1) + (VAR_0->d[5] << (32 - VAR_1));
    VAR_0->d[5] = (VAR_0->d[5] >> VAR_1) + (VAR_0->d[6] << (32 - VAR_1));
    VAR_0->d[6] = (VAR_0->d[6] >> VAR_1) + (VAR_0->d[7] << (32 - VAR_1));
    VAR_0->d[7] = (VAR_0->d[7] >> VAR_1);
    return VAR_2;
}
