
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {int end; int src; int frame_type; } ;
typedef int quicly_stream_t ;
struct TYPE_5__ {int len; } ;
struct TYPE_6__ {int stream_id; scalar_t__ is_fin; TYPE_1__ data; int offset; } ;
typedef TYPE_2__ quicly_stream_frame_t ;
typedef int quicly_conn_t ;


 int FUNC_0 (int ,int *,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(quicly_conn_t *VAR_1, struct st_quicly_handle_payload_state_t *VAR_2)
{
    quicly_stream_frame_t VAR_3;
    quicly_stream_t *VAR_4;
    int VAR_5;

    if ((VAR_5 = FUNC_4(VAR_2->frame_type, &VAR_2->src, VAR_2->end, &VAR_3)) != 0)
        return VAR_5;
    FUNC_0(VAR_0, VAR_1, FUNC_3(), VAR_3.stream_id, VAR_3.offset, VAR_3.data.len, (int)VAR_3.is_fin);
    if ((VAR_5 = FUNC_2(VAR_1, VAR_3.stream_id, &VAR_4)) != 0 || VAR_4 == ((void*)0))
        return VAR_5;
    return FUNC_1(VAR_4, &VAR_3);
}
