
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_evloop_socket_t {struct st_h2o_evloop_socket_t* _next_pending; } ;
struct TYPE_3__ {struct st_h2o_evloop_socket_t* _pending_as_server; struct st_h2o_evloop_socket_t* _pending_as_client; } ;
typedef TYPE_1__ h2o_evloop_t ;


 int FUNC_0 (struct st_h2o_evloop_socket_t*) ;

__attribute__((used)) static void FUNC_1(h2o_evloop_t *VAR_0)
{
    struct st_h2o_evloop_socket_t *VAR_1;

    while (VAR_0->_pending_as_server != ((void*)0) || VAR_0->_pending_as_client != ((void*)0)) {
        while ((VAR_1 = VAR_0->_pending_as_client) != ((void*)0)) {
            VAR_0->_pending_as_client = VAR_1->_next_pending;
            VAR_1->_next_pending = VAR_1;
            FUNC_0(VAR_1);
        }
        if ((VAR_1 = VAR_0->_pending_as_server) != ((void*)0)) {
            VAR_0->_pending_as_server = VAR_1->_next_pending;
            VAR_1->_next_pending = VAR_1;
            FUNC_0(VAR_1);
        }
    }
}
