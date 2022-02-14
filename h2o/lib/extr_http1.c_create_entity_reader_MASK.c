
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t content_length; } ;
struct TYPE_7__ {TYPE_2__* ctx; } ;
struct st_h2o_http1_conn_t {TYPE_4__ req; TYPE_3__ super; } ;
struct phr_header {int name_len; int value_len; int value; } ;
struct TYPE_6__ {TYPE_1__* globalconf; } ;
struct TYPE_5__ {size_t max_request_entity_size; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct st_h2o_http1_conn_t*) ;
 int FUNC_2 (struct st_h2o_http1_conn_t*,size_t) ;
 int FUNC_3 (struct st_h2o_http1_conn_t*,char*,char*) ;
 int FUNC_4 (struct st_h2o_http1_conn_t*,char*,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 size_t FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct st_h2o_http1_conn_t *VAR_1, const struct phr_header *VAR_2)
{

    if (VAR_2->name_len == sizeof("transfer-encoding") - 1) {

        if (!FUNC_5(VAR_2->value, VAR_2->value_len, FUNC_0("chunked"))) {
            FUNC_3(VAR_1, "Invalid Request", "unknown transfer-encoding");
            return -1;
        }
        return FUNC_1(VAR_1);
    } else {

        size_t VAR_3 = FUNC_6(VAR_2->value, VAR_2->value_len);
        if (VAR_3 == VAR_0) {
            FUNC_3(VAR_1, "Invalid Request", "broken content-length header");
            return -1;
        }
        if (VAR_3 > VAR_1->super.ctx->globalconf->max_request_entity_size) {
            FUNC_4(VAR_1, "Request Entity Too Large", "request entity is too large");
            return -1;
        }
        VAR_1->req.content_length = VAR_3;
        return FUNC_2(VAR_1, (size_t)VAR_3);
    }

    return -1;
}
