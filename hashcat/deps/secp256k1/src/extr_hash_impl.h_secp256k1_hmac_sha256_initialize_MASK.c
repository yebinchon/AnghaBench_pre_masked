
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_sha256 ;
struct TYPE_3__ {int inner; int outer; } ;
typedef TYPE_1__ secp256k1_hmac_sha256 ;
typedef int rkey ;


 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_5(secp256k1_hmac_sha256 *VAR_0, const unsigned char *VAR_1, size_t VAR_2) {
    size_t VAR_3;
    unsigned char VAR_4[64];
    if (VAR_2 <= sizeof(VAR_4)) {
        FUNC_0(VAR_4, VAR_1, VAR_2);
        FUNC_1(VAR_4 + VAR_2, 0, sizeof(VAR_4) - VAR_2);
    } else {
        secp256k1_sha256 VAR_5;
        FUNC_3(&VAR_5);
        FUNC_4(&VAR_5, VAR_1, VAR_2);
        FUNC_2(&VAR_5, VAR_4);
        FUNC_1(VAR_4 + 32, 0, 32);
    }

    FUNC_3(&VAR_0->outer);
    for (VAR_3 = 0; VAR_3 < sizeof(VAR_4); VAR_3++) {
        VAR_4[VAR_3] ^= 0x5c;
    }
    FUNC_4(&VAR_0->outer, VAR_4, sizeof(VAR_4));

    FUNC_3(&VAR_0->inner);
    for (VAR_3 = 0; VAR_3 < sizeof(VAR_4); VAR_3++) {
        VAR_4[VAR_3] ^= 0x5c ^ 0x36;
    }
    FUNC_4(&VAR_0->inner, VAR_4, sizeof(VAR_4));
    FUNC_1(VAR_4, 0, sizeof(VAR_4));
}
