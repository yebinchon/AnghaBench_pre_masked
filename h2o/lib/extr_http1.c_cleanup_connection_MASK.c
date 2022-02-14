
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ctx; int * cb; } ;
struct TYPE_6__ {int * proceed_req; TYPE_2__ write_req; int http1_is_persistent; } ;
struct st_h2o_http1_conn_t {scalar_t__ _unconsumed_request_size; scalar_t__ _prevreqlen; TYPE_3__ req; TYPE_1__* sock; int * _req_entity_reader; } ;
struct TYPE_4__ {int input; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct st_h2o_http1_conn_t*,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct st_h2o_http1_conn_t*) ;
 int FUNC_4 (struct st_h2o_http1_conn_t*) ;

__attribute__((used)) static void FUNC_5(struct st_h2o_http1_conn_t *VAR_0)
{
    if (!VAR_0->req.http1_is_persistent) {

        FUNC_1(VAR_0, 1);
        return;
    }

    FUNC_0(VAR_0->req.proceed_req == ((void*)0));
    FUNC_0(VAR_0->_req_entity_reader == ((void*)0));


    if (VAR_0->_unconsumed_request_size)
        FUNC_2(&VAR_0->sock->input, VAR_0->_unconsumed_request_size);
    FUNC_3(VAR_0);
    VAR_0->req.write_req.cb = ((void*)0);
    VAR_0->req.write_req.ctx = ((void*)0);
    VAR_0->req.proceed_req = ((void*)0);
    VAR_0->_prevreqlen = 0;
    VAR_0->_unconsumed_request_size = 0;
    FUNC_4(VAR_0);
}
