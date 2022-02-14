
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_quicly_handle_payload_state_t {int end; int src; } ;
typedef int quicly_new_connection_id_frame_t ;
typedef int quicly_conn_t ;


 int FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_1(quicly_conn_t *VAR_0, struct st_quicly_handle_payload_state_t *VAR_1)
{
    quicly_new_connection_id_frame_t VAR_2;
    return FUNC_0(&VAR_1->src, VAR_1->end, &VAR_2);
}
