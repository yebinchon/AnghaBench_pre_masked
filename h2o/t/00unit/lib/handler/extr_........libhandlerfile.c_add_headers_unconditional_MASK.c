
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int etag; } ;
struct TYPE_7__ {int ref; } ;
struct st_h2o_sendfile_generator_t {scalar_t__ send_vary; TYPE_3__ header_bufs; TYPE_2__ file; scalar_t__ send_etag; } ;
struct TYPE_6__ {int headers; } ;
struct TYPE_9__ {TYPE_1__ res; int pool; } ;
typedef TYPE_4__ h2o_req_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int *,int ,size_t) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct st_h2o_sendfile_generator_t *VAR_2, h2o_req_t *VAR_3)
{




    if (VAR_2->send_etag) {
        size_t VAR_4 = FUNC_2(VAR_2->file.ref, VAR_2->header_bufs.etag);
        FUNC_1(&VAR_3->pool, &VAR_3->res.headers, VAR_0, ((void*)0), VAR_2->header_bufs.etag, VAR_4);
    }
    if (VAR_2->send_vary)
        FUNC_3(&VAR_3->pool, &VAR_3->res.headers, VAR_1, FUNC_0("accept-encoding"));
}
