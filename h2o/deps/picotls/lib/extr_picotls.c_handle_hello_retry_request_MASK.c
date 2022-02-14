
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ selected_group; int cookie; } ;
struct st_ptls_server_hello_t {TYPE_5__ retry_request; } ;
struct TYPE_15__ {scalar_t__ using_early_data; TYPE_9__* key_share_ctx; } ;
struct TYPE_13__ {int * aead; } ;
struct TYPE_14__ {TYPE_1__ enc; } ;
struct TYPE_18__ {int key_schedule; TYPE_7__* key_share; TYPE_4__* ctx; TYPE_3__ client; TYPE_2__ traffic_protection; } ;
typedef TYPE_6__ ptls_t ;
typedef int ptls_message_emitter_t ;
struct TYPE_19__ {scalar_t__ id; } ;
typedef TYPE_7__ ptls_key_exchange_algorithm_t ;
struct TYPE_20__ {int len; int base; } ;
typedef TYPE_8__ ptls_iovec_t ;
typedef int ptls_handshake_properties_t ;
struct TYPE_21__ {int (* on_exchange ) (TYPE_9__**,int,int *,int ) ;} ;
struct TYPE_16__ {TYPE_7__** key_exchanges; int * update_traffic_key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_6__*,int *,int *,int *) ;
 int FUNC_6 (TYPE_9__**,int,int *,int ) ;

__attribute__((used)) static int FUNC_7(ptls_t *VAR_2, ptls_message_emitter_t *VAR_3, struct st_ptls_server_hello_t *VAR_4,
                                      ptls_iovec_t VAR_5, ptls_handshake_properties_t *VAR_6)
{
    int VAR_7;

    if (VAR_2->client.key_share_ctx != ((void*)0)) {
        VAR_2->client.key_share_ctx->on_exchange(&VAR_2->client.key_share_ctx, 1, ((void*)0), FUNC_4(((void*)0), 0));
        VAR_2->client.key_share_ctx = ((void*)0);
    }
    if (VAR_2->client.using_early_data) {


        if (VAR_2->ctx->update_traffic_key == ((void*)0)) {
            FUNC_0(VAR_2->traffic_protection.enc.aead != ((void*)0));
            FUNC_3(VAR_2->traffic_protection.enc.aead);
            VAR_2->traffic_protection.enc.aead = ((void*)0);
        }
        VAR_2->client.using_early_data = 0;
    }

    if (VAR_4->retry_request.selected_group != VAR_1) {

        ptls_key_exchange_algorithm_t **VAR_8;
        for (VAR_8 = VAR_2->ctx->key_exchanges; *VAR_8 != ((void*)0); ++VAR_8)
            if ((*VAR_8)->id == VAR_4->retry_request.selected_group)
                break;
        if (*VAR_8 == ((void*)0)) {
            VAR_7 = VAR_0;
            goto Exit;
        }
        VAR_2->key_share = *VAR_8;
    } else if (VAR_2->key_share != ((void*)0)) {

    } else {
        VAR_7 = VAR_0;
        goto Exit;
    }

    FUNC_1(VAR_2->key_schedule);
    FUNC_2(VAR_2->key_schedule, VAR_5.base, VAR_5.len);
    VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_6, &VAR_4->retry_request.cookie);

Exit:
    return VAR_7;
}
