
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_scalar ;
struct TYPE_3__ {int x; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int *) ;

void FUNC_3(secp256k1_scalar *VAR_1, const secp256k1_ge *VAR_2, int VAR_3) {
    secp256k1_fe VAR_4;
    unsigned char VAR_5[32];
    VAR_3 %= VAR_0;
    VAR_4 = VAR_2[VAR_3].x;
    FUNC_1(&VAR_4);
    FUNC_0(VAR_5, &VAR_4);
    FUNC_2(VAR_1, VAR_5, ((void*)0));
}
