
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {scalar_t__ frame_type; int end; int src; } ;
struct TYPE_13__ {int count; } ;
typedef TYPE_4__ quicly_streams_blocked_frame_t ;
typedef int quicly_maxsender_t ;
struct TYPE_12__ {scalar_t__ send_ack_at; } ;
struct TYPE_10__ {int * bidi; int * uni; } ;
struct TYPE_11__ {TYPE_1__ max_streams; } ;
struct TYPE_14__ {TYPE_3__ egress; TYPE_2__ ingress; } ;
typedef TYPE_5__ quicly_conn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_5__*,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_4__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_5(quicly_conn_t *VAR_2, struct st_quicly_handle_payload_state_t *VAR_3)
{
    quicly_streams_blocked_frame_t VAR_4;
    int VAR_5 = VAR_3->frame_type == VAR_0, VAR_6;

    if ((VAR_6 = FUNC_2(&VAR_3->src, VAR_3->end, &VAR_4)) != 0)
        return VAR_6;

    FUNC_0(VAR_1, VAR_2, FUNC_1(), VAR_4.count, VAR_5);

    quicly_maxsender_t *VAR_7 = VAR_5 ? VAR_2->ingress.max_streams.uni : VAR_2->ingress.max_streams.bidi;
    if (VAR_7 != ((void*)0)) {
        FUNC_3(VAR_7);
        if (FUNC_4(VAR_2, VAR_5))
            VAR_2->egress.send_ack_at = 0;
    }

    return 0;
}
