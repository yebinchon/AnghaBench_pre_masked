
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* data; int (* cb ) (void*,TYPE_2__*,size_t) ;} ;
struct st_h2o_http1_conn_t {size_t _unconsumed_request_size; TYPE_2__* sock; TYPE_1__ upgrade; } ;
struct TYPE_6__ {struct st_h2o_http1_conn_t* data; } ;
typedef TYPE_2__ h2o_socket_t ;
typedef int (* h2o_http1_upgrade_cb ) (void*,TYPE_2__*,size_t) ;


 int FUNC_0 (struct st_h2o_http1_conn_t*,int) ;

__attribute__((used)) static void FUNC_1(h2o_socket_t *VAR_0, const char *VAR_1)
{
    struct st_h2o_http1_conn_t *VAR_2 = VAR_0->data;
    h2o_http1_upgrade_cb VAR_3 = VAR_2->upgrade.cb;
    void *VAR_4 = VAR_2->upgrade.data;
    h2o_socket_t *VAR_5 = ((void*)0);
    size_t VAR_6 = 0;


    if (VAR_1 == 0) {
        VAR_5 = VAR_2->sock;
        VAR_6 = VAR_2->_unconsumed_request_size;
        FUNC_0(VAR_2, 0);
    } else {
        FUNC_0(VAR_2, 1);
    }

    VAR_3(VAR_4, VAR_5, VAR_6);
}
