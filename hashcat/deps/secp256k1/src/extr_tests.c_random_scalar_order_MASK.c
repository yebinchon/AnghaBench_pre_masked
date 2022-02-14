
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int*) ;

void FUNC_3(secp256k1_scalar *VAR_0) {
    do {
        unsigned char VAR_1[32];
        int VAR_2 = 0;
        FUNC_0(VAR_1);
        FUNC_2(VAR_0, VAR_1, &VAR_2);
        if (VAR_2 || FUNC_1(VAR_0)) {
            continue;
        }
        break;
    } while(1);
}
