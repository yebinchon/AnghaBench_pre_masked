
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * response; TYPE_4__* body; } ;
struct st_mruby_subreq_t {int chain_proceed; scalar_t__ state; TYPE_5__* ctx; TYPE_6__* buf; int receiver; TYPE_3__ shortcut; int super; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int h2o_sendvec_t ;
typedef int h2o_send_state_t ;
typedef int h2o_req_t ;
typedef int h2o_ostream_t ;
struct TYPE_12__ {scalar_t__ size; int bytes; } ;
struct TYPE_11__ {TYPE_1__* shared; } ;
struct TYPE_10__ {TYPE_2__* sender; } ;
struct TYPE_8__ {scalar_t__ final_sent; } ;
struct TYPE_7__ {int * mrb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct st_mruby_subreq_t*,int *,size_t) ;
 int FUNC_1 (struct st_mruby_subreq_t*) ;
 int FUNC_2 (TYPE_6__**,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (TYPE_5__*,int ,int ,int *) ;
 int FUNC_5 (TYPE_4__*,int *,size_t,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct st_mruby_subreq_t*) ;

__attribute__((used)) static void FUNC_13(h2o_ostream_t *VAR_3, h2o_req_t *VAR_4, h2o_sendvec_t *VAR_5, size_t VAR_6,
                                h2o_send_state_t VAR_7)
{
    struct st_mruby_subreq_t *VAR_8 = (void *)VAR_4;
    mrb_state *VAR_9 = VAR_8->ctx->shared->mrb;


    if (VAR_8->shortcut.body != ((void*)0)) {
        if (VAR_8->shortcut.body->sender->final_sent)
            return;

        VAR_8->chain_proceed = 1;
        if (VAR_8->buf == ((void*)0)) {

            FUNC_5(VAR_8->shortcut.body, VAR_5, VAR_6, VAR_7);
        } else {

            FUNC_0(VAR_8, VAR_5, VAR_6);
        }

        return;
    }

    int VAR_10 = VAR_8->state == VAR_1;
    if (FUNC_7(VAR_7)) {
        FUNC_6(&VAR_8->super);
        VAR_8->state = VAR_2;
    } else {
        VAR_8->state = VAR_0;
    }

    FUNC_0(VAR_8, VAR_5, VAR_6);


    if (VAR_8->shortcut.response != ((void*)0)) {
        FUNC_12(VAR_8);
        return;
    }

    if (FUNC_10(VAR_8->receiver))
        return;

    int VAR_11 = FUNC_9(VAR_9);

    if (VAR_10) {

        FUNC_4(VAR_8->ctx, FUNC_1(VAR_8), FUNC_11(), ((void*)0));
    } else if (VAR_8->buf->size != 0) {

        mrb_value VAR_12 = FUNC_3(VAR_9, VAR_8->buf->bytes, VAR_8->buf->size);
        FUNC_2(&VAR_8->buf, VAR_8->buf->size);
        FUNC_4(VAR_8->ctx, FUNC_1(VAR_8), VAR_12, ((void*)0));
    } else if (VAR_8->state == VAR_0) {
        FUNC_4(VAR_8->ctx, FUNC_1(VAR_8), FUNC_11(), ((void*)0));
    }

    FUNC_8(VAR_9, VAR_11);
}
