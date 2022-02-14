
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_http1_conn_t {TYPE_1__* _req_entity_reader; } ;
struct TYPE_5__ {struct st_h2o_http1_conn_t* data; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_4__ {int (* handle_incoming_entity ) (struct st_h2o_http1_conn_t*) ;} ;


 int FUNC_0 (struct st_h2o_http1_conn_t*,int) ;
 int FUNC_1 (struct st_h2o_http1_conn_t*) ;
 int FUNC_2 (struct st_h2o_http1_conn_t*) ;

void FUNC_3(h2o_socket_t *VAR_0, const char *VAR_1)
{
    struct st_h2o_http1_conn_t *VAR_2 = VAR_0->data;

    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_2, 1);
        return;
    }

    if (VAR_2->_req_entity_reader == ((void*)0))
        FUNC_1(VAR_2);
    else
        VAR_2->_req_entity_reader->handle_incoming_entity(VAR_2);
}
