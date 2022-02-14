
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_mruby_http_request_context_t {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_5__ {TYPE_1__* shared; } ;
typedef TYPE_2__ h2o_mruby_context_t ;
struct TYPE_4__ {int * mrb; } ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_mruby_http_request_context_t*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct st_h2o_mruby_http_request_context_t* FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 () ;
 int VAR_1 ;

__attribute__((used)) static mrb_value FUNC_5(h2o_mruby_context_t *VAR_2, mrb_value VAR_3, mrb_value *VAR_4, mrb_value VAR_5,
                                             int *VAR_6)
{
    mrb_state *VAR_7 = VAR_2->shared->mrb;
    struct st_h2o_mruby_http_request_context_t *VAR_8;

    if ((VAR_8 = FUNC_2(VAR_7, FUNC_1(VAR_5, 0), &VAR_1)) == ((void*)0)) {
        *VAR_6 = 1;
        return FUNC_3(VAR_7, VAR_0, "HttpRequest#join wrong self");
    }

    FUNC_0(VAR_8, *VAR_4);
    return FUNC_4();
}
