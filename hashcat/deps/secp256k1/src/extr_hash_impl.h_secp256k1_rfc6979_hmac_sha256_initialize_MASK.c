
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* v; unsigned char const* k; scalar_t__ retry; } ;
typedef TYPE_1__ secp256k1_rfc6979_hmac_sha256 ;
typedef int secp256k1_hmac_sha256 ;


 int FUNC_0 (unsigned char const*,int,int) ;
 int FUNC_1 (int *,unsigned char const*) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (int *,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_4(secp256k1_rfc6979_hmac_sha256 *VAR_0, const unsigned char *VAR_1, size_t VAR_2) {
    secp256k1_hmac_sha256 VAR_3;
    static const unsigned char VAR_4[1] = {0x00};
    static const unsigned char VAR_5[1] = {0x01};

    FUNC_0(VAR_0->v, 0x01, 32);
    FUNC_0(VAR_0->k, 0x00, 32);


    FUNC_2(&VAR_3, VAR_0->k, 32);
    FUNC_3(&VAR_3, VAR_0->v, 32);
    FUNC_3(&VAR_3, VAR_4, 1);
    FUNC_3(&VAR_3, VAR_1, VAR_2);
    FUNC_1(&VAR_3, VAR_0->k);
    FUNC_2(&VAR_3, VAR_0->k, 32);
    FUNC_3(&VAR_3, VAR_0->v, 32);
    FUNC_1(&VAR_3, VAR_0->v);


    FUNC_2(&VAR_3, VAR_0->k, 32);
    FUNC_3(&VAR_3, VAR_0->v, 32);
    FUNC_3(&VAR_3, VAR_5, 1);
    FUNC_3(&VAR_3, VAR_1, VAR_2);
    FUNC_1(&VAR_3, VAR_0->k);
    FUNC_2(&VAR_3, VAR_0->k, 32);
    FUNC_3(&VAR_3, VAR_0->v, 32);
    FUNC_1(&VAR_3, VAR_0->v);
    VAR_0->retry = 0;
}
