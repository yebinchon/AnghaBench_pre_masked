
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_10__ {int * exc; TYPE_2__* ud; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_12__ {scalar_t__ size; int * entries; } ;
struct TYPE_11__ {TYPE_7__ callbacks; } ;
typedef TYPE_2__ h2o_mruby_shared_context_t ;
typedef int h2o_mruby_callback_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_7__*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int,int *) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(mrb_state *VAR_0, const char *VAR_1, h2o_mruby_callback_t VAR_2)
{
    h2o_mruby_shared_context_t *VAR_3 = VAR_0->ud;
    FUNC_2(((void*)0), &VAR_3->callbacks, VAR_3->callbacks.size + 1);
    VAR_3->callbacks.entries[VAR_3->callbacks.size++] = VAR_2;

    mrb_value VAR_4[2];
    VAR_4[0] = FUNC_6(VAR_0, VAR_1);
    VAR_4[1] = FUNC_3(-(int)VAR_3->callbacks.size);
    FUNC_4(VAR_0, FUNC_7(VAR_0), FUNC_5(VAR_0, "_h2o_define_callback"), 2, VAR_4);

    if (VAR_0->exc != ((void*)0)) {
        FUNC_0("failed to define mruby function: %s\n", VAR_1);
        FUNC_1(VAR_0);
    }
}
