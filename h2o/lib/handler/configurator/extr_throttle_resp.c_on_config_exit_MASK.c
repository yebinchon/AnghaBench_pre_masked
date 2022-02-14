
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int yoml_t ;
struct throttle_resp_configurator_t {TYPE_1__* vars; } ;
typedef int h2o_configurator_t ;
struct TYPE_5__ {int * pathconf; } ;
typedef TYPE_2__ h2o_configurator_context_t ;
struct TYPE_4__ {scalar_t__ on; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct throttle_resp_configurator_t *VAR_3 = (void *)VAR_0;

    if (VAR_1->pathconf != ((void*)0) && VAR_3->vars->on)
        FUNC_0(VAR_1->pathconf);

    --VAR_3->vars;
    return 0;
}
