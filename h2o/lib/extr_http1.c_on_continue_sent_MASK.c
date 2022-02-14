
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_http1_conn_t {TYPE_1__* _req_entity_reader; } ;
struct TYPE_6__ {struct st_h2o_http1_conn_t* data; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_5__ {int (* handle_incoming_entity ) (struct st_h2o_http1_conn_t*) ;} ;


 int FUNC_0 (struct st_h2o_http1_conn_t*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct st_h2o_http1_conn_t*) ;

__attribute__((used)) static void FUNC_3(h2o_socket_t *VAR_1, const char *VAR_2)
{
    struct st_h2o_http1_conn_t *VAR_3 = VAR_1->data;

    if (VAR_2 != ((void*)0)) {
        FUNC_0(VAR_3, 1);
        return;
    }

    FUNC_1(VAR_1, VAR_0);
    VAR_3->_req_entity_reader->handle_incoming_entity(VAR_3);
}
