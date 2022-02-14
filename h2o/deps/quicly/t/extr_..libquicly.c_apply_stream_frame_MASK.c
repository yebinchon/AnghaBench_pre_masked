
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_27__ {int num_ranges; TYPE_2__* ranges; } ;
struct TYPE_23__ {size_t data_off; TYPE_3__ received; } ;
struct TYPE_24__ {scalar_t__ window; } ;
struct TYPE_33__ {scalar_t__ stream_id; TYPE_7__* callbacks; TYPE_15__ recvstate; TYPE_20__* conn; TYPE_1__ _recv_aux; } ;
typedef TYPE_9__ quicly_stream_t ;
struct TYPE_32__ {scalar_t__ len; size_t base; } ;
struct TYPE_22__ {scalar_t__ offset; TYPE_8__ data; int is_fin; } ;
typedef TYPE_10__ quicly_stream_frame_t ;
typedef scalar_t__ int64_t ;
struct TYPE_31__ {int (* on_receive ) (TYPE_9__*,size_t,size_t,size_t) ;} ;
struct TYPE_28__ {scalar_t__ max_committed; } ;
struct TYPE_29__ {scalar_t__ bytes_consumed; TYPE_4__ sender; } ;
struct TYPE_30__ {TYPE_5__ max_data; } ;
struct TYPE_26__ {scalar_t__ end; } ;
struct TYPE_25__ {TYPE_6__ ingress; } ;


 int FUNC_0 (int ,TYPE_20__*,int ,TYPE_9__*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_9__*,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_15__*) ;
 int FUNC_4 (TYPE_15__*,scalar_t__,size_t*,int ) ;
 int FUNC_5 (TYPE_9__*) ;
 scalar_t__ FUNC_6 (TYPE_9__*) ;
 scalar_t__ FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_9__*,size_t,size_t,size_t) ;

__attribute__((used)) static int FUNC_9(quicly_stream_t *VAR_2, quicly_stream_frame_t *VAR_3)
{
    int VAR_4;

    FUNC_0(VAR_1, VAR_2->conn, FUNC_2(), VAR_2, VAR_3->offset, VAR_3->data.len);

    if (FUNC_3(&VAR_2->recvstate))
        return 0;

    if (VAR_2->stream_id >= 0) {

        uint64_t VAR_5 = VAR_3->offset + VAR_3->data.len;
        if ((int64_t)VAR_2->_recv_aux.window < (int64_t)VAR_5 - (int64_t)VAR_2->recvstate.data_off)
            return VAR_0;
        if (VAR_2->recvstate.received.ranges[VAR_2->recvstate.received.num_ranges - 1].end < VAR_5) {
            uint64_t VAR_6 =
                VAR_5 - VAR_2->recvstate.received.ranges[VAR_2->recvstate.received.num_ranges - 1].end;
            if (VAR_2->conn->ingress.max_data.bytes_consumed + VAR_6 >
                VAR_2->conn->ingress.max_data.sender.max_committed)
                return VAR_0;
            VAR_2->conn->ingress.max_data.bytes_consumed += VAR_6;

        }
    }


    size_t VAR_7 = VAR_3->data.len;
    if ((VAR_4 = FUNC_4(&VAR_2->recvstate, VAR_3->offset, &VAR_7, VAR_3->is_fin)) != 0)
        return VAR_4;

    if (VAR_7 != 0 || FUNC_3(&VAR_2->recvstate)) {
        uint64_t VAR_8 = VAR_3->offset + VAR_3->data.len - VAR_7 - VAR_2->recvstate.data_off;
        if ((VAR_4 = VAR_2->callbacks->on_receive(VAR_2, (size_t)VAR_8, VAR_3->data.base + VAR_3->data.len - VAR_7,
                                                 VAR_7)) != 0)
            return VAR_4;
    }

    if (FUNC_6(VAR_2))
        FUNC_5(VAR_2);

    if (FUNC_7(VAR_2))
        FUNC_1(VAR_2, 0);

    return 0;
}
