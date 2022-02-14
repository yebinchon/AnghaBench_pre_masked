
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int normalized; int magnitude; } ;
typedef TYPE_1__ secp256k1_fe ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__*,int) ;

int FUNC_1(const secp256k1_fe *VAR_0, const secp256k1_fe *VAR_1) {
    secp256k1_fe VAR_2 = *VAR_1;




    return FUNC_0(VAR_0, &VAR_2, sizeof(secp256k1_fe));
}
