
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {scalar_t__ frame_type; int end; int src; } ;
struct TYPE_11__ {int count; } ;
typedef TYPE_3__ quicly_max_streams_frame_t ;
struct TYPE_9__ {int bidi; int uni; } ;
struct TYPE_10__ {TYPE_1__ max_streams; } ;
struct TYPE_12__ {TYPE_2__ egress; } ;
typedef TYPE_4__ quicly_conn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_4__*,int ,int ,int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,TYPE_3__*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(quicly_conn_t *VAR_2, struct st_quicly_handle_payload_state_t *VAR_3)
{
    quicly_max_streams_frame_t VAR_4;
    int VAR_5 = VAR_3->frame_type == VAR_1, VAR_6;

    if ((VAR_6 = FUNC_3(&VAR_3->src, VAR_3->end, &VAR_4)) != 0)
        return VAR_6;

    FUNC_0(VAR_0, VAR_2, FUNC_2(), VAR_4.count, VAR_5);

    if ((VAR_6 = FUNC_4(VAR_5 ? &VAR_2->egress.max_streams.uni : &VAR_2->egress.max_streams.bidi, VAR_4.count)) != 0)
        return VAR_6;

    FUNC_1(VAR_2, VAR_5);

    return 0;
}
