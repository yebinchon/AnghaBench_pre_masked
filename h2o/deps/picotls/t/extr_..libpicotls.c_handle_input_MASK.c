
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef scalar_t__ uint32_t ;
struct st_ptls_record_t {int* fragment; int type; int length; } ;
struct TYPE_18__ {scalar_t__ early_data_skipped_bytes; } ;
struct TYPE_15__ {int * base; } ;
struct TYPE_17__ {int rec; TYPE_1__ mess; } ;
struct TYPE_14__ {int * aead; } ;
struct TYPE_16__ {TYPE_13__ dec; } ;
struct TYPE_19__ {scalar_t__ state; TYPE_4__ server; TYPE_3__ recvbuf; TYPE_2__ traffic_protection; scalar_t__ is_server; } ;
typedef TYPE_5__ ptls_t ;
typedef int ptls_message_emitter_t ;
typedef int ptls_handshake_properties_t ;
struct TYPE_20__ {int* base; int off; } ;
typedef TYPE_6__ ptls_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_13__*,int*,size_t*,int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int*,size_t) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_5__*,int ,int *,struct st_ptls_record_t*,int *) ;
 int FUNC_4 (TYPE_5__*,struct st_ptls_record_t*,void const*,size_t*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_7(ptls_t *VAR_11, ptls_message_emitter_t *VAR_12, ptls_buffer_t *VAR_13, const void *VAR_14, size_t *VAR_15,
                        ptls_handshake_properties_t *VAR_16)
{
    struct st_ptls_record_t VAR_17;
    int VAR_18;


    if ((VAR_18 = FUNC_4(VAR_11, &VAR_17, VAR_14, VAR_15)) != 0)
        return VAR_18;
    FUNC_1(VAR_17.fragment != ((void*)0));


    if (VAR_17.type == VAR_3) {
        if (VAR_11->state < VAR_7) {
            if (!(VAR_17.length == 1 && VAR_17.fragment[0] == 0x01))
                return VAR_1;
        } else {
            return VAR_0;
        }
        VAR_18 = VAR_5;
        goto NextRecord;
    }
    if (VAR_11->traffic_protection.dec.aead != ((void*)0) && VAR_17.type != 129) {
        size_t VAR_19;
        if (VAR_17.type != 128)
            return VAR_0;
        if ((VAR_18 = FUNC_6(VAR_13, 5 + VAR_17.length)) != 0)
            return VAR_18;
        if ((VAR_18 = FUNC_0(&VAR_11->traffic_protection.dec, VAR_13->base + VAR_13->off, &VAR_19, VAR_17.fragment,
                                VAR_17.length)) != 0) {
            if (VAR_11->is_server && VAR_11->server.early_data_skipped_bytes != VAR_9)
                goto ServerSkipEarlyData;
            return VAR_18;
        }
        VAR_17.length = VAR_19;
        VAR_17.fragment = VAR_13->base + VAR_13->off;

        for (; VAR_17.length != 0; --VAR_17.length)
            if (VAR_17.fragment[VAR_17.length - 1] != 0)
                break;
        if (VAR_17.length == 0)
            return VAR_2;
        VAR_17.type = VAR_17.fragment[--VAR_17.length];
    } else if (VAR_17.type == 128 && VAR_11->is_server && VAR_11->server.early_data_skipped_bytes != VAR_9) {
        goto ServerSkipEarlyData;
    }

    if (VAR_11->recvbuf.mess.base != ((void*)0) || VAR_17.type == VAR_4) {

        VAR_18 = FUNC_3(VAR_11, VAR_10, VAR_12, &VAR_17, VAR_16);
    } else {

        switch (VAR_17.type) {
        case 128:
            if (VAR_11->state >= VAR_7) {
                VAR_13->off += VAR_17.length;
                VAR_18 = 0;
            } else if (VAR_11->state == VAR_8) {
                if (VAR_11->traffic_protection.dec.aead != ((void*)0))
                    VAR_13->off += VAR_17.length;
                VAR_18 = 0;
            } else {
                VAR_18 = VAR_2;
            }
            break;
        case 129:
            VAR_18 = FUNC_2(VAR_11, VAR_17.fragment, VAR_17.length);
            break;
        default:
            VAR_18 = VAR_2;
            break;
        }
    }

NextRecord:
    FUNC_5(&VAR_11->recvbuf.rec);
    return VAR_18;

ServerSkipEarlyData:
    VAR_11->server.early_data_skipped_bytes += (uint32_t)VAR_17.length;
    if (VAR_11->server.early_data_skipped_bytes > VAR_6)
        return VAR_0;
    VAR_18 = VAR_5;
    goto NextRecord;
}
