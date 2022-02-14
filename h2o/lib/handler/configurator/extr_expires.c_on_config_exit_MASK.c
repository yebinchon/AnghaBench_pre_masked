
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yoml_t ;
struct expires_configurator_t {TYPE_3__** args; } ;
typedef int h2o_configurator_t ;
struct TYPE_5__ {int * pathconf; } ;
typedef TYPE_1__ h2o_configurator_context_t ;
struct TYPE_6__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    struct expires_configurator_t *VAR_4 = (void *)VAR_1;

    if (*VAR_4->args != ((void*)0)) {

        if (VAR_2->pathconf != ((void*)0)) {
            FUNC_2(VAR_2->pathconf, *VAR_4->args);
        }

        FUNC_0((*VAR_4->args)->mode == VAR_0);
        FUNC_1(*VAR_4->args);
        *VAR_4->args = ((void*)0);
    }

    --VAR_4->args;
    return 0;
}
