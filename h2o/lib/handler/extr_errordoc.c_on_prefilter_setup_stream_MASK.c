
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {size_t size; TYPE_5__ const* entries; } ;
struct st_errordoc_prefilter_t {int super; TYPE_1__ res_headers; int reason; int status; int req_headers; } ;
struct TYPE_19__ {size_t size; TYPE_5__* entries; int * member_0; } ;
struct TYPE_17__ {TYPE_4__ headers; int reason; int status; } ;
struct TYPE_18__ {TYPE_2__ res; int pool; int headers; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_req_prefilter_t ;
typedef int h2o_ostream_t ;
typedef TYPE_4__ h2o_headers_t ;
struct TYPE_20__ {int * name; } ;
typedef TYPE_5__ h2o_header_t ;
struct TYPE_15__ {int buf; } ;
struct TYPE_14__ {int buf; } ;
struct TYPE_13__ {int buf; } ;


 TYPE_12__* VAR_0 ;
 TYPE_11__* VAR_1 ;
 TYPE_10__* VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*,TYPE_5__ const*) ;
 int FUNC_1 (int *,TYPE_3__*,int **) ;

__attribute__((used)) static void FUNC_2(h2o_req_prefilter_t *VAR_3, h2o_req_t *VAR_4, h2o_ostream_t **VAR_5)
{
    struct st_errordoc_prefilter_t *VAR_6 = (void *)VAR_3;
    h2o_headers_t VAR_7 = {((void*)0)};
    size_t VAR_8;


    VAR_4->headers = VAR_6->req_headers;
    VAR_4->res.status = VAR_6->status;
    VAR_4->res.reason = VAR_6->reason;


    for (VAR_8 = 0; VAR_8 != VAR_6->res_headers.size; ++VAR_8)
        FUNC_0(&VAR_4->pool, &VAR_7, VAR_6->res_headers.entries + VAR_8);
    for (VAR_8 = 0; VAR_8 != VAR_4->res.headers.size; ++VAR_8) {
        const h2o_header_t *VAR_9 = VAR_4->res.headers.entries + VAR_8;
        if (VAR_9->name == &VAR_1->buf || VAR_9->name == &VAR_0->buf ||
            VAR_9->name == &VAR_2->buf)
            FUNC_0(&VAR_4->pool, &VAR_7, VAR_9);
    }
    VAR_4->res.headers = VAR_7;

    FUNC_1(&VAR_6->super, VAR_4, VAR_5);
}
