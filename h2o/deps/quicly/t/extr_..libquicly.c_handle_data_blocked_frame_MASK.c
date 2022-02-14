
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {int end; int src; } ;
struct TYPE_13__ {int offset; } ;
typedef TYPE_4__ quicly_data_blocked_frame_t ;
struct TYPE_10__ {scalar_t__ send_ack_at; } ;
struct TYPE_11__ {int sender; } ;
struct TYPE_12__ {TYPE_2__ max_data; } ;
struct TYPE_14__ {TYPE_1__ egress; TYPE_3__ ingress; } ;
typedef TYPE_5__ quicly_conn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_5__*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_4__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(quicly_conn_t *VAR_1, struct st_quicly_handle_payload_state_t *VAR_2)
{
    quicly_data_blocked_frame_t VAR_3;
    int VAR_4;

    if ((VAR_4 = FUNC_2(&VAR_2->src, VAR_2->end, &VAR_3)) != 0)
        return VAR_4;

    FUNC_0(VAR_0, VAR_1, FUNC_1(), VAR_3.offset);

    FUNC_3(&VAR_1->ingress.max_data.sender);
    if (FUNC_4(VAR_1))
        VAR_1->egress.send_ack_at = 0;

    return 0;
}
