
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct st_ptls_openssl_signature_scheme_t {scalar_t__ scheme_id; int scheme_md; } ;
typedef int ptls_t ;
typedef int ptls_sign_certificate_t ;
struct TYPE_2__ {int key; struct st_ptls_openssl_signature_scheme_t* schemes; } ;
typedef TYPE_1__ ptls_openssl_sign_certificate_t ;
typedef int ptls_iovec_t ;
typedef int ptls_buffer_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(ptls_sign_certificate_t *VAR_2, ptls_t *VAR_3, uint16_t *VAR_4, ptls_buffer_t *VAR_5,
                            ptls_iovec_t VAR_6, const uint16_t *VAR_7, size_t VAR_8)
{
    ptls_openssl_sign_certificate_t *VAR_9 = (ptls_openssl_sign_certificate_t *)VAR_2;
    const struct st_ptls_openssl_signature_scheme_t *VAR_10;


    for (VAR_10 = VAR_9->schemes; VAR_10->scheme_id != VAR_1; ++VAR_10) {
        size_t VAR_11;
        for (VAR_11 = 0; VAR_11 != VAR_8; ++VAR_11)
            if (VAR_7[VAR_11] == VAR_10->scheme_id)
                goto Found;
    }
    return VAR_0;

Found:
    *VAR_4 = VAR_10->scheme_id;
    return FUNC_0(VAR_9->key, VAR_5, VAR_6, VAR_10->scheme_md);
}
