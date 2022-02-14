
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {size_t size; TYPE_6__* entries; } ;
struct TYPE_13__ {size_t off_within_first_vec; size_t min_index_to_addref; int proceed_called; TYPE_2__ vecs; } ;
struct st_h2o_http3_server_stream_t {int send_state; TYPE_4__* quic; TYPE_3__ sendbuf; int req; } ;
struct TYPE_15__ {struct st_h2o_http3_server_stream_t* data; } ;
typedef TYPE_5__ quicly_stream_t ;
struct TYPE_16__ {size_t len; TYPE_1__* callbacks; } ;
struct TYPE_14__ {int sendstate; } ;
struct TYPE_11__ {int (* update_refcnt ) (TYPE_6__*,int *,int ) ;} ;




 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,TYPE_6__*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*,int *,int ) ;
 int FUNC_4 (TYPE_6__*,int *,int ) ;

__attribute__((used)) static void FUNC_5(quicly_stream_t *VAR_0, size_t VAR_1)
{
    struct st_h2o_http3_server_stream_t *VAR_2 = VAR_0->data;
    size_t VAR_3;

    FUNC_0(VAR_1 != 0);
    FUNC_0(VAR_2->sendbuf.vecs.size != 0);

    size_t VAR_4 = VAR_2->sendbuf.vecs.entries[0].len - VAR_2->sendbuf.off_within_first_vec;
    if (VAR_1 < VAR_4) {
        VAR_2->sendbuf.off_within_first_vec += VAR_1;
        return;
    }
    VAR_1 -= VAR_4;
    VAR_2->sendbuf.off_within_first_vec = 0;
    if (VAR_2->sendbuf.min_index_to_addref != 0)
        VAR_2->sendbuf.vecs.entries[0].callbacks->update_refcnt(VAR_2->sendbuf.vecs.entries, &VAR_2->req, 0);

    for (VAR_3 = 1; VAR_1 != 0; ++VAR_3) {
        FUNC_0(VAR_3 < VAR_2->sendbuf.vecs.size);
        if (VAR_1 < VAR_2->sendbuf.vecs.entries[VAR_3].len) {
            VAR_2->sendbuf.off_within_first_vec = VAR_1;
            break;
        }
        VAR_1 -= VAR_2->sendbuf.vecs.entries[VAR_3].len;
        if (VAR_3 < VAR_2->sendbuf.min_index_to_addref)
            VAR_2->sendbuf.vecs.entries[VAR_3].callbacks->update_refcnt(VAR_2->sendbuf.vecs.entries + VAR_3, &VAR_2->req, 0);
    }
    FUNC_1(VAR_2->sendbuf.vecs.entries, VAR_2->sendbuf.vecs.entries + VAR_3,
            (VAR_2->sendbuf.vecs.size - VAR_3) * sizeof(VAR_2->sendbuf.vecs.entries[0]));
    VAR_2->sendbuf.vecs.size -= VAR_3;
    if (VAR_2->sendbuf.min_index_to_addref <= VAR_3) {
        VAR_2->sendbuf.min_index_to_addref = 0;
    } else {
        VAR_2->sendbuf.min_index_to_addref -= VAR_3;
    }

    if (VAR_2->sendbuf.vecs.size == 0) {
        switch (VAR_2->send_state) {
        case 128:
            FUNC_0(VAR_2->sendbuf.proceed_called);
            break;
        case 129:
            FUNC_0(FUNC_2(&VAR_2->quic->sendstate));
            break;
        default:
            FUNC_0(!"unexpected state");
            break;
        }
    }
}
