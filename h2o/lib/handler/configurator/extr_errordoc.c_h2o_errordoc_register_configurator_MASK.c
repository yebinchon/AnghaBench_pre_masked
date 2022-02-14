
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exit; int enter; } ;
struct errordoc_configurator_t {TYPE_1__ super; int _vars_stack; int vars; } ;
typedef int h2o_globalconf_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(h2o_globalconf_t *VAR_4)
{
    struct errordoc_configurator_t *VAR_5 = (void *)FUNC_0(VAR_4, sizeof(*VAR_5));


    VAR_5->vars = VAR_5->_vars_stack;


    VAR_5->super.enter = VAR_1;
    VAR_5->super.exit = VAR_3;


    FUNC_1(&VAR_5->super, "error-doc", VAR_0, VAR_2);
}
