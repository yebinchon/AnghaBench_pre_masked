
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_http1_content_length_entity_reader {scalar_t__ content_length; } ;
struct TYPE_4__ {scalar_t__ req_body_bytes_received; } ;
struct st_h2o_http1_conn_t {TYPE_1__ req; TYPE_2__* sock; scalar_t__ _req_entity_reader; } ;
struct TYPE_6__ {size_t size; } ;
struct TYPE_5__ {TYPE_3__* input; } ;


 int FUNC_0 (struct st_h2o_http1_conn_t*,size_t,int) ;

__attribute__((used)) static void FUNC_1(struct st_h2o_http1_conn_t *VAR_0)
{
    int VAR_1 = 0;
    struct st_h2o_http1_content_length_entity_reader *VAR_2 = (void *)VAR_0->_req_entity_reader;
    size_t VAR_3 = VAR_0->sock->input->size;

    if (VAR_0->req.req_body_bytes_received + VAR_0->sock->input->size >= VAR_2->content_length) {
        VAR_1 = 1;
        VAR_3 = VAR_2->content_length - VAR_0->req.req_body_bytes_received;
    }
    if (!VAR_1 && VAR_3 == 0)
        return;

    FUNC_0(VAR_0, VAR_3, VAR_1);
}
