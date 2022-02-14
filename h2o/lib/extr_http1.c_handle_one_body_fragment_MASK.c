
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_6__ {scalar_t__ (* cb ) (int ,int ,int) ;int ctx; } ;
struct TYPE_7__ {size_t req_body_bytes_received; int * proceed_req; TYPE_1__ write_req; } ;
struct st_h2o_http1_conn_t {TYPE_3__ _ostr_final; int * _req_entity_reader; TYPE_2__ req; TYPE_4__* sock; } ;
struct TYPE_10__ {int bytes; } ;
struct TYPE_9__ {TYPE_5__* input; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct st_h2o_http1_conn_t*) ;
 int FUNC_1 (struct st_h2o_http1_conn_t*,char*,char*) ;
 int FUNC_2 (TYPE_5__**,size_t) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct st_h2o_http1_conn_t*,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(struct st_h2o_http1_conn_t *VAR_1, size_t VAR_2, int VAR_3)
{
    FUNC_5(VAR_1, 0, ((void*)0));
    FUNC_4(VAR_1->sock);
    if (VAR_1->req.write_req.cb(VAR_1->req.write_req.ctx, FUNC_3(VAR_1->sock->input->bytes, VAR_2), VAR_3) != 0) {
        FUNC_1(VAR_1, "Bad Gateway", "Bad Gateway");
        return;
    }
    FUNC_2(&VAR_1->sock->input, VAR_2);
    VAR_1->req.req_body_bytes_received += VAR_2;
    if (VAR_3) {
        VAR_1->req.proceed_req = ((void*)0);
        VAR_1->_req_entity_reader = ((void*)0);
        if (VAR_1->_ostr_final.state == VAR_0) {
            FUNC_0(VAR_1);
        }
    }
}
