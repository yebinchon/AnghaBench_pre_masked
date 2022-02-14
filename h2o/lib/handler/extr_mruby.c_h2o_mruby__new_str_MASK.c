
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_6__ {int * exc; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (TYPE_1__*,char*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,char const*,size_t) ;
 int FUNC_2 (TYPE_1__*,char const*,size_t) ;

mrb_value FUNC_3(mrb_state *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3, const char *VAR_4, int VAR_5)
{
    if (VAR_0->exc != ((void*)0))
        FUNC_0(VAR_0, "h2o_mruby_new_str:precondition failure", VAR_4, VAR_5);
    mrb_value VAR_6 = VAR_3 ? FUNC_2(VAR_0, VAR_1, VAR_2) : FUNC_1(VAR_0, VAR_1, VAR_2);
    if (VAR_0->exc != ((void*)0))
        FUNC_0(VAR_0, "h2o_mruby_new_str:failed to create string", VAR_4, VAR_5);
    return VAR_6;
}
