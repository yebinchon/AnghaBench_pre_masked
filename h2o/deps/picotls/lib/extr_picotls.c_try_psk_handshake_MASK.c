
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_21__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef int verify_data ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_37__ {size_t count; struct st_ptls_client_hello_psk_t* list; } ;
struct TYPE_38__ {TYPE_4__ identities; scalar_t__ early_data_indication; } ;
struct st_ptls_client_hello_t {TYPE_5__ psk; } ;
struct TYPE_36__ {scalar_t__ len; int base; } ;
struct st_ptls_client_hello_psk_t {TYPE_3__ binder; scalar_t__ obfuscated_ticket_age; int identity; } ;
struct TYPE_41__ {TYPE_21__* key_schedule; TYPE_9__* key_share; int * negotiated_protocol; TYPE_2__* cipher_suite; TYPE_1__* ctx; int * server_name; } ;
typedef TYPE_8__ ptls_t ;
struct TYPE_42__ {scalar_t__ id; } ;
typedef TYPE_9__ ptls_key_exchange_algorithm_t ;
struct TYPE_29__ {scalar_t__ len; int base; } ;
typedef TYPE_10__ ptls_iovec_t ;
struct TYPE_30__ {scalar_t__ off; scalar_t__ base; } ;
typedef TYPE_11__ ptls_buffer_t ;
typedef scalar_t__ int64_t ;
typedef int decbuf_small ;
typedef int binder_key ;
struct TYPE_40__ {TYPE_6__* algo; } ;
struct TYPE_39__ {scalar_t__ digest_size; } ;
struct TYPE_35__ {scalar_t__ id; } ;
struct TYPE_34__ {TYPE_7__* hashes; } ;
struct TYPE_33__ {TYPE_9__** key_exchanges; scalar_t__ ticket_lifetime; TYPE_15__* encrypt_ticket; TYPE_18__* get_time; } ;
struct TYPE_32__ {scalar_t__ (* cb ) (TYPE_18__*) ;} ;
struct TYPE_31__ {int (* cb ) (TYPE_15__*,TYPE_8__*,int ,TYPE_11__*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,TYPE_21__*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_10__*,scalar_t__*,TYPE_10__*,scalar_t__*,scalar_t__*,TYPE_10__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_21__*,int *,char*) ;
 int FUNC_3 (TYPE_21__*,TYPE_10__) ;
 int FUNC_4 (TYPE_21__*,int ,scalar_t__) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_11__*,int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_18__*) ;
 int FUNC_10 (TYPE_15__*,TYPE_8__*,int ,TYPE_11__*,int ) ;
 int FUNC_11 (TYPE_10__,int *) ;

__attribute__((used)) static int FUNC_12(ptls_t *VAR_4, size_t *VAR_5, int *VAR_6, struct st_ptls_client_hello_t *VAR_7,
                             ptls_iovec_t VAR_8)
{
    ptls_buffer_t VAR_9;
    ptls_iovec_t VAR_10, VAR_11, VAR_12;
    uint64_t VAR_13, VAR_14 = VAR_4->ctx->get_time->cb(VAR_4->ctx->get_time);
    uint32_t VAR_15;
    uint16_t VAR_16, VAR_17;
    uint8_t VAR_18[256], VAR_19[VAR_2], VAR_20[VAR_2];
    int VAR_21;

    FUNC_6(&VAR_9, VAR_18, sizeof(VAR_18));

    for (*VAR_5 = 0; *VAR_5 < VAR_7->psk.identities.count; ++*VAR_5) {
        struct st_ptls_client_hello_psk_t *VAR_22 = VAR_7->psk.identities.list + *VAR_5;

        int VAR_23 = 1;
        VAR_9.off = 0;
        switch (VAR_4->ctx->encrypt_ticket->cb(VAR_4->ctx->encrypt_ticket, VAR_4, 0, &VAR_9, VAR_22->identity)) {
        case 0:
            break;
        case 128:
            VAR_23 = 0;
            break;
        default:
            continue;
        }
        if (FUNC_1(&VAR_13, &VAR_10, &VAR_15, &VAR_11, &VAR_16, &VAR_17,
                                      &VAR_12, VAR_9.base, VAR_9.base + VAR_9.off) != 0)
            continue;

        if (VAR_14 < VAR_13)
            continue;
        if (VAR_14 - VAR_13 > (uint64_t)VAR_4->ctx->ticket_lifetime * 1000)
            continue;
        *VAR_6 = 0;
        if (VAR_7->psk.early_data_indication && VAR_23) {

            int64_t VAR_24 = (VAR_14 - VAR_13) - (VAR_22->obfuscated_ticket_age - VAR_15);
            if (VAR_24 < 0)
                VAR_24 = -VAR_24;
            if (VAR_24 <= VAR_1)
                *VAR_6 = 1;
        }

        if (VAR_11.len != 0) {
            if (VAR_4->server_name == ((void*)0))
                continue;
            if (!FUNC_11(VAR_11, VAR_4->server_name))
                continue;
        } else {
            if (VAR_4->server_name != ((void*)0))
                continue;
        }
        {
            ptls_key_exchange_algorithm_t **VAR_25;
            for (VAR_25 = VAR_4->ctx->key_exchanges; *VAR_25 != ((void*)0) && (*VAR_25)->id != VAR_16; ++VAR_25)
                ;
            if (*VAR_25 == ((void*)0))
                continue;
            VAR_4->key_share = *VAR_25;
        }

        if (VAR_17 != VAR_4->cipher_suite->id)
            continue;

        if (VAR_12.len != 0) {
            if (VAR_4->negotiated_protocol == ((void*)0))
                continue;
            if (!FUNC_11(VAR_12, VAR_4->negotiated_protocol))
                continue;
        }

        if (VAR_10.len != VAR_4->key_schedule->hashes[0].algo->digest_size)
            continue;
        if (VAR_7->psk.identities.list[*VAR_5].binder.len != VAR_4->key_schedule->hashes[0].algo->digest_size)
            continue;


        goto Found;
    }


    *VAR_5 = VAR_3;
    *VAR_6 = 0;
    VAR_4->key_share = ((void*)0);
    VAR_21 = 0;
    goto Exit;

Found:
    if ((VAR_21 = FUNC_3(VAR_4->key_schedule, VAR_10)) != 0)
        goto Exit;
    if ((VAR_21 = FUNC_2(VAR_4->key_schedule, VAR_19, "res binder")) != 0)
        goto Exit;
    FUNC_4(VAR_4->key_schedule, VAR_8.base, VAR_8.len);
    if ((VAR_21 = FUNC_0(VAR_20, VAR_4->key_schedule, VAR_19)) != 0)
        goto Exit;
    if (!FUNC_8(VAR_7->psk.identities.list[*VAR_5].binder.base, VAR_20,
                        VAR_4->key_schedule->hashes[0].algo->digest_size)) {
        VAR_21 = VAR_0;
        goto Exit;
    }
    VAR_21 = 0;

Exit:
    FUNC_5(&VAR_9);
    FUNC_7(VAR_19, sizeof(VAR_19));
    FUNC_7(VAR_20, sizeof(VAR_20));
    return VAR_21;
}
