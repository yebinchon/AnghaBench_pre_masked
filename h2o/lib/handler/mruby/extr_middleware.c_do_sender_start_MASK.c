
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_mruby_subreq_t {scalar_t__ state; TYPE_3__* buf; } ;
struct st_h2o_mruby_middleware_sender_t {int sending; struct st_mruby_subreq_t* subreq; } ;
struct TYPE_5__ {int req; scalar_t__ sender; } ;
typedef TYPE_1__ h2o_mruby_generator_t ;
struct TYPE_6__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_3__**,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;

void FUNC_3(h2o_mruby_generator_t *VAR_3)
{
    struct st_h2o_mruby_middleware_sender_t *VAR_4 = (void *)VAR_3->sender;
    struct st_mruby_subreq_t *VAR_5 = VAR_4->subreq;

    if (VAR_5->buf->size == 0 && VAR_5->state != VAR_0) {
        FUNC_0(&VAR_4->sending);
        FUNC_2(VAR_3->req, ((void*)0), 0, VAR_2);
    } else {
        FUNC_1(VAR_3, &VAR_4->sending, &VAR_5->buf,
                                        VAR_5->state == VAR_0 ? VAR_1 : VAR_2);
    }
}
