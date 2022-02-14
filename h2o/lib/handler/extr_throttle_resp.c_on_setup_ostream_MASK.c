
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_30__ {int * next; int stop; int do_send; } ;
struct TYPE_28__ {scalar_t__ size; scalar_t__ capacity; } ;
struct TYPE_29__ {TYPE_6__ bufs; } ;
struct TYPE_19__ {size_t token_inc; size_t tokens; int timeout_entry; TYPE_9__* ctx; TYPE_8__ super; TYPE_7__ state; TYPE_11__* req; } ;
typedef TYPE_10__ throttle_resp_t ;
typedef int ssize_t ;
struct TYPE_22__ {TYPE_3__* entries; } ;
struct TYPE_26__ {int status; TYPE_15__ headers; } ;
struct TYPE_23__ {int len; int base; } ;
struct TYPE_24__ {TYPE_1__ method; } ;
struct TYPE_20__ {size_t preferred_chunk_size; TYPE_5__* conn; TYPE_4__ res; TYPE_2__ input; } ;
typedef TYPE_11__ h2o_req_t ;
typedef int h2o_ostream_t ;
struct TYPE_21__ {char* base; int len; } ;
typedef TYPE_12__ h2o_iovec_t ;
typedef int h2o_filter_t ;
struct TYPE_31__ {int loop; } ;
struct TYPE_27__ {TYPE_9__* ctx; } ;
struct TYPE_25__ {TYPE_12__ value; } ;


 int FUNC_0 (TYPE_10__) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_11__*,int ,int,int **) ;
 int FUNC_4 (TYPE_15__*,int) ;
 int FUNC_5 (TYPE_15__*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_11__*,int **) ;
 size_t FUNC_8 (char**,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_11(h2o_filter_t *VAR_7, h2o_req_t *VAR_8, h2o_ostream_t **VAR_9)
{
    throttle_resp_t *VAR_10;
    h2o_iovec_t VAR_11;
    size_t VAR_12;

    if (VAR_8->res.status != 200)
        goto Next;
    if (FUNC_6(VAR_8->input.method.base, VAR_8->input.method.len, FUNC_1("HEAD")))
        goto Next;

    ssize_t VAR_13;
    if ((VAR_13 = FUNC_5(&VAR_8->res.headers, VAR_0, -1)) == -1)
        goto Next;

    VAR_11 = VAR_8->res.headers.entries[VAR_13].value;
    char *VAR_14 = VAR_11.base;

    if (FUNC_2((VAR_12 = FUNC_8(&VAR_14, VAR_11.len)) == VAR_3))
        goto Next;

    VAR_10 = (void *)FUNC_3(VAR_8, FUNC_0(*VAR_10), sizeof(*VAR_10), VAR_9);


    VAR_10->token_inc = VAR_12 * VAR_1 / VAR_2;
    if (VAR_8->preferred_chunk_size > VAR_10->token_inc)
        VAR_8->preferred_chunk_size = VAR_10->token_inc;

    FUNC_4(&VAR_8->res.headers, VAR_13);

    VAR_10->super.do_send = VAR_5;
    VAR_10->super.stop = VAR_6;
    VAR_10->ctx = VAR_8->conn->ctx;
    VAR_10->req = VAR_8;
    VAR_10->state.bufs.capacity = 0;
    VAR_10->state.bufs.size = 0;

    VAR_10->tokens = VAR_10->token_inc;
    VAR_9 = &VAR_10->super.next;

    FUNC_9(&VAR_10->timeout_entry, VAR_4);
    FUNC_10(VAR_10->ctx->loop, 100, &VAR_10->timeout_entry);

Next:
    FUNC_7(VAR_8, VAR_9);
}
