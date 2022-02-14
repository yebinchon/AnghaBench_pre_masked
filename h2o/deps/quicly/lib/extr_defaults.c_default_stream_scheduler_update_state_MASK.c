
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_quicly_default_scheduler_state_t {int dummy; } ;
struct _st_quicly_conn_public_t {struct st_quicly_default_scheduler_state_t _default_scheduler; } ;
struct TYPE_6__ {int default_scheduler; } ;
struct TYPE_7__ {TYPE_1__ pending_link; int max_stream_data; } ;
struct TYPE_8__ {TYPE_2__ _send_aux; scalar_t__ conn; int sendstate; } ;
typedef TYPE_3__ quicly_stream_t ;
typedef int quicly_stream_scheduler_t ;


 int FUNC_0 (struct st_quicly_default_scheduler_state_t*,TYPE_3__*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(quicly_stream_scheduler_t *VAR_0, quicly_stream_t *VAR_1)
{
    struct st_quicly_default_scheduler_state_t *VAR_2 = &((struct _st_quicly_conn_public_t *)VAR_1->conn)->_default_scheduler;

    if (FUNC_4(&VAR_1->sendstate, &VAR_1->_send_aux.max_stream_data)) {

        FUNC_0(VAR_2, VAR_1, FUNC_1(VAR_1->conn));
    } else {

        if (FUNC_2(&VAR_1->_send_aux.pending_link.default_scheduler))
            FUNC_3(&VAR_1->_send_aux.pending_link.default_scheduler);
    }

    return 0;
}
