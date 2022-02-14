
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct listener_ctx_t {int sock; } ;
struct TYPE_6__ {scalar_t__ max_connections; size_t num_listeners; TYPE_2__** listeners; } ;
struct TYPE_4__ {int * ctx; } ;
struct TYPE_5__ {TYPE_1__ quic; } ;


 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct listener_ctx_t *VAR_2)
{
    size_t VAR_3;

    if (FUNC_3(0) < VAR_0.max_connections) {
        for (VAR_3 = 0; VAR_3 != VAR_0.num_listeners; ++VAR_3) {
            if (VAR_0.listeners[VAR_3]->quic.ctx == ((void*)0) && !FUNC_0(VAR_2[VAR_3].sock))
                FUNC_1(VAR_2[VAR_3].sock, VAR_1);
        }
    } else {
        for (VAR_3 = 0; VAR_3 != VAR_0.num_listeners; ++VAR_3) {
            if (VAR_0.listeners[VAR_3]->quic.ctx == ((void*)0) && FUNC_0(VAR_2[VAR_3].sock))
                FUNC_2(VAR_2[VAR_3].sock);
        }
    }
}
