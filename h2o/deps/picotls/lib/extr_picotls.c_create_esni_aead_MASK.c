
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptls_iovec_t ;
struct TYPE_5__ {TYPE_2__* hash; int aead; } ;
typedef TYPE_1__ ptls_cipher_suite_t ;
typedef int ptls_aead_context_t ;
typedef int aead_secret ;
struct TYPE_6__ {int digest_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,TYPE_2__*,int,int *,int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_3 (int const*,int ) ;

__attribute__((used)) static int FUNC_4(ptls_aead_context_t **VAR_2, int VAR_3, ptls_cipher_suite_t *VAR_4, ptls_iovec_t VAR_5,
                            const uint8_t *VAR_6)
{
    uint8_t VAR_7[VAR_1];
    int VAR_8;

    if ((VAR_8 = FUNC_2(VAR_4->hash, VAR_7, FUNC_3(((void*)0), 0), VAR_5)) != 0)
        goto Exit;
    if ((*VAR_2 = FUNC_0(VAR_4->aead, VAR_4->hash, VAR_3, VAR_7,
                              FUNC_3(VAR_6, VAR_4->hash->digest_size), "tls13 esni ")) == ((void*)0)) {
        VAR_8 = VAR_0;
        goto Exit;
    }

    VAR_8 = 0;
Exit:
    FUNC_1(VAR_7, sizeof(VAR_7));
    return VAR_8;
}
