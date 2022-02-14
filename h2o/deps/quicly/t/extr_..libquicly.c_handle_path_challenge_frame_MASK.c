
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {int end; int src; } ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ quicly_path_challenge_frame_t ;
typedef int quicly_conn_t ;


 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(quicly_conn_t *VAR_0, struct st_quicly_handle_payload_state_t *VAR_1)
{
    quicly_path_challenge_frame_t VAR_2;
    int VAR_3;

    if ((VAR_3 = FUNC_0(&VAR_1->src, VAR_1->end, &VAR_2)) != 0)
        return VAR_3;
    return FUNC_1(VAR_0, 1, VAR_2.data);
}
