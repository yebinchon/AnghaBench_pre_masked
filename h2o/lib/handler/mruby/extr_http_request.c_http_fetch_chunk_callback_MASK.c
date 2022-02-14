
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ has_content; } ;
struct st_h2o_mruby_http_request_context_t {int consumed; TYPE_1__ resp; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_7__ {TYPE_2__* shared; } ;
typedef TYPE_3__ h2o_mruby_context_t ;
struct TYPE_6__ {int * mrb; } ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_mruby_http_request_context_t*,int ) ;
 int FUNC_1 (struct st_h2o_mruby_http_request_context_t*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 struct st_h2o_mruby_http_request_context_t* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 () ;

__attribute__((used)) static mrb_value FUNC_8(h2o_mruby_context_t *VAR_2, mrb_value VAR_3, mrb_value *VAR_4, mrb_value VAR_5,
                                           int *VAR_6)
{
    mrb_state *VAR_7 = VAR_2->shared->mrb;
    struct st_h2o_mruby_http_request_context_t *VAR_8;
    mrb_value VAR_9;

    if ((VAR_8 = FUNC_5(VAR_7, FUNC_3(VAR_5, 0), &VAR_1)) == ((void*)0)) {
        *VAR_6 = 1;
        return FUNC_6(VAR_7, VAR_0, "_HttpInputStream#each wrong self");
    }

    mrb_value VAR_10 = FUNC_3(VAR_5, 1);
    if (FUNC_4(VAR_10)) {

        if (VAR_8->consumed) {
            *VAR_6 = 1;
            return FUNC_2(VAR_7);
        }
        VAR_8->consumed = 1;
    }

    if (VAR_8->resp.has_content) {
        VAR_9 = FUNC_1(VAR_8);
        *VAR_6 = 1;
    } else {
        FUNC_0(VAR_8, *VAR_4);
        VAR_9 = FUNC_7();
    }

    return VAR_9;
}
