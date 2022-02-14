
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {int end; int src; } ;
struct TYPE_10__ {scalar_t__ max_data; } ;
typedef TYPE_3__ quicly_max_data_frame_t ;
struct TYPE_8__ {scalar_t__ permitted; } ;
struct TYPE_9__ {TYPE_1__ max_data; } ;
struct TYPE_11__ {TYPE_2__ egress; } ;
typedef TYPE_4__ quicly_conn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*,int ,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(quicly_conn_t *VAR_1, struct st_quicly_handle_payload_state_t *VAR_2)
{
    quicly_max_data_frame_t VAR_3;
    int VAR_4;

    if ((VAR_4 = FUNC_2(&VAR_2->src, VAR_2->end, &VAR_3)) != 0)
        return VAR_4;

    FUNC_0(VAR_0, VAR_1, FUNC_1(), VAR_3.max_data);

    if (VAR_3.max_data < VAR_1->egress.max_data.permitted)
        return 0;
    VAR_1->egress.max_data.permitted = VAR_3.max_data;

    return 0;
}
