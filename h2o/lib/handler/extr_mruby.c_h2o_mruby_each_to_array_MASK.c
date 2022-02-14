
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_4__ {int sym_call; } ;
struct TYPE_5__ {TYPE_1__ symbols; int constants; int mrb; } ;
typedef TYPE_2__ h2o_mruby_shared_context_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int *) ;

mrb_value FUNC_2(h2o_mruby_shared_context_t *VAR_1, mrb_value VAR_2)
{
    return FUNC_1(VAR_1->mrb, FUNC_0(VAR_1->constants, VAR_0),
                            VAR_1->symbols.sym_call, 1, &VAR_2);
}
