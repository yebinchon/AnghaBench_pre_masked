
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct st_quicly_conn_streamgroup_state_t {int dummy; } ;
typedef int quicly_stream_id_t ;
struct TYPE_8__ {struct st_quicly_conn_streamgroup_state_t bidi; struct st_quicly_conn_streamgroup_state_t uni; } ;
struct TYPE_7__ {struct st_quicly_conn_streamgroup_state_t bidi; struct st_quicly_conn_streamgroup_state_t uni; } ;
struct TYPE_9__ {TYPE_2__ peer; TYPE_1__ host; } ;
struct TYPE_10__ {TYPE_3__ super; } ;
typedef TYPE_4__ quicly_conn_t ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct st_quicly_conn_streamgroup_state_t *FUNC_3(quicly_conn_t *VAR_0, quicly_stream_id_t VAR_1)
{
    if (FUNC_0(VAR_0) == FUNC_1(VAR_1)) {
        return FUNC_2(VAR_1) ? &VAR_0->super.host.uni : &VAR_0->super.host.bidi;
    } else {
        return FUNC_2(VAR_1) ? &VAR_0->super.peer.uni : &VAR_0->super.peer.bidi;
    }
}
