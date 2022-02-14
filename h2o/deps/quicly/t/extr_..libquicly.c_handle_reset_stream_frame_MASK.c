
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct st_quicly_handle_payload_state_t {int end; int src; } ;
struct TYPE_17__ {TYPE_3__* callbacks; int recvstate; } ;
typedef TYPE_4__ quicly_stream_t ;
struct TYPE_18__ {int app_error_code; int final_offset; int stream_id; } ;
typedef TYPE_5__ quicly_reset_stream_frame_t ;
struct TYPE_14__ {int bytes_consumed; } ;
struct TYPE_15__ {TYPE_1__ max_data; } ;
struct TYPE_19__ {TYPE_2__ ingress; } ;
typedef TYPE_6__ quicly_conn_t ;
struct TYPE_16__ {int (* on_receive_reset ) (TYPE_4__*,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_6__*,int ,TYPE_4__**) ;
 int FUNC_3 (int *,int ,TYPE_5__*) ;
 int FUNC_4 (int *,int ,scalar_t__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_8(quicly_conn_t *VAR_0, struct st_quicly_handle_payload_state_t *VAR_1)
{
    quicly_reset_stream_frame_t VAR_2;
    quicly_stream_t *VAR_3;
    int VAR_4;

    if ((VAR_4 = FUNC_3(&VAR_1->src, VAR_1->end, &VAR_2)) != 0)
        return VAR_4;

    if ((VAR_4 = FUNC_2(VAR_0, VAR_2.stream_id, &VAR_3)) != 0 || VAR_3 == ((void*)0))
        return VAR_4;

    if (!FUNC_5(&VAR_3->recvstate)) {
        uint64_t VAR_5;
        if ((VAR_4 = FUNC_4(&VAR_3->recvstate, VAR_2.final_offset, &VAR_5)) != 0)
            return VAR_4;
        VAR_0->ingress.max_data.bytes_consumed += VAR_5;
        if ((VAR_4 = VAR_3->callbacks->on_receive_reset(VAR_3, FUNC_0(VAR_2.app_error_code))) !=
            0)
            return VAR_4;
        if (FUNC_6(VAR_3))
            FUNC_1(VAR_3, 0);
    }

    return 0;
}
