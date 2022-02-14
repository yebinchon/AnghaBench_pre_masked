
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_h2o_mruby_channel_context_t {int receivers; int * ctx; } ;
typedef int mrb_value ;
struct TYPE_8__ {TYPE_2__* ud; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_9__ {int * current_context; } ;
typedef TYPE_2__ h2o_mruby_shared_context_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct st_h2o_mruby_channel_context_t* FUNC_1 (int) ;
 int FUNC_2 (struct st_h2o_mruby_channel_context_t*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,struct st_h2o_mruby_channel_context_t*,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static mrb_value FUNC_8(mrb_state *VAR_1, mrb_value VAR_2)
{
    h2o_mruby_shared_context_t *VAR_3 = VAR_1->ud;

    struct st_h2o_mruby_channel_context_t *VAR_4;
    VAR_4 = FUNC_1(sizeof(*VAR_4));

    FUNC_2(VAR_4, 0, sizeof(*VAR_4));
    FUNC_0(VAR_3->current_context != ((void*)0));
    VAR_4->ctx = VAR_3->current_context;
    VAR_4->receivers = FUNC_3(VAR_1);
    FUNC_5(VAR_1, VAR_4->receivers);

    FUNC_7(VAR_1, VAR_2, FUNC_6(VAR_1, "@queue"), FUNC_3(VAR_1));

    FUNC_4(VAR_2, VAR_4, &VAR_0);

    return VAR_2;
}
