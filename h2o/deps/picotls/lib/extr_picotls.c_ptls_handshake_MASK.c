
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {TYPE_7__* buf; } ;
struct st_ptls_record_message_emitter_t {TYPE_5__ super; } ;
struct TYPE_18__ {int state; TYPE_1__* ctx; } ;
typedef TYPE_2__ ptls_t ;
typedef int ptls_handshake_properties_t ;
struct TYPE_19__ {scalar_t__ off; } ;
typedef TYPE_3__ ptls_buffer_t ;
typedef int decryptbuf_small ;
struct TYPE_21__ {size_t off; int base; } ;
struct TYPE_17__ {int ** key_exchanges; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;



 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_5__*,TYPE_3__*,int const*,size_t*,int *) ;
 int FUNC_3 (TYPE_2__*,struct st_ptls_record_message_emitter_t*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *,int) ;
 int FUNC_6 (int ,size_t) ;
 int FUNC_7 (TYPE_2__*,TYPE_7__*,int ,int) ;
 int FUNC_8 (TYPE_2__*,TYPE_5__*,int *,int *) ;

int FUNC_9(ptls_t *VAR_5, ptls_buffer_t *VAR_6, const void *VAR_7, size_t *VAR_8, ptls_handshake_properties_t *VAR_9)
{
    struct st_ptls_record_message_emitter_t VAR_10;
    int VAR_11;

    FUNC_1(VAR_5->state < VAR_4);

    FUNC_3(VAR_5, &VAR_10, VAR_6);
    size_t VAR_12 = VAR_10.super.buf->off;


    switch (VAR_5->state) {
    case 128: {
        FUNC_1(VAR_7 == ((void*)0) || *VAR_8 == 0);
        FUNC_1(VAR_5->ctx->key_exchanges[0] != ((void*)0));
        return FUNC_8(VAR_5, &VAR_10.super, VAR_9, ((void*)0));
    }
    default:
        break;
    }

    const uint8_t *VAR_13 = VAR_7, *const VAR_14 = VAR_13 + *VAR_8;
    ptls_buffer_t VAR_15;
    uint8_t VAR_16[256];

    FUNC_5(&VAR_15, VAR_16, sizeof(VAR_16));


    VAR_11 = 130;
    while (VAR_11 == 130 && VAR_13 != VAR_14) {
        size_t VAR_17 = VAR_14 - VAR_13;
        VAR_11 = FUNC_2(VAR_5, &VAR_10.super, &VAR_15, VAR_13, &VAR_17, VAR_9);
        VAR_13 += VAR_17;
        FUNC_1(VAR_15.off == 0);
    }

    FUNC_4(&VAR_15);

    switch (VAR_11) {
    case 0:
    case 130:
    case 129:
        break;
    default:

        FUNC_6(VAR_10.super.buf->base + VAR_12, VAR_10.super.buf->off - VAR_12);
        VAR_10.super.buf->off = VAR_12;

        if (FUNC_0(VAR_11) != VAR_2)
            if (FUNC_7(VAR_5, VAR_10.super.buf, VAR_1,
                                FUNC_0(VAR_11) == VAR_3 ? VAR_11 : VAR_0) != 0)
                VAR_10.super.buf->off = VAR_12;
        break;
    }

    *VAR_8 -= VAR_14 - VAR_13;
    return VAR_11;
}
