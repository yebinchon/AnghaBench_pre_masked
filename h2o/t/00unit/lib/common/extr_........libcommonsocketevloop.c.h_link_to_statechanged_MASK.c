
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_evloop_socket_t {struct st_h2o_evloop_socket_t* _next_statechanged; TYPE_2__* loop; } ;
struct TYPE_3__ {struct st_h2o_evloop_socket_t** tail_ref; } ;
struct TYPE_4__ {TYPE_1__ _statechanged; } ;



__attribute__((used)) static void FUNC_0(struct st_h2o_evloop_socket_t *VAR_0)
{
    if (VAR_0->_next_statechanged == VAR_0) {
        VAR_0->_next_statechanged = ((void*)0);
        *VAR_0->loop->_statechanged.tail_ref = VAR_0;
        VAR_0->loop->_statechanged.tail_ref = &VAR_0->_next_statechanged;
    }
}
