
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* ctx; } ;
struct TYPE_7__ {scalar_t__ req_body_bytes_received; } ;
struct st_h2o_http1_conn_t {TYPE_5__* sock; TYPE_4__ super; TYPE_1__ req; scalar_t__ _req_entity_reader; } ;
struct st_h2o_http1_chunked_entity_reader {int decoder; } ;
typedef int ssize_t ;
struct TYPE_12__ {size_t size; int bytes; } ;
struct TYPE_11__ {TYPE_6__* input; } ;
struct TYPE_9__ {TYPE_2__* globalconf; } ;
struct TYPE_8__ {scalar_t__ max_request_entity_size; } ;


 int FUNC_0 (struct st_h2o_http1_conn_t*,char*,char*) ;
 int FUNC_1 (struct st_h2o_http1_conn_t*,char*,char*) ;
 int FUNC_2 (TYPE_6__**,size_t) ;
 int FUNC_3 (struct st_h2o_http1_conn_t*,size_t,int) ;
 int FUNC_4 (int *,int ,size_t*) ;

__attribute__((used)) static void FUNC_5(struct st_h2o_http1_conn_t *VAR_0)
{
    struct st_h2o_http1_chunked_entity_reader *VAR_1 = (void *)VAR_0->_req_entity_reader;
    size_t VAR_2, VAR_3;
    ssize_t VAR_4;
    int VAR_5 = 1;


    if ((VAR_3 = VAR_2 = VAR_0->sock->input->size) == 0)
        return;
    VAR_4 = FUNC_4(&VAR_1->decoder, VAR_0->sock->input->bytes, &VAR_2);
    if (VAR_4 != -1 && VAR_2 + VAR_0->req.req_body_bytes_received >= VAR_0->super.ctx->globalconf->max_request_entity_size) {
        FUNC_1(VAR_0, "Request Entity Too Large", "request entity is too large");
        return;
    }
    if (VAR_4 < 0) {
        if (VAR_4 == -2) {

            VAR_5 = 0;
            goto Done;
        }

        FUNC_0(VAR_0, "Invalid Request", "broken chunked-encoding");
        return;
    }

    VAR_3 -= VAR_4;
Done:
    FUNC_3(VAR_0, VAR_2, VAR_5);
    FUNC_2(&VAR_0->sock->input, VAR_3 - VAR_2);
}
