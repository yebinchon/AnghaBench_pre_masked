
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_20__ {int size; TYPE_9__* entries; } ;
struct TYPE_21__ {TYPE_2__ headers; int mime_attr; int content_length; int reason; int status; } ;
struct TYPE_22__ {TYPE_3__ res; } ;
struct TYPE_19__ {TYPE_8__* response; } ;
struct st_mruby_subreq_t {TYPE_4__ super; TYPE_1__ shortcut; } ;
struct TYPE_25__ {int (* start ) (TYPE_8__*) ;int proceed; } ;
typedef TYPE_7__ h2o_mruby_sender_t ;
struct TYPE_18__ {int proceed; } ;
struct TYPE_26__ {TYPE_7__* sender; TYPE_12__ super; TYPE_11__* req; TYPE_5__* ctx; } ;
typedef TYPE_8__ h2o_mruby_generator_t ;
struct TYPE_27__ {int value; int name; } ;
typedef TYPE_9__ h2o_header_t ;
struct TYPE_24__ {int headers; int mime_attr; int content_length; int reason; int status; } ;
struct TYPE_23__ {int shared; } ;
struct TYPE_17__ {TYPE_6__ res; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (TYPE_8__*,struct st_mruby_subreq_t*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int ,int ,TYPE_11__*) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (TYPE_11__*,TYPE_12__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_8__*) ;

__attribute__((used)) static void FUNC_8(struct st_mruby_subreq_t *VAR_1)
{
    h2o_mruby_generator_t *VAR_2 = VAR_1->shortcut.response;
    FUNC_0(VAR_2 != ((void*)0));


    VAR_2->req->res.status = VAR_1->super.res.status;
    VAR_2->req->res.reason = VAR_1->super.res.reason;
    VAR_2->req->res.content_length = VAR_1->super.res.content_length;
    VAR_2->req->res.mime_attr = VAR_1->super.res.mime_attr;


    int VAR_3;
    for (VAR_3 = 0; VAR_3 != VAR_1->super.res.headers.size; ++VAR_3) {
        h2o_header_t *VAR_4 = VAR_1->super.res.headers.entries + VAR_3;
        FUNC_3(VAR_2->ctx->shared, VAR_4->name, VAR_4->value, VAR_2->req);
    }

    if (FUNC_2(&VAR_2->req->res.headers, VAR_0, -1) == -1)
        FUNC_4(VAR_2->req);


    h2o_mruby_sender_t *VAR_5 = FUNC_1(VAR_2, VAR_1, FUNC_6());
    VAR_2->sender = VAR_5;
    VAR_2->super.proceed = VAR_5->proceed;


    FUNC_5(VAR_2->req, &VAR_2->super);
    VAR_2->sender->start(VAR_2);
}
