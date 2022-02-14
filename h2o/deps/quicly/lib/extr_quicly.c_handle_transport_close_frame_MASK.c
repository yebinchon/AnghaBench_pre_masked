
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {int end; int src; } ;
struct TYPE_5__ {int len; int base; } ;
struct TYPE_4__ {TYPE_3__ reason_phrase; int frame_type; int error_code; } ;
typedef TYPE_1__ quicly_transport_close_frame_t ;
typedef int quicly_conn_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,TYPE_3__) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(quicly_conn_t *VAR_1, struct st_quicly_handle_payload_state_t *VAR_2)
{
    quicly_transport_close_frame_t VAR_3;
    int VAR_4;

    if ((VAR_4 = FUNC_5(&VAR_2->src, VAR_2->end, &VAR_3)) != 0)
        return VAR_4;

    FUNC_1(VAR_0, VAR_1, FUNC_4(), VAR_3.error_code, VAR_3.frame_type,
                 FUNC_2(VAR_3.reason_phrase.base, VAR_3.reason_phrase.len));
    return FUNC_3(VAR_1, FUNC_0(VAR_3.error_code), VAR_3.frame_type, VAR_3.reason_phrase);
}
