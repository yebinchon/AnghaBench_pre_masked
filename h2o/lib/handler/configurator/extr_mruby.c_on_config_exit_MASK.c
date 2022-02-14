
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yoml_t ;
struct mruby_configurator_t {int * mrb; TYPE_2__* vars; } ;
typedef int h2o_configurator_t ;
struct TYPE_7__ {int * parent; } ;
typedef TYPE_3__ h2o_configurator_context_t ;
struct TYPE_5__ {scalar_t__ base; } ;
struct TYPE_6__ {TYPE_1__ source; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct mruby_configurator_t *VAR_3 = (void *)VAR_0;


    if (VAR_3->vars[-1].source.base != VAR_3->vars[0].source.base)
        FUNC_0(VAR_3->vars->source.base);

    --VAR_3->vars;


    if (VAR_3->mrb != ((void*)0) && VAR_1->parent == ((void*)0)) {
        FUNC_1(VAR_3->mrb);
        VAR_3->mrb = ((void*)0);
    }

    return 0;
}
