
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yoml_t ;
struct headers_configurator_t {int ** cmds; } ;
typedef int h2o_configurator_t ;
typedef int h2o_configurator_context_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct headers_configurator_t *VAR_3 = (void *)VAR_0;

    VAR_3->cmds[1] = VAR_3->cmds[0];
    if (VAR_3->cmds[1] != ((void*)0))
        FUNC_0(VAR_3->cmds[1]);

    ++VAR_3->cmds;
    return 0;
}
