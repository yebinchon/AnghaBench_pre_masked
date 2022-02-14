
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_quicly_handle_payload_state_t {scalar_t__ epoch; int end; int src; } ;
typedef int quicly_stream_t ;
typedef int quicly_stream_id_t ;
typedef int quicly_stream_frame_t ;
typedef int quicly_conn_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(quicly_conn_t *VAR_0, struct st_quicly_handle_payload_state_t *VAR_1)
{
    quicly_stream_frame_t VAR_2;
    quicly_stream_t *VAR_3;
    int VAR_4;

    if ((VAR_4 = FUNC_2(&VAR_1->src, VAR_1->end, &VAR_2)) != 0)
        return VAR_4;
    VAR_3 = FUNC_3(VAR_0, -(quicly_stream_id_t)(1 + VAR_1->epoch));
    FUNC_1(VAR_3 != ((void*)0));
    return FUNC_0(VAR_3, &VAR_2);
}
