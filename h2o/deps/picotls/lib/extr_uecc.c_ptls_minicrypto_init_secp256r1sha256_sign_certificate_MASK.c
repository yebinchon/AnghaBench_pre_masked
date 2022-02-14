
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cb; } ;
struct TYPE_7__ {int key; TYPE_1__ super; } ;
typedef TYPE_2__ ptls_minicrypto_secp256r1sha256_sign_certificate_t ;
struct TYPE_8__ {int len; int base; } ;
typedef TYPE_3__ ptls_iovec_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;

int FUNC_1(ptls_minicrypto_secp256r1sha256_sign_certificate_t *VAR_2,
                                                          ptls_iovec_t VAR_3)
{
    if (VAR_3.len != sizeof(VAR_2->key))
        return VAR_0;

    VAR_2->super.cb = VAR_1;
    FUNC_0(VAR_2->key, VAR_3.base, sizeof(VAR_2->key));

    return 0;
}
