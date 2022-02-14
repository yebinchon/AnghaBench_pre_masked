
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {int end; int src; } ;
struct TYPE_9__ {TYPE_1__* callbacks; int sendstate; } ;
typedef TYPE_2__ quicly_stream_t ;
struct TYPE_10__ {int app_error_code; int stream_id; } ;
typedef TYPE_3__ quicly_stop_sending_frame_t ;
typedef int quicly_conn_t ;
struct TYPE_8__ {int (* on_send_stop ) (TYPE_2__*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,TYPE_2__**) ;
 int FUNC_2 (int *,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(quicly_conn_t *VAR_0, struct st_quicly_handle_payload_state_t *VAR_1)
{
    quicly_stop_sending_frame_t VAR_2;
    quicly_stream_t *VAR_3;
    int VAR_4;

    if ((VAR_4 = FUNC_2(&VAR_1->src, VAR_1->end, &VAR_2)) != 0)
        return VAR_4;

    if ((VAR_4 = FUNC_1(VAR_0, VAR_2.stream_id, &VAR_3)) != 0 || VAR_3 == ((void*)0))
        return VAR_4;

    if (FUNC_4(&VAR_3->sendstate)) {

        int VAR_5 = FUNC_0(VAR_2.app_error_code);
        FUNC_3(VAR_3, VAR_5);
        if ((VAR_4 = VAR_3->callbacks->on_send_stop(VAR_3, VAR_5)) != 0)
            return VAR_4;
    }

    return 0;
}
