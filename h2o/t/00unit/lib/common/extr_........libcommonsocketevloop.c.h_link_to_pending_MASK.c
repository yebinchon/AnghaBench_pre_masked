
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_h2o_evloop_socket_t {int _flags; struct st_h2o_evloop_socket_t* _next_pending; TYPE_1__* loop; } ;
struct TYPE_2__ {struct st_h2o_evloop_socket_t* _pending_as_client; struct st_h2o_evloop_socket_t* _pending_as_server; } ;


 int VAR_0 ;

void FUNC_0(struct st_h2o_evloop_socket_t *VAR_1)
{
    if (VAR_1->_next_pending == VAR_1) {
        struct st_h2o_evloop_socket_t **VAR_2 = (VAR_1->_flags & VAR_0) != 0
                                                   ? &VAR_1->loop->_pending_as_server
                                                   : &VAR_1->loop->_pending_as_client;
        VAR_1->_next_pending = *VAR_2;
        *VAR_2 = VAR_1;
    }
}
