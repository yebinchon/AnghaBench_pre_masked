
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * env; TYPE_1__* parent; } ;
typedef TYPE_2__ h2o_configurator_context_t ;
struct TYPE_4__ {int * env; } ;


 int * FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(h2o_configurator_context_t *VAR_0)
{
    if (VAR_0->env == (VAR_0->parent != ((void*)0) ? VAR_0->parent->env : ((void*)0)))
        VAR_0->env = FUNC_0(VAR_0->env);
}
