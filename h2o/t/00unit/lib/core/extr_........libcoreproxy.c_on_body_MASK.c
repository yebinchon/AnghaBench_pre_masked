
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int inflight; } ;
struct rp_generator_t {int res_done; int had_body_error; TYPE_2__ sending; TYPE_4__* src_req; scalar_t__ req_done; TYPE_1__* client; int last_content_before_send; int send_headers_timeout; } ;
struct TYPE_9__ {struct rp_generator_t* data; } ;
typedef TYPE_3__ h2o_httpclient_t ;
struct TYPE_10__ {int (* proceed_req ) (TYPE_4__*,int ,int ) ;} ;
struct TYPE_7__ {int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct rp_generator_t*) ;
 int FUNC_1 (struct rp_generator_t*) ;
 int FUNC_2 (struct rp_generator_t*) ;
 int FUNC_3 (int *,int *) ;
 char const* VAR_1 ;
 int FUNC_4 (TYPE_4__*,char*,char*,char const*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(h2o_httpclient_t *VAR_3, const char *VAR_4)
{
    struct rp_generator_t *VAR_5 = VAR_3->data;

    FUNC_5(&VAR_5->send_headers_timeout);

    if (VAR_4 != ((void*)0)) {
        FUNC_0(VAR_5);


        VAR_5->last_content_before_send = *VAR_5->client->buf;
        FUNC_3(VAR_5->client->buf, &VAR_2);
        if (VAR_4 == VAR_1) {
            VAR_5->res_done = 1;
            if (VAR_5->req_done)
                FUNC_1(VAR_5);
        } else {
            FUNC_1(VAR_5);
            FUNC_4(VAR_5->src_req, "lib/core/proxy.c", "%s", VAR_4);
            VAR_5->had_body_error = 1;
            if (VAR_5->src_req->proceed_req != ((void*)0)) {
                VAR_5->src_req->proceed_req(VAR_5->src_req, 0, VAR_0);
            }
        }
    }
    if (!VAR_5->sending.inflight)
        FUNC_2(VAR_5);

    return 0;
}
