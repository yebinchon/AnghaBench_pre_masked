
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int kernel_module; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_12__ {int constants; TYPE_1__* mrb; } ;
typedef TYPE_2__ h2o_mruby_shared_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_8(h2o_mruby_shared_context_t *VAR_5)
{
    mrb_state *VAR_6 = VAR_5->mrb;

    FUNC_3(VAR_6, VAR_0, "(h2o)lib/handler/mruby/embedded/sender.rb", 1);
    FUNC_1(VAR_6);

    FUNC_5(VAR_6, VAR_6->kernel_module, "_h2o_sender_send_chunk", VAR_4, FUNC_0(1, 0));
    FUNC_2(VAR_6, "_h2o_sender_send_chunk_eos", VAR_3);
    FUNC_2(VAR_6, "_h2o_sender_handle_error", VAR_2);

    FUNC_4(VAR_6, VAR_5->constants, VAR_1,
                FUNC_6(VAR_6, FUNC_7(VAR_6), "_h2o_sender_proc_each_to_fiber", 0));
    FUNC_1(VAR_6);
}
