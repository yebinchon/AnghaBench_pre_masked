
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int outer; int inner; } ;
typedef TYPE_1__ secp256k1_hmac_sha256 ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(secp256k1_hmac_sha256 *VAR_0, unsigned char *VAR_1) {
    unsigned char VAR_2[32];
    FUNC_1(&VAR_0->inner, VAR_2);
    FUNC_2(&VAR_0->outer, VAR_2, 32);
    FUNC_0(VAR_2, 0, 32);
    FUNC_1(&VAR_0->outer, VAR_1);
}
