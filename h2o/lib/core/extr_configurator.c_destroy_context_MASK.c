
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * env; TYPE_1__* pathconf; } ;
typedef TYPE_2__ h2o_configurator_context_t ;
struct TYPE_5__ {int * env; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(h2o_configurator_context_t *VAR_0)
{
    if (VAR_0->env != ((void*)0)) {
        if (VAR_0->pathconf != ((void*)0))
            VAR_0->pathconf->env = VAR_0->env;
        else
            FUNC_1(VAR_0->env);
    }
    FUNC_0(VAR_0);
}
