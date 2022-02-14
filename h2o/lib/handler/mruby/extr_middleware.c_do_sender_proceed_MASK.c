
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_mruby_subreq_t {scalar_t__ state; int super; scalar_t__ chain_proceed; TYPE_4__* buf; } ;
struct st_h2o_mruby_middleware_sender_t {struct st_mruby_subreq_t* subreq; int sending; } ;
typedef int h2o_req_t ;
struct TYPE_7__ {TYPE_1__* sender; } ;
typedef TYPE_2__ h2o_mruby_generator_t ;
typedef int h2o_generator_t ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_6__ {scalar_t__ final_sent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_4__**,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(h2o_generator_t *VAR_3, h2o_req_t *VAR_4)
{
    h2o_mruby_generator_t *VAR_5 = (void *)VAR_3;
    struct st_h2o_mruby_middleware_sender_t *VAR_6 = (void *)VAR_5->sender;
    struct st_mruby_subreq_t *VAR_7 = VAR_6->subreq;

    if (VAR_5->sender->final_sent)
        return;

    if (VAR_7->buf != ((void*)0)) {
        FUNC_1(&VAR_6->sending);

        if (VAR_7->buf->size != 0) {
            FUNC_2(VAR_5, &VAR_6->sending, &VAR_7->buf,
                                            VAR_7->state == VAR_0 ? VAR_1 : VAR_2);
            return;
        } else {

            FUNC_0(&VAR_7->buf);
            VAR_7->buf = ((void*)0);
        }
    }

    if (VAR_6->subreq->chain_proceed)
        FUNC_3(&VAR_6->subreq->super);
}
