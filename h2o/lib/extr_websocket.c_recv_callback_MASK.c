
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wslay_event_context_ptr ;
typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_5__ {TYPE_1__* sock; int ws_ctx; } ;
typedef TYPE_2__ h2o_websocket_conn_t ;
struct TYPE_6__ {size_t size; int bytes; } ;
struct TYPE_4__ {TYPE_3__* input; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__**,size_t) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(wslay_event_context_ptr VAR_1, uint8_t *VAR_2, size_t VAR_3, int VAR_4, void *VAR_5)
{
    h2o_websocket_conn_t *VAR_6 = VAR_5;


    if (VAR_6->sock->input->size == 0) {
        FUNC_2(VAR_6->ws_ctx, VAR_0);
        return -1;
    }

    if (VAR_6->sock->input->size < VAR_3)
        VAR_3 = VAR_6->sock->input->size;
    FUNC_1(VAR_2, VAR_6->sock->input->bytes, VAR_3);
    FUNC_0(&VAR_6->sock->input, VAR_3);
    return VAR_3;
}
