
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int yoml_t ;
struct server_timing_configurator_t {TYPE_1__* vars; } ;
typedef int h2o_configurator_t ;
struct TYPE_5__ {int * pathconf; } ;
typedef TYPE_2__ h2o_configurator_context_t ;
struct TYPE_4__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_t *VAR_2, h2o_configurator_context_t *VAR_3, yoml_t *VAR_4)
{
    struct server_timing_configurator_t *VAR_5 = (void *)VAR_2;

    if (VAR_3->pathconf != ((void*)0) && VAR_5->vars->mode != VAR_1)
        FUNC_0(VAR_3->pathconf, VAR_5->vars->mode == VAR_0);

    --VAR_5->vars;
    return 0;
}
