
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_24__ {int verify_ctx; int (* cb ) (int ,int ,int ) ;} ;
struct TYPE_21__ {TYPE_9__* base; } ;
struct TYPE_22__ {TYPE_5__ context; } ;
struct TYPE_23__ {TYPE_6__ certificate_request; TYPE_10__* key_share_ctx; } ;
struct TYPE_19__ {int * aead; } ;
struct TYPE_18__ {int * aead; } ;
struct TYPE_20__ {TYPE_3__ enc; TYPE_2__ dec; } ;
struct TYPE_17__ {int mess; int rec; } ;
struct TYPE_25__ {int ctx; struct TYPE_25__* pending_handshake_secret; TYPE_8__ certificate_verify; TYPE_7__ client; scalar_t__ is_server; struct TYPE_25__* negotiated_protocol; struct TYPE_25__* server_name; TYPE_4__ traffic_protection; int * key_schedule; int * esni; TYPE_1__ recvbuf; } ;
typedef TYPE_9__ ptls_t ;
struct TYPE_16__ {int (* on_exchange ) (TYPE_10__**,int,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int **,scalar_t__) ;
 int FUNC_3 (TYPE_9__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_9__*,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_10__**,int,int *,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int) ;

void FUNC_12(ptls_t *VAR_2)
{
    FUNC_0(VAR_0, VAR_2);
    FUNC_6(&VAR_2->recvbuf.rec);
    FUNC_6(&VAR_2->recvbuf.mess);
    FUNC_3(VAR_2, 1);
    FUNC_3(VAR_2, 0);
    if (VAR_2->esni != ((void*)0))
        FUNC_2(&VAR_2->esni, VAR_2->is_server);
    if (VAR_2->key_schedule != ((void*)0))
        FUNC_4(VAR_2->key_schedule);
    if (VAR_2->traffic_protection.dec.aead != ((void*)0))
        FUNC_5(VAR_2->traffic_protection.dec.aead);
    if (VAR_2->traffic_protection.enc.aead != ((void*)0))
        FUNC_5(VAR_2->traffic_protection.enc.aead);
    FUNC_1(VAR_2->server_name);
    FUNC_1(VAR_2->negotiated_protocol);
    if (VAR_2->is_server) {

    } else {
        if (VAR_2->client.key_share_ctx != ((void*)0))
            VAR_2->client.key_share_ctx->on_exchange(&VAR_2->client.key_share_ctx, 1, ((void*)0), FUNC_8(((void*)0), 0));
        if (VAR_2->client.certificate_request.context.base != ((void*)0))
            FUNC_1(VAR_2->client.certificate_request.context.base);
    }
    if (VAR_2->certificate_verify.cb != ((void*)0)) {
        VAR_2->certificate_verify.cb(VAR_2->certificate_verify.verify_ctx, FUNC_8(((void*)0), 0), FUNC_8(((void*)0), 0));
    }
    if (VAR_2->pending_handshake_secret != ((void*)0)) {
        FUNC_7(VAR_2->pending_handshake_secret, VAR_1);
        FUNC_1(VAR_2->pending_handshake_secret);
    }
    FUNC_11(VAR_2->ctx, -1);
    FUNC_7(VAR_2, sizeof(*VAR_2));
    FUNC_1(VAR_2);
}
