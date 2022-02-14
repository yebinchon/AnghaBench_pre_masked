
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {int len; int base; } ;
typedef TYPE_2__ ptls_iovec_t ;
struct TYPE_19__ {int pubkey; TYPE_5__* key_share; int record_digest; TYPE_9__* cipher; int padded_length; } ;
struct TYPE_21__ {TYPE_1__ client; int esni_contents_hash; int secret; int nonce; int version; } ;
typedef TYPE_3__ ptls_esni_secret_t ;
struct TYPE_22__ {int (* random_bytes ) (int ,int) ;} ;
typedef TYPE_4__ ptls_context_t ;
struct TYPE_24__ {int hash; } ;
struct TYPE_23__ {int (* exchange ) (TYPE_5__*,int *,int *,TYPE_2__) ;int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int const*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**,int ) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *,TYPE_5__**,TYPE_9__**,TYPE_2__*,int *,char**,TYPE_2__) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_5__*,int *,int *,TYPE_2__) ;

__attribute__((used)) static int FUNC_9(ptls_context_t *VAR_1, ptls_esni_secret_t **VAR_2, ptls_iovec_t VAR_3, char **VAR_4,
                             const uint8_t *VAR_5)
{
    ptls_iovec_t VAR_6;
    int VAR_7;

    if ((*VAR_2 = FUNC_3(sizeof(**VAR_2))) == ((void*)0))
        return VAR_0;
    FUNC_4(*VAR_2, 0, sizeof(**VAR_2));


    if (FUNC_5(VAR_1, &(*VAR_2)->version, &(*VAR_2)->client.key_share, &(*VAR_2)->client.cipher, &VAR_6,
                        &(*VAR_2)->client.padded_length, VAR_4, VAR_3) != 0) {
        FUNC_1(*VAR_2);
        *VAR_2 = ((void*)0);
        return 0;
    }

    VAR_1->random_bytes((*VAR_2)->nonce, sizeof((*VAR_2)->nonce));


    if ((VAR_7 = FUNC_6((*VAR_2)->client.cipher->hash, (*VAR_2)->client.record_digest, VAR_3.base, VAR_3.len)) != 0)
        goto Exit;

    if ((VAR_7 = (*VAR_2)->client.key_share->exchange((*VAR_2)->client.key_share, &(*VAR_2)->client.pubkey, &(*VAR_2)->secret,
                                                   VAR_6)) != 0)
        goto Exit;

    if ((VAR_7 = FUNC_0((*VAR_2)->client.cipher->hash, (*VAR_2)->esni_contents_hash, (*VAR_2)->client.record_digest,
                                        (*VAR_2)->client.key_share->id, (*VAR_2)->client.pubkey, VAR_5)) != 0)
        goto Exit;

    VAR_7 = 0;
Exit:
    if (VAR_7 != 0)
        FUNC_2(VAR_2, 0);
    return VAR_7;
}
