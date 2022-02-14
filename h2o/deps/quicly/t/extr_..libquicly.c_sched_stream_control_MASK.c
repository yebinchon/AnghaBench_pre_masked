
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int control; } ;
struct TYPE_14__ {TYPE_5__ pending_link; } ;
struct TYPE_15__ {scalar_t__ stream_id; TYPE_6__ _send_aux; TYPE_4__* conn; } ;
typedef TYPE_7__ quicly_stream_t ;
struct TYPE_9__ {int prev; } ;
struct TYPE_10__ {TYPE_1__ control; } ;
struct TYPE_11__ {TYPE_2__ streams; } ;
struct TYPE_12__ {TYPE_3__ pending; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(quicly_stream_t *VAR_0)
{
    FUNC_0(VAR_0->stream_id >= 0);

    if (!FUNC_2(&VAR_0->_send_aux.pending_link.control))
        FUNC_1(VAR_0->conn->pending.streams.control.prev, &VAR_0->_send_aux.pending_link.control);
}
