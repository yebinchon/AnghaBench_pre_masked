
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_23__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_18__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef char uint8_t ;
struct TYPE_37__ {int len; int base; } ;
struct TYPE_35__ {int len; int base; } ;
struct TYPE_36__ {TYPE_6__ encrypted_sni; TYPE_18__* cipher; int peer_key; TYPE_4__* key_share; int record_digest; } ;
struct st_ptls_client_hello_t {TYPE_8__ key_shares; TYPE_7__ esni; int random_bytes; } ;
struct TYPE_38__ {int (* on_exchange ) (TYPE_9__**,int ,int *,int ) ;TYPE_3__* algo; } ;
typedef TYPE_9__ ptls_key_exchange_context_t ;
struct TYPE_24__ {int len; int base; } ;
typedef TYPE_10__ ptls_iovec_t ;
struct TYPE_25__ {int nonce; int esni_contents_hash; int secret; int version; } ;
typedef TYPE_11__ ptls_esni_secret_t ;
struct TYPE_26__ {int padded_length; TYPE_9__** key_exchanges; int version; TYPE_2__* cipher_suites; } ;
typedef TYPE_12__ ptls_esni_context_t ;
struct TYPE_27__ {TYPE_12__** esni; } ;
typedef TYPE_13__ ptls_context_t ;
typedef int ptls_aead_context_t ;
struct TYPE_34__ {int tag_size; } ;
struct TYPE_33__ {scalar_t__ id; } ;
struct TYPE_32__ {scalar_t__ id; } ;
struct TYPE_31__ {int record_digest; TYPE_1__* cipher_suite; } ;
struct TYPE_30__ {int digest_size; } ;
struct TYPE_29__ {scalar_t__ id; } ;
struct TYPE_28__ {scalar_t__ id; TYPE_5__* aead; TYPE_23__* hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_23__*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (TYPE_10__*,char const**,char const* const) ;
 int FUNC_3 (int **,int ,TYPE_18__*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_11__**,int) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,char const*,int) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (TYPE_11__*,int ,int) ;
 int FUNC_11 (int *,char*,int ,int,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 TYPE_10__ FUNC_13 (char*,int ) ;
 int FUNC_14 (TYPE_9__**,int ,int *,int ) ;

__attribute__((used)) static int FUNC_15(ptls_context_t *VAR_4, ptls_iovec_t *VAR_5, ptls_esni_secret_t **VAR_6,
                                     struct st_ptls_client_hello_t *VAR_7)
{
    ptls_esni_context_t **VAR_8;
    ptls_key_exchange_context_t **VAR_9;
    uint8_t *VAR_10 = ((void*)0);
    ptls_aead_context_t *VAR_11 = ((void*)0);
    int VAR_12;


    FUNC_0(*VAR_6 == ((void*)0));
    if ((*VAR_6 = FUNC_6(sizeof(**VAR_6))) == ((void*)0))
        return VAR_2;
    FUNC_10(*VAR_6, 0, sizeof(**VAR_6));


    for (VAR_8 = VAR_4->esni; *VAR_8 != ((void*)0); ++VAR_8) {
        size_t VAR_13;
        for (VAR_13 = 0; (*VAR_8)->cipher_suites[VAR_13].cipher_suite != ((void*)0); ++VAR_13)
            if ((*VAR_8)->cipher_suites[VAR_13].cipher_suite->id == VAR_7->esni.cipher->id)
                break;
        if ((*VAR_8)->cipher_suites[VAR_13].cipher_suite == ((void*)0)) {
            VAR_12 = VAR_1;
            goto Exit;
        }
        if (FUNC_7((*VAR_8)->cipher_suites[VAR_13].record_digest, VAR_7->esni.record_digest, VAR_7->esni.cipher->hash->digest_size) == 0) {
            (*VAR_6)->version = (*VAR_8)->version;
            break;
        }
    }
    if (*VAR_8 == ((void*)0)) {
        VAR_12 = VAR_1;
        goto Exit;
    }


    for (VAR_9 = (*VAR_8)->key_exchanges; *VAR_9 != ((void*)0); ++VAR_9)
        if ((*VAR_9)->algo->id == VAR_7->esni.key_share->id)
            break;
    if (*VAR_9 == ((void*)0)) {
        VAR_12 = VAR_1;
        goto Exit;
    }


    if ((VAR_12 = FUNC_1(VAR_7->esni.cipher->hash, (*VAR_6)->esni_contents_hash, VAR_7->esni.record_digest,
                                        VAR_7->esni.key_share->id, VAR_7->esni.peer_key, VAR_7->random_bytes)) != 0)
        goto Exit;

    if ((VAR_12 = (*VAR_9)->on_exchange(VAR_9, 0, &(*VAR_6)->secret, VAR_7->esni.peer_key)) != 0)
        goto Exit;

    if (VAR_7->esni.encrypted_sni.len - VAR_7->esni.cipher->aead->tag_size != (*VAR_8)->padded_length + VAR_3) {
        VAR_12 = VAR_1;
        goto Exit;
    }
    if ((VAR_10 = FUNC_6((*VAR_8)->padded_length + VAR_3)) == ((void*)0)) {
        VAR_12 = VAR_2;
        goto Exit;
    }
    if ((VAR_12 = FUNC_3(&VAR_11, 0, VAR_7->esni.cipher, (*VAR_6)->secret, (*VAR_6)->esni_contents_hash)) != 0)
        goto Exit;
    if (FUNC_11(VAR_11, VAR_10, VAR_7->esni.encrypted_sni.base, VAR_7->esni.encrypted_sni.len, 0, VAR_7->key_shares.base,
                          VAR_7->key_shares.len) != (*VAR_8)->padded_length + VAR_3) {
        VAR_12 = VAR_0;
        goto Exit;
    }
    FUNC_12(VAR_11);
    VAR_11 = ((void*)0);

    {
        const uint8_t *VAR_14 = VAR_10, *const VAR_15 = VAR_14 + (*VAR_8)->padded_length;
        ptls_iovec_t VAR_16;
        if (VAR_15 - VAR_14 < VAR_3) {
            VAR_12 = VAR_1;
            goto Exit;
        }
        FUNC_8((*VAR_6)->nonce, VAR_14, VAR_3);
        VAR_14 += VAR_3;
        if ((VAR_12 = FUNC_2(&VAR_16, &VAR_14, VAR_15)) != 0)
            goto Exit;
        for (; VAR_14 != VAR_15; ++VAR_14) {
            if (*VAR_14 != '\0') {
                VAR_12 = VAR_1;
                goto Exit;
            }
        }

        FUNC_9(VAR_10, VAR_16.base, VAR_16.len);
        *VAR_5 = FUNC_13(VAR_10, VAR_16.len);
        VAR_10 = ((void*)0);
    }

    VAR_12 = 0;
Exit:
    if (VAR_10 != ((void*)0))
        FUNC_4(VAR_10);
    if (VAR_11 != ((void*)0))
        FUNC_12(VAR_11);
    if (VAR_12 != 0 && *VAR_6 != ((void*)0))
        FUNC_5(VAR_6, 1);
    return VAR_12;
}
