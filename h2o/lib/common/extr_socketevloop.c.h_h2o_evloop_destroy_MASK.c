
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct st_h2o_evloop_socket_t* head; } ;
struct st_h2o_evloop_socket_t {int _timeouts; struct st_h2o_evloop_socket_t* _next_statechanged; TYPE_1__ _statechanged; struct st_h2o_evloop_socket_t* _next_pending; struct st_h2o_evloop_socket_t* _pending_as_server; struct st_h2o_evloop_socket_t* _pending_as_client; } ;
typedef int h2o_socket_t ;
typedef struct st_h2o_evloop_socket_t h2o_evloop_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_evloop_socket_t*) ;
 int FUNC_2 (struct st_h2o_evloop_socket_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(h2o_evloop_t *VAR_1)
{
    struct st_h2o_evloop_socket_t *VAR_2;


    FUNC_0(FUNC_5(VAR_1->_timeouts) == VAR_0);


    while ((VAR_2 = VAR_1->_pending_as_client) != ((void*)0)) {
        VAR_1->_pending_as_client = VAR_2->_next_pending;
        VAR_2->_next_pending = VAR_2;
        FUNC_3((h2o_socket_t *)VAR_2);
    }
    while ((VAR_2 = VAR_1->_pending_as_server) != ((void*)0)) {
        VAR_1->_pending_as_server = VAR_2->_next_pending;
        VAR_2->_next_pending = VAR_2;
        FUNC_3((h2o_socket_t *)VAR_2);
    }




    while ((VAR_2 = VAR_1->_statechanged.head) != ((void*)0)) {
        VAR_1->_statechanged.head = VAR_2->_next_statechanged;
        FUNC_2(VAR_2);
    }


    FUNC_1(VAR_1);


    FUNC_4(VAR_1->_timeouts);
    FUNC_2(VAR_1);
}
