
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_21__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;


struct TYPE_27__ {int request; int input_stream; } ;
struct TYPE_25__ {scalar_t__ method_is_head; } ;
struct st_h2o_mruby_http_request_context_t {TYPE_17__* ctx; TYPE_4__ refs; int receiver; TYPE_2__ req; } ;
typedef int mrb_value ;
struct TYPE_28__ {int * exc; } ;
typedef TYPE_5__ mrb_state ;
struct TYPE_23__ {int len; int base; } ;
struct TYPE_29__ {TYPE_1__ value; TYPE_21__* name; } ;
typedef TYPE_6__ h2o_header_t ;
struct TYPE_26__ {int constants; TYPE_5__* mrb; } ;
struct TYPE_24__ {int len; int base; } ;
struct TYPE_22__ {TYPE_3__* shared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct st_h2o_mruby_http_request_context_t*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_21__*,int ,int ,...) ;
 int FUNC_5 (TYPE_5__*,int ,struct st_h2o_mruby_http_request_context_t*,int *) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_5__*,int ,int ) ;
 int FUNC_8 (TYPE_17__*,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_5__*,int) ;
 int FUNC_11 (TYPE_5__*,int ,int,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_5__*,int ,char*,int,int ) ;
 int FUNC_14 (TYPE_5__*,int) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*,int) ;
 int FUNC_17 (TYPE_5__*,int ,int ,int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_20 (TYPE_5__*,int ,char*) ;

__attribute__((used)) static void FUNC_21(struct st_h2o_mruby_http_request_context_t *VAR_3, int VAR_4, const h2o_header_t *VAR_5,
                          size_t VAR_6, int VAR_7)
{
    mrb_state *VAR_8 = VAR_3->ctx->shared->mrb;
    int VAR_9 = FUNC_15(VAR_8);
    size_t VAR_10;

    mrb_value VAR_11 = FUNC_10(VAR_8, 3);


    FUNC_11(VAR_8, VAR_11, 0, FUNC_12(VAR_4));


    mrb_value VAR_12 = FUNC_16(VAR_8, (int)VAR_6);
    for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10) {

        if (FUNC_4(VAR_5[VAR_10].name, VAR_5[VAR_10].name->len, FUNC_0("content-length")) ||
            FUNC_4(VAR_5[VAR_10].name, VAR_5[VAR_10].name->len, FUNC_0("transfer-encoding")))
            continue;

        mrb_value VAR_13, VAR_14;
        if (VAR_7) {
            VAR_13 = FUNC_6(VAR_8, VAR_5[VAR_10].name->base, VAR_5[VAR_10].name->len);
            VAR_14 = FUNC_6(VAR_8, VAR_5[VAR_10].value.base, VAR_5[VAR_10].value.len);
        } else {
            VAR_13 = FUNC_7(VAR_8, VAR_5[VAR_10].name->base, VAR_5[VAR_10].name->len);
            VAR_14 = FUNC_7(VAR_8, VAR_5[VAR_10].value.base, VAR_5[VAR_10].value.len);
        }
        while (VAR_10 + 1 < VAR_6 && FUNC_4(VAR_5[VAR_10].name->base, VAR_5[VAR_10].name->len,
                                                VAR_5[VAR_10 + 1].name->base, VAR_5[VAR_10 + 1].name->len)) {
            ++VAR_10;
            VAR_14 = FUNC_20(VAR_8, VAR_14, "\n");
            VAR_14 = FUNC_19(VAR_8, VAR_14, VAR_5[VAR_10].value.base, VAR_5[VAR_10].value.len);
        }
        FUNC_17(VAR_8, VAR_12, VAR_13, VAR_14);
    }
    FUNC_11(VAR_8, VAR_11, 1, VAR_12);


    FUNC_1(FUNC_18(VAR_3->refs.input_stream));
    mrb_value VAR_15;
    if (VAR_3->req.method_is_head || VAR_4 == 101 || VAR_4 == 204 || VAR_4 == 304) {
        VAR_15 = FUNC_9(VAR_3->ctx->shared->constants, VAR_0);
    } else {
        VAR_15 = FUNC_9(VAR_3->ctx->shared->constants, VAR_1);
    }
    VAR_3->refs.input_stream = FUNC_5(VAR_8, VAR_15, VAR_3, &VAR_2);
    FUNC_11(VAR_8, VAR_11, 2, VAR_3->refs.input_stream);

    if (FUNC_18(VAR_3->receiver)) {

        FUNC_13(VAR_8, VAR_3->refs.request, "_set_response", 1, VAR_11);
        if (VAR_8->exc != ((void*)0)) {
            FUNC_3("_set_response failed\n");
        }
    } else {

        FUNC_8(VAR_3->ctx, FUNC_2(VAR_3), VAR_11, ((void*)0));
    }

    FUNC_14(VAR_8, VAR_9);
}
