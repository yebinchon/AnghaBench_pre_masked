
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yoml_t ;
struct headers_configurator_t {int ** cmds; } ;
typedef int h2o_configurator_t ;
struct TYPE_3__ {int * pathconf; } ;
typedef TYPE_1__ h2o_configurator_context_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct headers_configurator_t *VAR_3 = (void *)VAR_0;

    if (VAR_1->pathconf != ((void*)0) && *VAR_3->cmds != ((void*)0)) {
        if (*VAR_3->cmds != ((void*)0))
            FUNC_1(*VAR_3->cmds);
        FUNC_0(VAR_1->pathconf, *VAR_3->cmds);
    }

    if (*VAR_3->cmds != ((void*)0))
        FUNC_2(*VAR_3->cmds);
    --VAR_3->cmds;
    return 0;
}
