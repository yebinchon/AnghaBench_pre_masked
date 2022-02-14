
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * cb; } ;
struct TYPE_14__ {TYPE_4__ write_req; } ;
struct TYPE_9__ {size_t size; TYPE_5__* entries; } ;
struct TYPE_10__ {TYPE_1__ vecs; } ;
struct st_h2o_http3_server_stream_t {TYPE_7__ req; int * req_body; TYPE_2__ sendbuf; } ;
struct st_h2o_http3_server_conn_t {scalar_t__ num_streams_req_streaming; } ;
struct TYPE_13__ {TYPE_3__* callbacks; } ;
typedef TYPE_5__ h2o_sendvec_t ;
struct TYPE_11__ {int (* update_refcnt ) (TYPE_5__*,TYPE_7__*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_http3_server_conn_t*) ;
 struct st_h2o_http3_server_conn_t* FUNC_2 (struct st_h2o_http3_server_stream_t*) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_7__*,int ) ;

__attribute__((used)) static void FUNC_6(struct st_h2o_http3_server_stream_t *VAR_0)
{
    size_t VAR_1;


    for (VAR_1 = 0; VAR_1 != VAR_0->sendbuf.vecs.size; ++VAR_1) {
        h2o_sendvec_t *VAR_2 = VAR_0->sendbuf.vecs.entries + VAR_1;
        if (VAR_2->callbacks->update_refcnt != ((void*)0))
            VAR_2->callbacks->update_refcnt(VAR_2, &VAR_0->req, 0);
    }


    if (VAR_0->req_body != ((void*)0))
        FUNC_3(&VAR_0->req_body);


    if (VAR_0->req.write_req.cb != ((void*)0)) {
        struct st_h2o_http3_server_conn_t *VAR_3 = FUNC_2(VAR_0);
        FUNC_0(VAR_3->num_streams_req_streaming != 0);
        --VAR_3->num_streams_req_streaming;
        FUNC_1(VAR_3);
    }


    FUNC_4(&VAR_0->req);
}
