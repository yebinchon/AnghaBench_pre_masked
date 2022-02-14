
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int retry; unsigned char const* k; unsigned char const* v; } ;
typedef TYPE_1__ secp256k1_rfc6979_hmac_sha256 ;
typedef int secp256k1_hmac_sha256 ;


 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (int *,unsigned char const*) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (int *,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_4(secp256k1_rfc6979_hmac_sha256 *VAR_0, unsigned char *VAR_1, size_t VAR_2) {

    static const unsigned char VAR_3[1] = {0x00};
    if (VAR_0->retry) {
        secp256k1_hmac_sha256 VAR_4;
        FUNC_2(&VAR_4, VAR_0->k, 32);
        FUNC_3(&VAR_4, VAR_0->v, 32);
        FUNC_3(&VAR_4, VAR_3, 1);
        FUNC_1(&VAR_4, VAR_0->k);
        FUNC_2(&VAR_4, VAR_0->k, 32);
        FUNC_3(&VAR_4, VAR_0->v, 32);
        FUNC_1(&VAR_4, VAR_0->v);
    }

    while (VAR_2 > 0) {
        secp256k1_hmac_sha256 VAR_5;
        int VAR_6 = VAR_2;
        FUNC_2(&VAR_5, VAR_0->k, 32);
        FUNC_3(&VAR_5, VAR_0->v, 32);
        FUNC_1(&VAR_5, VAR_0->v);
        if (VAR_6 > 32) {
            VAR_6 = 32;
        }
        FUNC_0(VAR_1, VAR_0->v, VAR_6);
        VAR_1 += VAR_6;
        VAR_2 -= VAR_6;
    }

    VAR_0->retry = 1;
}
