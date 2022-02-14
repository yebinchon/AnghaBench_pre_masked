
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct TYPE_25__ {scalar_t__ len; scalar_t__ base; } ;
struct st_requests_status_ctx_t {int mutex; TYPE_8__ req_data; int * logconf; } ;
struct st_collect_req_status_cbdata_t {TYPE_14__* buffer; int * member_0; } ;
struct TYPE_26__ {TYPE_7__* globalconf; } ;
typedef TYPE_9__ h2o_context_t ;
struct TYPE_22__ {scalar_t__ (* foreach_request ) (TYPE_9__*,int ,struct st_collect_req_status_cbdata_t*) ;} ;
struct TYPE_23__ {TYPE_5__ callbacks; } ;
struct TYPE_20__ {scalar_t__ (* foreach_request ) (TYPE_9__*,int ,struct st_collect_req_status_cbdata_t*) ;} ;
struct TYPE_21__ {TYPE_3__ callbacks; } ;
struct TYPE_18__ {scalar_t__ (* foreach_request ) (TYPE_9__*,int ,struct st_collect_req_status_cbdata_t*) ;} ;
struct TYPE_19__ {TYPE_1__ callbacks; } ;
struct TYPE_24__ {TYPE_6__ http3; TYPE_4__ http2; TYPE_2__ http1; } ;
struct TYPE_17__ {scalar_t__ size; int bytes; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_14__**,int) ;
 int FUNC_1 (TYPE_14__**) ;
 int FUNC_2 (TYPE_14__**,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_9__*,int ,struct st_collect_req_status_cbdata_t*) ;
 scalar_t__ FUNC_8 (TYPE_9__*,int ,struct st_collect_req_status_cbdata_t*) ;
 scalar_t__ FUNC_9 (TYPE_9__*,int ,struct st_collect_req_status_cbdata_t*) ;

__attribute__((used)) static void FUNC_10(void *VAR_2, h2o_context_t *VAR_3)
{
    struct st_requests_status_ctx_t *VAR_4 = VAR_2;
    struct st_collect_req_status_cbdata_t VAR_5 = {VAR_4->logconf};


    if (VAR_4->logconf == ((void*)0))
        return;

    FUNC_2(&VAR_5.buffer, &VAR_1);
    if (VAR_3->globalconf->http1.callbacks.foreach_request(VAR_3, VAR_0, &VAR_5) != 0 ||
        VAR_3->globalconf->http2.callbacks.foreach_request(VAR_3, VAR_0, &VAR_5) != 0 ||
        VAR_3->globalconf->http3.callbacks.foreach_request(VAR_3, VAR_0, &VAR_5) != 0) {
        FUNC_1(&VAR_5.buffer);
        return;
    }


    if (VAR_5.buffer->size != 0) {
        FUNC_5(&VAR_4->mutex);
        if (VAR_4->req_data.len == 0)
            FUNC_0(&VAR_5.buffer, 1);
        VAR_4->req_data.base = FUNC_3(VAR_4->req_data.base, VAR_4->req_data.len + VAR_5.buffer->size);
        FUNC_4(VAR_4->req_data.base + VAR_4->req_data.len, VAR_5.buffer->bytes, VAR_5.buffer->size);
        VAR_4->req_data.len += VAR_5.buffer->size;
        FUNC_6(&VAR_4->mutex);
    }

    FUNC_1(&VAR_5.buffer);
}
