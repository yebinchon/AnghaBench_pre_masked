
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int yoml_t ;
struct expires_configurator_t {TYPE_1__** args; } ;
typedef int h2o_configurator_t ;
typedef int h2o_configurator_context_t ;
struct TYPE_2__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(h2o_configurator_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    struct expires_configurator_t *VAR_4 = (void *)VAR_1;

    if (VAR_4->args[0] != ((void*)0)) {

        FUNC_0(VAR_4->args[0]->mode == VAR_0);
        VAR_4->args[1] = FUNC_1(sizeof(**VAR_4->args));
        *VAR_4->args[1] = *VAR_4->args[0];
    } else {
        VAR_4->args[1] = ((void*)0);
    }
    ++VAR_4->args;
    return 0;
}
