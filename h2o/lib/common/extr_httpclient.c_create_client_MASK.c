
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_mem_pool_t ;
struct TYPE_8__ {int cb; } ;
struct TYPE_7__ {int on_connect; } ;
struct TYPE_9__ {TYPE_2__ _timeout; TYPE_1__ _cb; int * write_req; int * update_window; int * get_socket; int * steal_socket; int cancel; void* data; int * ctx; int * pool; } ;
typedef TYPE_3__ h2o_httpclient_t ;
typedef int h2o_httpclient_ctx_t ;
typedef int h2o_httpclient_connect_cb ;


 size_t FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_3__*,int ,size_t) ;
 int VAR_3 ;

__attribute__((used)) static h2o_httpclient_t *FUNC_3(h2o_mem_pool_t *VAR_4, void *VAR_5, h2o_httpclient_ctx_t *VAR_6,
                                       h2o_httpclient_connect_cb VAR_7)
{

    size_t VAR_8 = ((VAR_1) > (VAR_2) ? (VAR_1) : (VAR_2));

    h2o_httpclient_t *VAR_9 = FUNC_1(VAR_8);
    FUNC_2(VAR_9, 0, VAR_8);
    VAR_9->pool = VAR_4;
    VAR_9->ctx = VAR_6;
    VAR_9->data = VAR_5;
    VAR_9->cancel = VAR_0;
    VAR_9->steal_socket = ((void*)0);
    VAR_9->get_socket = ((void*)0);
    VAR_9->update_window = ((void*)0);
    VAR_9->write_req = ((void*)0);
    VAR_9->_cb.on_connect = VAR_7;
    VAR_9->_timeout.cb = VAR_3;

    return VAR_9;
}
