
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct st_quicly_conn_streamgroup_state_t {int next_stream_id; int num_streams; } ;
typedef int quicly_maxsender_t ;
struct TYPE_10__ {struct st_quicly_conn_streamgroup_state_t bidi; struct st_quicly_conn_streamgroup_state_t uni; } ;
struct TYPE_9__ {TYPE_4__ peer; } ;
struct TYPE_7__ {int * bidi; int * uni; } ;
struct TYPE_8__ {TYPE_1__ max_streams; } ;
struct TYPE_11__ {TYPE_3__ super; TYPE_2__ ingress; } ;
typedef TYPE_5__ quicly_conn_t ;


 int FUNC_0 (int *,int,int ,int) ;

__attribute__((used)) static int FUNC_1(quicly_conn_t *VAR_0, int VAR_1)
{
    quicly_maxsender_t *VAR_2;
    if ((VAR_2 = VAR_1 ? VAR_0->ingress.max_streams.uni : VAR_0->ingress.max_streams.bidi) == ((void*)0))
        return 0;

    struct st_quicly_conn_streamgroup_state_t *VAR_3 = VAR_1 ? &VAR_0->super.peer.uni : &VAR_0->super.peer.bidi;
    if (!FUNC_0(VAR_2, VAR_3->next_stream_id / 4, VAR_3->num_streams, 768))
        return 0;

    return 1;
}
