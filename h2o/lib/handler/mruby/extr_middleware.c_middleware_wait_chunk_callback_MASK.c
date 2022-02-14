
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_mruby_subreq_t {scalar_t__ state; int receiver; TYPE_4__* buf; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_6__ {TYPE_1__* shared; } ;
typedef TYPE_2__ h2o_mruby_context_t ;
struct TYPE_7__ {scalar_t__ size; int bytes; } ;
struct TYPE_5__ {int * mrb; } ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__**,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 struct st_mruby_subreq_t* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static mrb_value FUNC_10(h2o_mruby_context_t *VAR_3, mrb_value VAR_4, mrb_value *VAR_5, mrb_value VAR_6,
                                                int *VAR_7)
{
    mrb_state *VAR_8 = VAR_3->shared->mrb;
    struct st_mruby_subreq_t *VAR_9;

    mrb_value VAR_10 = FUNC_4(VAR_6, 0);
    if (FUNC_0(VAR_10) == ((void*)0)) {
        return FUNC_6(VAR_8, VAR_0, "downstream HTTP closed");
    } else if ((VAR_9 = FUNC_5(VAR_8, VAR_10, &VAR_2)) == ((void*)0)) {
        return FUNC_6(VAR_8, VAR_0, "AppInputStream#each wrong self");
    }

    if (VAR_9->buf->size != 0) {
        *VAR_7 = 1;
        mrb_value VAR_11 = FUNC_3(VAR_8, VAR_9->buf->bytes, VAR_9->buf->size);
        FUNC_2(&VAR_9->buf, VAR_9->buf->size);
        return VAR_11;
    } else if (VAR_9->state == VAR_1) {
        *VAR_7 = 1;
        return FUNC_9();
    } else {
        FUNC_1(FUNC_8(VAR_9->receiver));
        VAR_9->receiver = *VAR_5;
        FUNC_7(VAR_8, *VAR_5);
        return FUNC_9();
    }
}
