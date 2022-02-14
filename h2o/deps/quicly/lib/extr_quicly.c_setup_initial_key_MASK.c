
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct st_quicly_cipher_context_t {int aead; int header_protection; } ;
struct TYPE_5__ {TYPE_3__* hash; int aead; } ;
typedef TYPE_1__ ptls_cipher_suite_t ;
typedef int aead_secret ;
struct TYPE_6__ {int digest_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_3__*,int *,int ,int ,char const*,int ,int *) ;
 int FUNC_2 (void const*,int ) ;
 int FUNC_3 (int *,int *,int ,TYPE_3__*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct st_quicly_cipher_context_t *VAR_1, ptls_cipher_suite_t *VAR_2, const void *VAR_3,
                             const char *VAR_4, int VAR_5)
{
    uint8_t VAR_6[VAR_0];
    int VAR_7;

    if ((VAR_7 = FUNC_1(VAR_2->hash, VAR_6, VAR_2->hash->digest_size,
                                      FUNC_2(VAR_3, VAR_2->hash->digest_size), VAR_4, FUNC_2(((void*)0), 0),
                                      ((void*)0))) != 0)
        goto Exit;
    if ((VAR_7 = FUNC_3(&VAR_1->header_protection, &VAR_1->aead, VAR_2->aead, VAR_2->hash, VAR_5, VAR_6)) != 0)
        goto Exit;

Exit:
    FUNC_0(VAR_6, sizeof(VAR_6));
    return VAR_7;
}
