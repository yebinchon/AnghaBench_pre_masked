
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int super; } ;
typedef TYPE_1__ h2o_mruby_handler_t ;
typedef int h2o_mruby_context_t ;
typedef int h2o_handler_t ;
typedef int h2o_context_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(h2o_handler_t *VAR_0, h2o_context_t *VAR_1)
{
    h2o_mruby_handler_t *VAR_2 = (void *)VAR_0;
    h2o_mruby_context_t *VAR_3 = FUNC_1(VAR_1, &VAR_2->super);

    if (VAR_3 == ((void*)0))
        return;

    FUNC_0(VAR_3);
}
